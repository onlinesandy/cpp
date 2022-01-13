#include<iostream>
using namespace std;

int main(){


    for(int a=0;a<10;a++){
        if(a==4){
            break;
        }
        if(a%2==0){
            continue;
        }
       
        cout<< "Number is "<<a<<endl;
    }
}