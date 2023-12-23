/* Example1 : To find the area of circle, triangle, square,and rectangle using function overload.
Explanation : here we will code a progrom which will use the overloaded function (area) to find the solution of the given example.

Example2 : To find the multiplication of 2 and 3 numbers with the help of the same code.

Input: 5,2
Output : 10
Explanation : The function with 2 inputs will multiply both of them and will give the output on the screen.
 
Input : 5,4,3
Output : 60
Explanation : The function with 3 inputs will multiply all of them and will give the output on the screen.

*/
#include<iostream>
using namespace std;
void mult(int a, int b)
{
    cout<< " multiplication of two number are: "<< (a*b);

}
void mult(int a , int b , int c)
{
    cout<<endl<<" Multiplication of 3 numbers are :"<< (a*b*c);
}

int main()
{
    mult(5,2);
    mult(5,4,3);
    return 0;
}