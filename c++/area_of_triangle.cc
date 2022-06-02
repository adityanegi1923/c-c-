#include<iostream>
#include<string.h>
using namespace std;
class triangle
{
    public:
    int height;
    int base;
    int side1,side2,side3;
    int area(int height,int base)
    {
        int x;
       x=0.5*(height*base);
       cout<<"area of triangle"<<x;
       cout<<endl;
        return x;
    }
    int perimeter(int side1,int side2,int side3)
    {
        int y;
        y=side1+side2+side3;
        cout<<"perimeter of a triangle"<<y;
        return y;
    }
};
int main()
{
    triangle z;
    cout<<"enter height of triangle:";
    cin>>z.height;
    cout<<"enter base of the triangle:";
    cin>>z.base;
    z.area(z.height,z.base);
    cout<<"enter the sides of triangle:"<<endl;
    cin>>z.side1>>z.side2>>z.side3;
    z.perimeter(z.side1,z.side2,z.side3);
    return 0;
}