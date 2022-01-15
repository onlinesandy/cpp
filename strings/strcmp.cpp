#include<iostream>;
#include<string.h>;
using namespace std;

int main(){
    char str1[100],str2[100];
    cout <<"Compare Two string"<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"Enter first String";
    cin.getline(str1,100);
    cout<<"Enter Second String "<<endl;
    cin.getline(str2,100);

    if(strcmp(str1,str2) == 0){
        cout <<"String are Equal"<<endl;
    }else{
        cout <<"String are not Equal"<<endl;
    }

    return 0;
}