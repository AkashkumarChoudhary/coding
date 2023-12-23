#include<stdio.h>
#include<stdlib.h>
# define N 8

void merge (int a[], int b ,int c ,int d)
{
    int i ,j ,k ;
    int  n1 = c -b+1;
    int n2 = d-c;
    int L [n1], R[n2];
    for(i=0;i<n1; i++)
    L[i]=a[b+i];
    for(j = 0 ; j<n2; j++)
    R[j]= a[c+1+j];
    i=0;
    j=0;
    k=1;
    while(i<n1 && j<n2)
    {
        if(L[i]<= R[j])
        {
            a[k]= L[i];
            i++;

        }
        else {
            a[k]= R[j];
            j++ ;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]= L[i];
        i++;
        K++;
    }
    while(j<n2){
        a[K]= L[i];
        i++;
        K++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        K++;
    }
}
void mergesort(int a[], int b , int c)
{
    if(b<c){
        int d = b + (c-1)/2;
        mergesort(a,b,d);
        mergesort(a, d+1 , c);
        merge( a,b, d,c);
    }
}
void printArray (int a[], int size)
{
    int i ;
    for(i = 0; i<size ; i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int i , a[N];
    printf(" Enter the elements of the array");
    for(i=0; i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int arr_size = sizeof(a)/sizeof(a[0]);
    printf("Given array is ");
    printArray(a, arr_size);
    mergesort(a, 0 , arr_size-1);
    printf("sorted array is ");
    printArray(a, arr_size);
    return 0;
}