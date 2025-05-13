#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
class Stack
{
public:
Node* top=nullptr;
void push(int data)
{
Node* nn=new Node();
nn->data=data;
nn->next=nullptr;
if(top==nullptr)
top=nn;
else
{
nn->next=top;
top=nn;
}
}
void pop()
{
if(top==nullptr)
cout<<"Stack Underflow. Can't delete"<<endl;
else
{
Node* temp=top;
top=top->next;
int t=temp->data;
delete(temp);
cout<<"Node "<<temp->data<<" deleted from stack"<<endl;
}
}
void display()
{
Node* temp=top;
while(temp!=nullptr)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<endl;
}
};
int main()
{
Stack s1;
s1.push(10);
s1.push(20);
s1.push(30);
s1.display();
s1.pop();
s1.display();
} 



