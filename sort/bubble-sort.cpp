#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int couter = 0;couter < n;couter++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){

    int n = 6;

    int arr[n] = {6,5,4,3,2,1};
    cout  << "6,5,4,3,2,1 " << endl;
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}

