#include<iostream>
#include<string.h>
using namespace std;
class first{
    char name[20];
    int age;
    public:
    void getdata();
    void showdata();
    void add(first &a,first &b){
        age=a.age+b.age;
        cout<<age<<endl;
        strcat(a.name,b.name);
        cout<<a.name;
    }
};
void first::getdata(){
    cout<<"enter your age";
    cin>>age;
    cout<<endl<<"enter name ";
    cin>>name;
}
void first::showdata(){
    cout<<"name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
}
int main(){
    first f1,f2,f3;
    f1.getdata();
    f2.getdata();
    f3.add(f1,f2);
}