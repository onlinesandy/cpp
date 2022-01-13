#include<iostream>;
using namespace std;

int main(){
    char n;
    cout<<"Enter char b/w [a,b,c] "<<endl;
    cin>>n;
    switch(n){
        case 'a':
            cout<<"hello"<<endl;
            break;
         case 'b':
            cout<<"namste"<<endl;
            break;  
         case 'c':
            cout<<"hor v kiddda"<<endl;
            break;      
        default :
            cout<< "Choose other option"<<endl;
            break;  
    }
}