//WAP to write 1 to 100 in a data file notes.txt
#include<fstream>
using namespace std;
int main(){
    ofstream print("NOTES.TXT");
    for(int i=1;i<=100;i++){
        print<<i<<endl;
    }
    print.close();
    return 0;
}