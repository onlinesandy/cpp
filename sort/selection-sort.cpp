#include<iostream>
using namespace std;


void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallest = i;
        for(int j = i+1;j <= n-2;j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);      
    }
}

int main(){

    int n = 5;
    
    int arr[n] = {4,6,9,1,8};
    cout << "4,6,9,1,8 "<<endl;
    
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}