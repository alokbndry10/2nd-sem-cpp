#include<iostream>
using namespace std;
void volume(int l,int b,int h=10){
    cout<<"volume of rectangle with length  "<<l<<" breadth "<<b<<" and height "<<h<<" is "<<l*b*h<<endl;
    }
int main(){
    float l,b,h;
    cout<<"enter the lenght breadth and height of a rectangle"<<endl;
    cin>>l>>b>>h;cout<<endl;
    volume(l,b,h);
}