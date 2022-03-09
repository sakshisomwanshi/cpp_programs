/*#include<iostream>
using namespace std;
class A
{
private:
    void privatefunction()
    {
        cout<<"in private"<<endl;
    }
public:
    void publicfunction()
    {
        cout<<"in public"<<endl;
    }
protected:
    void protectedfunction()
    {
        cout<<"in protected"<<endl;
    }

};
class B:public A
{
public:
    void disp()
    {
        publicfunction();
        protectedfunction();

    }
};
int main()
{
    B ob1;
    ob1.disp();
    ob1.publicfunction();
    return 0;
}
#include<iostream>
using namespace std;
class A
{
private:
    void privatefunction()
    {
        cout<<"in private"<<endl;
    }
public:
    void publicfunction()
    {
        cout<<"in public"<<endl;
    }
protected:
    void protectedfunction()
    {
        cout<<"in protected"<<endl;
    }

};
class B: protected A
    {
    public:
        void disp()
        {
            publicfunction();
            protectedfunction();
        }

    };
    int main()
    {
        B ob1;
        ob1.disp();
        return 0;
    }*/
#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void setid(int x)
    {
        id=x;
    }
    int getid()
    {
        return id;
    }
    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
};
class mark:public student
{
private:
    int m1,m2;
public:
    void setm1(int x)
    {
        m1=x;
    }
    int getm1()
    {
        return m1;
    }
    void setm2(int x)
    {
        m2=x;
    }
    int getm2()
    {
        return m2;
    }
};
int main()
{
    mark ob1;
    ob1.setid(1);
    ob1.setname("sakshi");
    ob1.setm1(90);
    ob1.setm2(95);
    cout<<ob1.getid()<<endl;
    cout<<ob1.getname()<<endl;
    cout<<ob1.getm1()<<endl;
    cout<<ob1.getm2()<<endl;
}
