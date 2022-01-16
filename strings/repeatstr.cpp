#include<iostream>;
#include<string.h>;
using namespace std;

int main(){
    cout << "Enter the string and reapeat numer"<<endl;

    char str1[100];
    int num = 0;

    cin>>str1>>num;
    int len = strlen(str1);
    char firstChar = str1[0];
    int repeatCounter = 0;
    
    int q = num/len;
    int r = num%len;
    int rCheckCounter = 0;
    for(int i=0;i< len;i++){
        if(firstChar==str1[i]){
            repeatCounter++;
            cout << " "<< firstChar;
            if(i<r){
                rCheckCounter++;
            }
        }
        
    }

cout <<endl;
cout << " Occurance of "<<firstChar << " : " <<  repeatCounter << endl;
    cout << " Quotient : "<<q << endl;
    cout << " Remainder : "<<r << endl;
    
    if(r==0){
        cout << "Total Char "<<firstChar << " Present in the string of lengh "<<num << " is --- "<< (q * repeatCounter)<<endl;

    }else{
        cout << "Total Char "<<firstChar << " Present in the string of lengh "<<num << " is : "<< (q * repeatCounter) + rCheckCounter<<endl;
    }



    return 0;
}