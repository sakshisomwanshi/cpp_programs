
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
