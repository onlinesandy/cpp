#include<iostream>;

using namespace std;

int main(){
    char str1[100];
    cout <<"Enter String "<<endl;
    cin.getline(str1,100);
    int counter =0;
    for(int i=0;str1[i]!='\0';i++){
        counter++;
    }
    cout<<"Length : "<<counter <<endl;
    
    return 0;
}