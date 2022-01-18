#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int flag = 0;
    for(int couter = 0;couter < n;couter++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }

        if(flag==0){
            cout << "Array is already sorted"<<endl;
            break;
        }
    }
}
int main(){

    int n = 6;

    // int arr[n] = {6,5,4,3,2,1};
    int arr[n] = {9,2,3,4,5,6};
    cout  << "6,5,4,3,2,1 " << endl;
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}

