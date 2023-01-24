#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    //Statically
    Node n1(1);
    //This is very important to store address of head Node so
    Node *head = &n1;
    Node n2(2); //Second Node
    Node n3(3);
    Node n4(4);
    Node n5(5);
    //Now we have to store address of second node in first node next
    n1.next =&n2;
    n2.next =&n3;
    n3.next =&n4;
    n4.next =&n5;
    //Print
    print(head);
    // Simply printing we will see in next code how can we print Whole linked list just by head
    // cout<<n1.data<<" "<<n2.data<<endl;

    

    //Dynamically
    // Node *n3 = new Node(10);
    // Node *head = n3;
    // Node *n4 = new Node(20);
    // n3->next = n4;
    // delete n3, n4;

    
}