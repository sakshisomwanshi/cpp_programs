#include<iostream>
using namespace std;
class Test
{
    private:
    void show()
    {
        cout<<"In private"<<endl;
    }
    public:
    void disp()
    {
     cout<<"In public"<<endl;
     show();
    }
};
int main()
{
    //create object of class test
    Test t1;
    t1.disp();
    return 0;
}


#include<iostream>
using namespace std;
class Bulb
{
private:
    string companyName;
    int watt;
    bool status;
public:
    void createBulb()
    {
        cout<<"companyName"<<endl;
        cin>>companyName;
        cout<<"wattage"<<endl;
        cin>>watt;
        status=false;
    }
    void showstatus()
    {
        if(status){
            cout<<"bulb is on"<<endl;
        }
        else{
            cout<<"bulb is off"<<endl;
        }
    }
};
int main(){
Bulb b1;
b1.createBulb();
b1.showstatus();
}
#include<iostream>
#include<string.h>
using namespace std;
class planets
{
    private:
        string planetName;
         float distance;
         float relativeGr;
    public:
        void takeinfo()
        {
            planetName="mercury";
            distance=56.7890;
            relativeGr=9.80;
            cout<<planetName<<endl;
            cout<<distance<<endl;
            cout<<relativeGr<<endl;
        }
};
int main(){
    planets p1;
    p1.takeinfo();

}
#include<iostream>
#include<string.h>
using namespace std;
class airlineTickets
{
private:
    string dep;
    string arri;
    int flightno;
    string seat;
public:
    void ticket()
    {
        cout<<"departure city"<<endl;
        cin>>dep;

        cout<<"arrival city"<<endl;
        cin>>arri;

        cout<<"flight no"<<endl;
        cin>>flightno;

        cout<<" seat"<<endl;
        cin>>seat;

        cout<<dep<<endl;
        cout<<arri<<endl;
        cout<<flightno<<endl;
        cout<<seat<<endl;

    }
};
int main()
{
    airlineTickets t1;
    airlineTickets t2;
    t1.ticket();
    t2.ticket();
}
#include<iostream>
using namespace std;
class Test
{
private:
    int i,j;
public:
    //constructor
    Test()
    {
        i=10;
        j=20;
        cout<<"constructor without args called"<<endl;
    }
    void add()
    {
        cout<<i+j<<endl;
    }
};
int main()
{
    Test t1;
    Test t2;
    t1.add();
    t2.add();
}
#include<iostream>
using namespace std;
class room
{
private:
    float vol,l,b,h;
public:
   int volume(int l,int b,int h)
   {
       vol=l*b*h;
           cout<<vol;
   }
};
int main()
{
    room r1;
    r1.volume(30.4,3.4,5.6);
}
#include<iostream>
using namespace std;
class student
{
private:
    string name;
    float m1,m2,m3,avg;
public:
    float stu()
    {
        getline(cin,name);
        cin>>m1>>m2>>m3;
        cout<<name<<endl;
        avg=(m1+m2+m3/3);
        cout<<avg<<endl;
    }
};
int main()
{
    student s1;
    s1.stu();
}
#include<iostream>
using namespace std;
class box
{
private:
    float l,b,h;
public:
    box()
    {
        cout<<"box has volume and area"<<endl;
    }
    float setvalue()
    {
        cin>>l>>b>>h;
    }
    float getvolume()
    {
        int vol=l*b*h;
        cout<<"volume is"<<vol<<endl;
    }
    float getarea()
    {
        int area=2*(l*b+l*h+b*h);
        cout<<"area is"<<area<<endl;
    }
};
int main()
{
box b1;
b1.setvalue();
b1.getvolume();
b1.getarea();
return 0;
}




