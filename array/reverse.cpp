#include<iostream>;
using namespace std;

int main(){
    int n;
    cout <<"Enter length of the array "<<endl;
    cin>>n;

    cout <<"Enter array Elements "<<endl;
    int arr[10];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout <<endl<<" Reverse array "<<endl;

    for(int b=0;b<n;b++){
        cout<<arr[b]<<" ";
    }
    cout <<endl;    
    return 0;
}