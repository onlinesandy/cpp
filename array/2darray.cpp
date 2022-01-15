#include<iostream>;
using namespace std;

int main (){
    int arr[100][100];
    int m,n;

    cout<<"Enter Rows and Cols for 2D array "<<endl;
    cin>>m>>n;
    cout << "Enter Elements Row wise in the Array"<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   cout <<"Your Array is below "<<endl;

   for(int x=0;x<m;x++){
       for (int y = 0;y<n;y++){
           cout << " "<<arr[x][y] << " " ;
       }
       cout << " "<<endl;
   } 


    return 0;
}