#include<iostream>
using namespace std;

class alok{
    int x,y;
    public:
    void getdata(){    //defining function using scope resolution 
        cout<<"enter the value for x and y";
        cin>>x>>y;
    }
    void showdata();
};
void alok::showdata(){ //defining fuction outsite the class using scope resoultion
    cout<<"value of x and y is"<<x<<y;
}
int main(){
    alok first;
    first.getdata();
    first.showdata();
    alok student[10];
    for( int i=0;i<10;i++){
        student[i].getdata();
        cout<<endl;
    }
    for( int i=0;i<10;i++){
        student[i].showdata();
        cout<<endl;
    }
}