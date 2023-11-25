//name two classes named mammals and marine animals create another class named blue whale which inherit both
//the above classes now,create a function in each of these classes which prints " I am mammals","I belongs
// to both the categories : Mammals as well as marine animals"respectively Now,create an object for each of the
//above clas and try calling 
//i)functions of mammals by object of mammal
//ii)function of marine animals by object of marine animals
//iii) function of blue whale by the object oh blue whale 
//iv)function of each of its parents ny obejct of whale 

#include<iostream>
using namespace std;
class mammals
{
	public:
	void display()
	{
		cout<<"I am mammal."<<endl;
	}
};
class marineanimals
{
	public:
	void display()
	{
	cout<<"I am a marine animal."<<endl;
	}
};

class bluewhale:public mammals,public marineanimals
{
	public:
	void display()
	{
		cout<<"I belong to both the categories of animals."<<endl;
	}
};

int main()
{
	mammals m1;
	marineanimals m2;
	bluewhale m3;
	m1.display();
	m2.display();
	m3.display();
	m3.mammals::display();
	m3.marineanimals::display();
	
}
