//WAP to find the largest among two numbers using function template
#include<iostream>
using namespace std;
template < class T >
T myMax( T x,T y)
{
    return ( x> y)? x : y;

}
int main(){
    cout<<myMax<int>(3,5)<<endl;
    cout<<myMax<double>(3.0,7.0)<<endl;
    cout<<myMax<char>('g','e')<<endl;
}