
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string name;
    int units;
    float charges;
    float scharges;
    float sum;
    cout<<"enter your name :";
    cin>>name;
    cout<<"enter the units of electricity you have used :";
    cin>>units;
    cout<<endl;
    cout<<"name of the user :"<<name<<endl;
    if(units<=100)
    {
        charges=(0.60)*units;
        cout<<"the electricity bill is :"<<charges<<" rupees"<<endl;
    }
    if(units>100&&units<=300)
    {
        charges=(0.80)*units;
        cout<<"the electricity bill is :"<<charges<<" rupees"<<endl;
    }
    else
    {
        charges=(0.90)*units+50;
        scharges=(charges*15)/100;
        sum=charges+scharges;
        cout<<"the scharges bill is :"<<scharges<<" rupees"<<endl;
        cout<<"the total electricity bill is :"<<sum<<" rupees"<<endl;
    }
    return 0;
    
}