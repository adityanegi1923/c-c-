#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;
    int phone_num;
    string address;
};
int main()
{
    student x;
    int n;
    cout<<"how many students:";
    cin>>n>>endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter your name:";
        cin>>x.name;
        cout<<"enter your roll no:";
        cin>>x.roll_no;
        cout<<"enter your address:";
        cin>>x.address>>endl;
        cout<<"enter your phone number:";
        cin>>x.phone_num>>endl;
        cout<<endl;
    }
}