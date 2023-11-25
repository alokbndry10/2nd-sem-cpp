//tellg()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int b;
ifstream a;
a.open("test.txt",ios::ate);
b=a.tellg();
cout<<"The position of the cursor is at the end of thefile.So, it is at position:"<<endl;
cout<<b<<endl;
a.close();
return 0;
}