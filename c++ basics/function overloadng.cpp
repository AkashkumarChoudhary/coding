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
const float pi = 3.14 ;

float area(float n, float b  , float h){
    float ar;
    ar=n*b*h;
    return ar;
}

float area(float r)
{
    float ar;
    ar=pi*r*r;
    return ar;
}

float area(float l,float b){
    float ar;
    ar= l*b;
    return ar;
}

int main()
{
    float b,h,l,r;
    float show;
    show=area(0.5,4,5);
     cout<<"The area of the Triangle is "<<show<<endl;
    show=area(12);
    cout<<"The area of the Circle is "<<show<<endl;
    show=area(7,9);
    cout<<"The area of the Rectangle is "<<show<<endl;
    
    return 0;
}