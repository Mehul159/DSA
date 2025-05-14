#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;
Node* tail = nullptr;
void enqueue(int data){
    Node* nn = new Node();
    nn->data=data;
    nn->next=nullptr;
    if(tail==nullptr){
        head =nn;
        tail = nn;
    }
    else{
        tail->next= nn;
        tail = nn;
    }

};

void dequeue(){
    if(tail == nullptr){
        cout <<"Queue is Empty";
    }
    else if(tail ==head){
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        Node* temp= head;
        head = head->next;
        cout << temp->data<<"Deleted."<<endl;
        delete(temp);
    }
    
}

void insertBegin(int data){
    Node* nn = new Node();
    nn->data=data;
    nn->next=head;
    head = nn;

};


void deleLast() {
    if (head == nullptr) {
        cout << "Queue is Empty" << endl;
    } else if (head == tail) {
        cout << tail->data << " Deleted." << endl;
        delete tail;
        head = nullptr;
        tail = nullptr;
    } else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        cout << tail->data << " Deleted." << endl;
        delete tail;
        tail = current;
        tail->next = nullptr;
    }
}



void display(){
    Node* temp = head;
    if(head==nullptr)
    cout<<"Queue is Empty.";
    else{
        while(temp !=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout <<endl;
    }
    
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    cout<<"Enqueued";
    //display();
    //dequeue();
    //display();
    //insertBegin(50);
    display();
    deleLast();
    display();
}