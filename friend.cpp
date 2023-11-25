#include<iostream>
 using namespace std;
 class alok{
 int x,y;
 public:
 void getdata() 
{ cout<<"Enter x and y: "; 
cin>>x>>y;
 } 
friend alok show (alok a); 
};
alok show(alok a) {
 cout<<a.x<<endl<<a.y;
 return a;
 } 
int main()
{
 alok a; 
a.getdata();
 show(a);
 return 0;
}
