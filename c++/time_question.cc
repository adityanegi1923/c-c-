#include<iostream>
using namespace std;
class time
{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    time()
    {
        hours=minutes=seconds=0;
    }
    time(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void display()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    void add(time x,time y)
    {
        seconds=x.seconds+y.seconds;
        if(seconds>=60)
        {
            seconds=seconds-60;
            minutes++;
        }
        minutes=x.minutes+y.minutes;
        if(minutes>=60)
        {
            minutes=minutes-60;
            hours++;
        }
        hours=x.hours+y.hours;
    }
};
int main()
{
    time x(5,2,30),y(6,35,10);
    time z;
    z.add(x,y);
    z.display();
}