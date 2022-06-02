#include<iostream>
using namespace std;
class savingaccount
{
    private:
    float savingbalance;
    public:
    float intrest_rate;
    savingaccount(){}
    savingaccount(int s)
    {
        savingbalance=s;
    }
    void monthlyintrest()
    {
        savingbalance=savingbalance+((savingbalance*intrest_rate)/12);
        cout<<"saving balance amount of the user is :"<<savingbalance<<endl;
    }
    void modifyintrest_rate(float n)
    {
        intrest_rate=n;
    }
};
int main()
{
    savingaccount saver1(2000);
    savingaccount saver2(3000);
    saver1.modifyintrest_rate(4);
    saver1.monthlyintrest();
    saver2.modifyintrest_rate(4);
    saver2.monthlyintrest();
    return 0;

}
