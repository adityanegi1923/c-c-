#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    A & setdata(int a)
    {
        this->a=a;
        return *this;
    }
    void printdata()
    {
        cout<<"the value of a is :"<<a<<endl;
    }
};
int main()
{
   A an;
   an.setdata(2).printdata();
   return 0;
}