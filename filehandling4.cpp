//WAP to write and read values using variables in from files .[ Use fstream class]
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int b,c;
char x[20],y[20];
fstream a;
a.open("file.txt",ios::out);
cout<<"Enter a number to write in file:"<<endl;
cin>>b;
a<<b<<endl;
cout<<"Enter a word to write in file:"<<endl;
cin>>x;
a<<x<<endl;
a.close();
a.open("File.txt",ios::in);
while(a)
{
a>>c;
a>>y;
}
a.close();
cout<<"The number in file is:"<<endl<<c<<endl;
cout<<"The word in file is:"<<endl<<y<<endl;
return 0;
}