#include<stdio.h>
#include<conio.h> 
#include<string.h>
#include<stdlib.h>
int main()
{
    char symbol [20] , opcode[20] , mnemonic[20] , operand[20] , label [20] , code [20] , character , add [20] , objectcode[20] ;
    int locctr , flag ,flag1 , loc;
    FILE *fp1 ,*fp2 , *fp3 ,*fp4;

    fp1= fopen("out.dat" , "r") ;
    fp2= fopen("twoout.dat" , "w");
    fp3= fopen("optab.dat","r");
    fp4=fopen("symbtab.dat","r");
    fscanf(fp1,"%s%s%s", label, opcode,operand);
    if(strcmp(opcode,"START")==0)
    {
     fprintf(fp2, "\t%s\t%s\t%s\n", label,opcode,operand);
     fscanf(fp1,"%d%s%s%s", &locctr, label, opcode,operand);

    }
    while(strcmp(opcode,"END")!=0)
    {
        flag=0;
        rewind (fp3);
        fscanf(fp3,"%s%s" , mnemonic,code);
        while(strcmp(mnemonic,"END") !=0)
        {
            flag=0;
            rewind(fp3);
            fscanf(fp3, "%s%s", mnemonic , code);
            while (strcmp(mnemonic, "END" ) !=0)
            {
                if((strcmp(opcode, mnemonic)==0)&&(strcmp(code,"*")!=0))
                {
                    flag =1;
                    break;
                }
                fscanf(fp3,"%s%s", mnemonic, code);

            }
            if(flag==1)
            {
                flag1=0;
                rewind(fp4);
                while(!feof(fp4))
                {
                    fscanf(fp4, "%s%d" , symbol,&loc);
                    if(strcmp(symbol, operand)==0)
                    {
                        flag1=1;
                        break;
                    }
                }
                if(flag1==1)
                {
                    itoa(loc,add,10);
                    strcpy(objectcode,strcat(code,add));

                }
            }
            else if(strcmp(opcode,"BYTE")==0|| strcmp(opcode,"WORD")==0)
            {
                if(operand[0] == 'C'||operand[0]=='X')
                {
                    character=operand[2];
                    itoa(character,add ,16);
                    strcpy(objectcode,add);


                }
                else{
                    itoa(atoi(operand),add, 10);
                    strcpy(objectcode,add);
                }
            }
            else
            strcpy(objectcode,"\0");
            fprintf(fp2,"%d\t%s\t%s\t%s\t%s\n",locctr,label,opcode,operand,objectcode);
            fscanf(fp1,"%d%s%s%s",&locctr,label,opcode,operand);


        }
        fprintf(fp2,"\t%s\t%s\t%s\n",label,opcode, operand);
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        fclose(fp4);
        getch();
    }
}