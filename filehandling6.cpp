//WAP demonstrating example of tellp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int b;
fstream a;
cout<<"The intial position of cursor is:"<<endl;
a.open("tellp.txt",ios::app);
b=a.tellp();
cout<<b<<endl;
a<<"Alok";
cout<<"After printing Alok in the file, the position of cursoris:"<<endl;
b=a.tellp();
cout<<b;
a.close();
return 0;
}