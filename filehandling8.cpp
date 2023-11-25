//seekg()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int c,b;
char x;
ofstream a;
a.open("test.txt");
a.seekp(5);
a<<"Object Oriented Programming"<<endl;
a.close();
return 0;
}
