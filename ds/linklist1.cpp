#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

int main(){

    Node n1(4);

    Node n2(56);

    n1.next = &n2;

    cout << n1.data<<endl;
    Node *head = &n1;

    cout << head->data<<endl;
    cout << endl;

    return 0;
}