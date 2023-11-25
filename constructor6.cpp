// Suppose you have a Piggie Bank with an Suppose you initial amount of $ 50 and,you have to add Some more ammount to it.
//  Create a class AddAmount with initial value 50. Now make tw0 constructor showing
// i no amount will be added to Pigs Bank
// ii. having a parameter which is the amount that will be added to Piggie Bank 
// iii. Copy this amount and store it in another object after adding the amount

// Create object of the class and display final amount through copied object


#include<iostream>
using namespace std;
class addamount{
    private:
    int balance;
    public:
    showbalance(){
       cout<<"your current balance is"<<balance;
    }
    addamount(){
        balance = 50;
        cout<<"no amount was added to your account you balance is"<<balance<<endl;

    }
    addamount(int a){
        balance = 50;
        balance += a;
        cout<<a<<" was added to your account"<<endl;
    }
};
int main(){
    cout<<"press 1 to add diposit or press any other key to terminate"<<endl;
    int a;
    cin>>a;
    if(a == 1){
        cout<<"enter the amount you want to deposit"<<endl;
        int amount;
        cin>>amount;
        addamount A(amount);
        addamount B = A;
        B.showbalance();
    }else{
        addamount A;
    }

}