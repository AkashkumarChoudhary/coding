#include<stdio.h>
void main (){
    char a [10] ,b[10] ,c[10],a1[10],b1[10],c1[10];
    FILE *fp1 , *fp2, *fp3, *fp5, *fp4 ;
    fp5=fopen("nametab.txt" , "w");
    fp4=fopen("exp.txt" , "w");
    fp1=fopen("in11.txt", "w");
    fp2=fopen("deftab.txt","w");
    fscanf(fp1, "%s %s %s " , a, b , c) ;
              if(strcmp(b,"MACRO")==0)
              {
                fprintf(fp5 , "%s\n",a);

              }
              fscanf(fp1,"%s %s %s", a, b ,c) ;
              while (strcmp(b, "MEND")!=0)
              {
                   fprintf(fp2,"%s %s %s\n" ,a ,b,c) ;
                   fscanf(fp1, "%s %s %s" , a, b, c);

              }
              fprintf(fp2,"%s %s %s\n" , a ,b ,c) ;
              fclose(fp2);
              fscanf(fp1, "%s %s %s" , a , b ,c);
              while(!feof(fp1))
              {
                   fscanf(fp1, "%s %s %s " , a  , b ,c);
                   if(strcmp(b , "SUM")==0)

{
    fp3=fopen("deftab.txt","r");
    fscanf(fp3, "%s %s %s" ,a1, b1 , c1);
    //while(!feof(fp3))
    while (strcmp(b1, "MEND") !=0)
    {
        fprintf(fp4, "%s %s %s \n" , a1,b1 ,c1);
        fscanf(fp3, "%s %s %s" , a1, b1 ,c1);

    } 

}       
fclose(fp3);
//printf("hi%s\n",b);

       }
}