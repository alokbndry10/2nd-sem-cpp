 #include<iostream>
using namespace std;
class d{
    private: 
    int value;
 public: 
 d(int val)
{
value = val;
}
 d operator <= (d other){
    return d((value > other.value) ? value:other.value);
}
int getValue()
{
return value;
}
};
 int main()
{
 d num1(5);
 d num2(10);
 d result = num1 <= num2;
 cout<<"The greater number is:"<<result.getValue()<<endl;
}