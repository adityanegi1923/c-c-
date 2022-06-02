#include<iostream>
#include<cstring>
using namespace std;
class video
{
    protected:
    string title;
    float rating;
    public:
    video(string t,float r)
    {
        title=t;
        rating=r;
    }
    virtual void display(){}
};
class videotime:public video
{
    int length;
    public:
    videotime(string t,float r,int l):video(t,r)
    {
        length=l;
    }
    void display()
    {
        cout<<"the title of the video is :"<<title<<endl;
        cout<<"the time of the video is :"<<length<<endl;
        cout<<"the rating of the video is "<<rating<<" out of 5"<<endl;
    }
};
class videotext:public video
{
    int words;
    public:
    videotext(string t,float r,int w):video(t,r)
    {
        words=w;
    }
    void display()
    {
        cout<<"the title of the video is :"<<title<<endl;
        cout<<"the total no words in the video is :"<<words<<endl;
        cout<<"the rating of the video is "<<rating<<" out of 5";\
    }
};
int main()
{
    string title;
    int words;
    int length;
    float rating;
    cout<<"enter the title of the video :";
    cin>>title;
    cout<<"enter the rating of the video :";
    cin>>rating;
    cout<<"enter the length of the video :";
    cin>>length;
    cout<<"enter the number of words in the video :";
    cin>>words;
    videotime temp(title,rating,length);
    videotext ptr(title,rating,words);
    video *p[2];
    p[0]=&temp;
    p[1]=&ptr;
    p[0]->display();
    p[1]->display();
    return 0;
}