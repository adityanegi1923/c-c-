#include<iostream>
using namespace std;
class shop
{
    private:
    int id;
    float price;
    public:
    void getdata(int i,float p)
    {
        id=i;
        price=p;
    }
    void printdata()
    {
        cout<<"id of the item is "<<id<<endl;
        cout<<"price of the item is "<<price<<endl;
    }
};
int main()
{
    int id;
    float p;
    int size=2;
    int i;
    shop *ptr=new shop[size];
    shop *temp=ptr;
    for(i=0;i<size;i++)
    {
        cout<<"enter the id & price of the item "<<i+1<<":";
        cin>>id>>p; 
        ptr->getdata(id,p);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        temp->printdata();
        temp++;
    }
    return 0;
}