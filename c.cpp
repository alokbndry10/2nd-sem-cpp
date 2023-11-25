#include<iostream>

using namespace std;

class fruit{
    int NoFrInBuck;
    public:

        int getdata(){
            cout<<"Number of fruit in basket"<<endl;
            cin>>NoFrInBuck;
            return NoFrInBuck;
        }

};

class apples:public fruit{
    int NoAppInBuck;
    public:
        apples(int x){
            NoAppInBuck=x;
            cout<<"The no of apples in Basket: "<<NoAppInBuck<<endl;
            int result = getdata();
            cout<<"The no of mangoes in Basket: "<<result-NoAppInBuck<<endl;

            cout<<"Total number of fruits in basket is: "<<result;
        }
};

class mangoes:public fruit{
    int NoMangInBuck;
    public:
         mangoes(int x){
            NoMangInBuck=x;
            cout<<"The no of mangoes in Basket: "<<NoMangInBuck<<endl;
            getdata();
        }
};


int main(){
    char answer;
    cout<<"Choose one fruit to count"<<endl;
    cout<<"Type A for apple and M for mango"<<endl;
    cin>>answer;
    if(answer=='A'){
        int Apple;
        
        cout<<"No of apple"<<endl;
        cin>>Apple;

        apples a(Apple);
    }
    else{
        int Mango;
        
        cout<<"No of Mango"<<endl;
        cin>>Mango;

        mangoes a(Mango);
    }

}