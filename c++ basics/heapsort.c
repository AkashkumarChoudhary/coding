#include<stdio.h>
#define Nn 
void swap (int* a , int* b )
{
    int temp = *a;
    *a = *b ;
    *b = temp ;
}
void heapify(int a[], int N , int i)
{
    int largest = i ;
    int left = 2*i+1 ;
    int right = 2*i+2 ;
    if( left <N && a[left]> a[largest])
    largest = left ;
    if(right < N && a [right] > a [largest])
    largest = right;
    if(largest! = i)
    {
        swap(&a[i], &a[largest]);
        heapify(a, N , largest);

    }
}
void heapsort (int a[], int N)
{
    for(int i = N/2 -1 ; i>=0 ; i--)
    heapify (a,N, i);
    for(int i = N-1 ; i>= 0 ; i--){
        swap(&a[0], &a[i]);
        heapify(a,i, 0);

    }
}
void printArray(int a[], int N)
{
    for(int i = 0; i<N ; i++)
    printf("%d", a[i]);
}
int main ()
{
    int i ;
    int a[Nn];
    printf("Enter the elements of array");
    for(i=0 ; i<Nn ; i++)
    scanf("%d", &a[i]);
    int N = sizeof of (a)/ sizeof (a[0]);
    heapsort(a, N );
    printf("sorted array is ");
    printArray(a , N);

}