#include<stdio.h>
int main(){
    int a[100],b[100],c[100],j,i,n,k;
    printf("Enter the value of n");
    scanf("%d",&n);

    printf("Enter the elements");
    for( i=0; i<n ; i++){
        scanf("%d", &a[i]);

    }
    j=0 , k=0;
    for(i=0;i<n; i++){
        if(a[i]%2 == 0){
            b[j]= a [i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    printf("even array is ");
    for(i=0; i<j;i++)
    printf("%d \t",b[i]);
    printf("\n odd array is");
    for(int i =0 ; i<k; i++)
    printf("%d\t", c[i]);
    return 0;
}