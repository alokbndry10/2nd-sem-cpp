//write a program to convert userdefine data to basic( object to int)
#include<iostream>
using namespace std;
class Meter
{
private:
 float length;
 public:
 Meter()
 {
 length=0;
 }
 operator float()
 {
 float l;
 l=length*100.0;//meter to centimeter
 return (l);
 }
 void getlength()
 {
 cout<<"\nEnter length (in meters):";
 cin>>length;
 }
 };
int main()
{
Meter m1;
 float l1;
 m1.getlength();
 //m1 is user-defined and l1 is basic
 l1=m1;//convert from user-defined to basic;
 cout<<"Length in cms="<<l1;
return 0;
}
