//WAP showing exception handling for divide by zero problem
#include<iostream>
using namespace std;
int main(){
    int num=10, deno=0;
    try{
        if(deno==0)
        throw 0; 

        cout<< num/deno;
    }
    catch(int a){
    cout<<"Can't divide by "<<a<<endl;}
    return 0;
}