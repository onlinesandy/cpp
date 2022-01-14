#include<iostream>;
using namespace std;

int main(){

    int num;
    cout << "Enter Star Number "<<endl;
    cin>> num;

    for(int i=0;i<num;i++){
        for(int j=num;j>i;j--){
            cout<<"* ";
        }
        cout <<endl;
    }
    return 0;
}