//seekp()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char x;
ifstream a;
a.open("test.txt");
a.seekg(7);
a>>x;
cout<<"The character at 7th postion of file is:"<<endl;
cout<<x;
a.close();
return 0;
}
