#include<iostream>
using namespace std;

class Time
{
private:
    int HR,MIN,SEC;
public:
    void setTime(int,int,int);
    void showTime();
    void normalize();
    Time operator +(Time t)
    {
        Time k;
        k.HR=HR+t.HR;k.MIN=MIN+t.MIN;k.SEC=SEC+t.SEC;
        return k;
    }
};

void Time::setTime(int h, int m, int s)
{
    HR=h;MIN=m;SEC=s;
}
void Time::showTime()
{
    cout<<endl<<HR<<":"<<MIN<<":"<<SEC<<endl;
}
void Time::normalize()
{
    MIN=MIN+SEC/60;
    SEC=SEC%60;
    HR=HR+MIN/60;
    MIN=MIN%60;
}

int main()
{
    Time t1,t2,t3;
    t1.setTime(4,100,100);
    t2.setTime(5,20,60);
    t1.showTime();
    t2.normalize();
    t1.normalize();
    cout<<"T1"<<endl;
    t1.showTime();
    cout<<"T2"<<endl;
    t2.showTime();
    t3=t1+t2;
    t3.showTime();
    t3.normalize();
    t3.showTime();
    return 0;
}
