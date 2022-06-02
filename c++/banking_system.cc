#include<iostream>
#include<cstring>
using namespace std;
class bank
{
    private:
    string name;
    int accountnumber;
    string accounttype;
    float amount=0;
    public:
    void getdata(string n,int an,string at,float a)
    {
        name=n; 
        accountnumber=an;
        accounttype=at;
        amount=a;
    }
    void deposit()
    {
        int sum;
        cout<<"enter the number of amount you want to deposit :";
        cin>>sum;
        amount=amount+sum;
        cout<<sum<<" number of amount has been deposited in your bank account"<<endl;
    }
    void withdraw()
    {
        int sub;
        cout<<amount<<" is present in your bank account"<<endl;
        if(amount==0)
        {
            cout<<"you don't have any amount present in your bank account"<<endl;
        }
        else
        {
            amount=amount-sub;
            cout<<sub<<"number of amount has been withdrawn from your bank account"<<endl;
            cout<<"amount left on your bank account :"<<amount<<endl;
        }
    }
    void display()
    {
        cout<<"name of the accountant :"<<name<<endl;
        cout<<"account number of the account :"<<accountnumber<<endl;
        cout<<"type of account accountant have :"<<accounttype<<endl;
        cout<<"balance amount in the account :"<<amount<<endl;
    }
};
int main()
{
    int choice;
    string n;
    int an;
    int x;
    string at;
    float a;
    bank b;
    cout<<"enter the name of the accountant :";
    cin>>n;
    cout<<"enter the type of account to be made :";
    cin>>at;
    cout<<"enter the account number :";
    cin>>an;
    b.getdata(n,an,at,a);
    do
    {
        cout<<"do you want to deposit , withdraw or display..."<<endl;
        cout<<"1.to deposit\n2.to withdraw\n3.to display :";
        cin>>choice;
        switch(choice)
        {
            case 1:
            b.deposit();
            break;
            case 2:
            b.withdraw();
            break;
            case 3:
            b.display();
            break;
            default:
            cout<<"invalid case"<<endl;
            break;
        }
        cout<<"continue or not..."<<endl;
        cout<<"1.to continue\n2.to exit :";
        cin>>x;    
    } while (x==1);
    {
        return 0;
    }
    
}