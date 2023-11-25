#include<iostream>
using namespace std;
class alok{
public:
int x;
alok(){
    x=30;
}
};
class bhandari{
public:
float y;
bhandari(alok a){
   y =float(a.x); 
}
void out(){
    cout<<y;
}
};
int main(){
    alok a;
    bhandari c(a);
    c.out();
    return 0;
}