#include<iostream>;
using namespace std;

int main(){
    int number;
    cout<< "Enter the number";
    cin>>number;

    for(int i=number; i<number+10;i++){
        int j ;
        for(j = 2;j<i;j++){
            if(i%j==0){
                // cout<<"Not Prime number "<<i<<endl;
                break;
            }
             
        }
        if(j==i){
            cout<<"Number is prime "<<i<<endl;
        }
        
    }

}