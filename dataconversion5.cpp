//user define data type to another user define datatype(destination)
#include<iostream>
using namespace std;
#define pi 3.14159
class Degree
{
private:
 float degree;
 public:
 Degree()
 {
 degree=0.0;
 }
 float getdegree()
 {
 return degree;
 }
 void input()
 {
    cout<<"enter degree";
 cin>>degree;
 }
};
class Radian
{
private:
 float rad;
 public:
 Radian()
 {
 rad=0.0;
 }
 float getradian()
 {
 return rad;
 }
 Radian(Degree deg)
 {
 rad=deg.getdegree()*pi/180.0;
 }
 void display()
 {
 cout<<"Radian ="<<getradian();
 }
};
int main()
{
Degree d1;
 Radian r1;
 //d1 and r1 are objects
 d1.input();
 r1=d1;
 r1.display();
 return 0;
}