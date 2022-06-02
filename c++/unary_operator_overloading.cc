#include<iostream>
using namespace std;
class space
{
    private:
    int x;
    int y;
    int z;
    public:
    void getdata(int x, int y, int z);
    void disp();
    void operator-();
};
void space::getdata(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}
void space::disp()
{
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<"\n";
}
void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    s.getdata(10,20,-30);
    cout<<"s:";
    s.disp();
    -s;
    cout<<"s:";
    s.disp();
    return 0;
}
