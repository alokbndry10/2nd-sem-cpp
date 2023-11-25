//write a program to print the area of triangle , square , circle using the concept of function overloading
#include<iostream>
using namespace std;
void area(float length){
    float area;
    area=length*length;
    cout<<endl<<"area of square having length "<<length<<"is"<<area<<endl;
}
void area(float base,float height){
    float area;
    area=(0.5)*height*base;
    cout<<endl<<"area of triangle having height"<<height<<"and breadth"<<base<<"is"<<area<<endl;
}
void area1(float radius){
    int area;
    area=3.14*radius*radius;
    cout<<endl<<"area of circle having radius "<<radius<<"is"<<area<<endl;
}

int main(){
    cout<<"select shape for area"<<endl<<"1=triangle"<<endl<<"2=square"<<endl<<"3=circle"<<endl;
    int s;
    cin>>s;
    switch(s){
        case 1:{
            float base,height;
            cout<<"enter the breadth  and  height of triangle"<<endl;
            cin>>base>>height;
            area(base,height);
            break;
        }
        case 2:{
            float length;
            cout<<"enter the length square"<<endl;
            cin>>length;
            area(length);
            break;
        }
        case 3:{
            float radius;
            cout<<"enter the radius of circle"<<endl;
            cin>>radius;
            area(radius);
            break;
        }
    }
}
