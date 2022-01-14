#include<iostream>;

using namespace std;

int main(){

    int nums;

    cout << "Enter number of Star "<<endl;
    cin>> nums;

    for(int i=0;i<nums;i++){
        for(int k=0;k<i;k++){
            cout <<"  ";
        }
        for(int j=nums;j>i;j--){
            cout <<"* ";
        }
        
        cout <<endl;
    }
}