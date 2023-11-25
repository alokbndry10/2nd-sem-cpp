//WAP to find sum of array using function template
#include<iostream>
using namespace std;
template<class T>
T sum(T a[], int length)
{
        T tot = a[0];
        for (int i = 1; i < length; i++){ 
            tot += a[i];
            }

        return tot;
}
int main(){
    int iarr[] = {1, 2, 3, 4, 5};
    double darr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Sum of integers: " << sum(iarr,5) << endl;
    cout << "Sum of doubles: " << sum(darr,5) << endl;
    return 0;
}