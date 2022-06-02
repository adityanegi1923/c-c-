#include<iostream>
using namespace std;
class complex
{
    private:
    int real,image;
    public:
    complex(){}
    complex(int r,int y)
    {
        real=r;
        image=y;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real=real+obj.real;
        res.image=image+obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real=real-obj.real;
        res.image=image-obj.image;
        return res;
    }
    bool operator=(complex obj)
    {
        complex res;
        if(real==obj.real&&image==obj.image)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        cout<<real<<"+"<<image<<"i";
    }
};
int main()
{
    complex a(3,1),b(5,2),c;
    c=a+b;
    c.display();
    return 0;
    
}