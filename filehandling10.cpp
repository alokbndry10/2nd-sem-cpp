//Write a program to create a binary file and write data intoit.
#include<iostream>
#include<fstream>
using namespace std;
class michael
{
int x,y;
public:
void getdata()
{
cout<<"Enter the value of x and y"<<endl;
cin>>x>>y;
}
};
int main()
{
michael m;
m.getdata();
ofstream a;
a.open("Binary.txt");
a.write((char*)&m, sizeof(m));
a.close();
return 0;
}