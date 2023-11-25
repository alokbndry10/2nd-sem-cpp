//user define data type to another userdefine datatype(source)
#include<iostream>
using namespace std;
#define pi 3.14159
class Radian
{
private:
 float rad;
 public:
 Radian()
 {
 rad=0.0;
 }
 Radian (float r)
 {
 rad=r;
 }
 float getradian()
 {
 return rad;
 }
 void display()
 {
 cout<<"Radian ="<<getradian();
 }
};
class Degree
{
private:
 float degree;
 public:
 Degree()
 {
 degree=0.0;
 }
 operator Radian()
 {
 float radian;
 radian=degree*pi/180.0;
return(Radian(radian));
 }
 void input()
 {
 cout<<"enter degree";
 cin>>degree;
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
