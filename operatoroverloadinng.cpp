#include<iostream>
using namespace std;
class exam
{
int x;//data member
    public:

    exam()
    {
        x=0;
       
    }
    int display()
    {
        return x;
    }
    void operator ++ ()
    {
        x++;
    }
};
int main()
{
    exam e;
    cout<<e.display()<<endl;
    ++e;
    cout<<e.display()<<endl;
    ++e;
    ++e;
    e++;
    cout<<e.display();
    return 0;
}