//WAP to find sum of two complex number by overloading << and >> stream operator.
#include <iostream>
#include <fstream>
using namespace std;
class complex
{
public:
int a,b;
complex()
{
a=0;
b=0;
}
complex operator+( complex& x)
{
 complex temp;
 temp.a = a + x.a;
 temp.b = b + x.b;
 return temp;
 }
friend istream & operator >>(istream &in, complex &c);
friend ostream & operator <<(ostream &out, complex &c);
};
istream & operator >>(istream &in, complex &c)
{
cout<<"Real part:"<<endl;
in>>c.a;
cout<<"Imaginery part:"<<endl;
in>>c.b;
return in;
}
ostream & operator <<(ostream &out, complex &c)
{
out<<c.a<<"+"<<c.b<<"i"<<endl;
return out;
}
int main()
{
complex c1,c2,sum;
cout<<"Enter first complex number:"<<endl;
cin >> c1;
cout << c1;
cout<<"Enter second complex number:"<<endl;
cin >> c2;
cout << c2;
sum=c1+c2;
cout<<"The sum of two complex number is:"<<endl<<sum<<endl;
return 0;
}