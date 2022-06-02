
#include<iostream>
#include<string>
using namespace std;
class binary
{
    private:
    string s;
    void check_bin(void);
    public:
    void read(void);
    void one_compliment(void);
    void disp(void);
};
int main()
{
    binary b;
    b.read();
    b.disp();
    b.one_compliment();
    b.disp();
    return 0;
}
void binary::read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary::check_bin(void)
{
    for(int i=0;i<=s.length();i++)
    {
    if(s.at(i)!='0'&&s.at(i)!='1')
    {
        cout<<"the number is not binary"<<endl;
        exit(0);
    }
    }
}
void binary::one_compliment(void)
{
    check_bin();
    cout<<"one's compliment for the bin number is:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}
void binary::disp(void)
{
    cout<<"displaying your number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
