//WAP to read content from a text  filr OUT.TXT and count the number of alphabet present in it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int c=0;
char x;
ifstream m;
m.open("OUT.txt");
cout<<"The string in the file is:"<<endl;
while(m>>x)
{
cout<<x;
c++;
}
cout<<endl<<"The number of alphabets in this text is:";
cout<<endl<<c;
m.close();
}
