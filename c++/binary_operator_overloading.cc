#include<iostream>
using namespace std;
class space
{
    float r;
    float i;
    public:
    space(){}
    space(float real,float image)
    {
        r=real;
        i=image;
    }
    space operator+(space);
    void disp();
};
space space::operator+(space c)
{
    space temp;
    temp.r=r+c.r; 
    temp.i=i+c.i; 
    return(temp);
}
void space:: disp()
{
    cout<<r<<"+j"<<i<<"\n";
}
int main()
{
    space s1,s2,s3;
    s1=space(1.2,3.1);
    s2=space(1.4,1.5);
    s3=s1+s2;
    cout<<"s1=";s1.disp();
    cout<<"s2=";s2.disp();
    cout<<"s3=";s3.disp();
    return 0;
}