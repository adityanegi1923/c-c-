#include<iostream>
using namespace std;
class b;
class A
{
    private:
    int val1;
    public:
    void getdata(int d)
    {
        val1=d;
    }
    void printdata()
    {
        cout<<"value of a before swapping "<<val1<<endl;
    }
    void print()
    {
        cout<<val1<<endl;
    }
    friend void swap(A &,b &);
};
class b
{
    private:
    int val2;
    public:
    void getdata(int n)
    {
        val2=n;
    }
    void printdata()
    {
        cout<<"value of b before swapping "<<val2<<endl;
    }
    void print()
    {
        cout<<val2<<endl;
    }
    friend void swap(A &,b &);
};
void swap(A &n1,b &n2)
{
    int temp;
    temp=n1.val1;
    n1.val1=n2.val2;
    n2.val2=temp;
}
int main()
{
    A c1;
    b c2;
    int n1;
    int n2;
    cout<<"enter the first number :";
    cin>>n1;
    cout<<"enter the second number :";
    cin>>n2;
    c1.getdata(n1);
    c1.printdata();
    c2.getdata(n2);
    c2.printdata();
    swap(c1,c2);
    cout<<"value of a after swapping :";
    c1.print();
    cout<<"value of b after swapping :";
    c2.print();
    return 0;

}