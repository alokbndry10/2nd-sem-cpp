//WAP which initializes a string variable to the content " Time is a great teacher but nowadays it is said
// time is Money " and output the string to disk file OUT.TXT

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string x;
x="Time is a great teacher but nowadays it is said as Time ismoney.";
ofstream a;
a.open("OUT.txt");
a<<x<<endl;
a.close();
return 0;
}