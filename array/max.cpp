#include<iostream>;
using namespace std;

int main(){
    int arr[10];
    cout<< "Enter Array 10 Elements "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];  
    }

    int max = arr[0];
    for (int a=1;a<10;a++){
        if(arr[a] > max){
            max = arr[a];
        }
    }
    cout<<"Max number is "<<max<<endl;
    return 0;
}