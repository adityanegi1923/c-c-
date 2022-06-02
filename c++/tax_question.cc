#include<iostream>
using namespace std;
class salary
{
    private:
    int sal;
    float tax;
    public:
    salary()
    {}
    salary(int s)
    {
        s=sal;
    }
    void display(int s)
    {
        cout<<"salary of the employee:"<<s<<endl;
        tax= (10*s)/100;
        cout<<"tax of the employee:"<<tax<<endl;
    }      
};
int main()
{
    char name[10];
    int sal;
    salary s;
    int n;
    cout<<"how many employees:";
    cin>>n;
    cout<<endl;
    for(int i=0;i<=n;i++)
    { 
        cout<<"enter the name of the employee:";
        cin>>name;
        cout<<"enter the salary: ";
        cin>>sal;
        cout<<"name of the employee:"<<name<<endl;
        s.display(sal);
    }
    return 0;
}