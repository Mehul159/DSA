#include<bits/stdc++.h>
using namespace std;
struct Node
{
struct Node* prev;
int data;
struct Node* next;
};
struct Node* create(int d)
{
struct Node* nn=new Node();
nn->prev=nullptr;
nn->data=d;
nn->next=nullptr;
return nn;
}
struct Node* insert(int data,struct Node* head)
{
struct Node* nn=create(data);
if(head==nullptr)
head=nn;
else
{
nn->next=head;
head->prev=nn;
head=nn;
}
return head;
}
struct Node* insertEnd(int data,struct Node* head)
{
struct Node* nn=create(data);
if(head==nullptr)
head=nn;
else
{
struct Node*temp=head;
while(temp->next!=nullptr){
 temp=temp->next;
}
temp->next=nn;
nn->prev=temp;
}
return head;
}
 void display(struct Node* head)
{
struct Node* temp=head;
while(temp!=nullptr)
{
cout<<temp->data<<"-> ";
temp=temp->next;
}
cout<<endl;
}
struct Node* deleteBegin(struct Node* head)
{
if(head==nullptr)
cout<<"List is empty";
else if(head->next==nullptr)
{
head=nullptr;
}
else
{
struct Node* temp=head;
head=head->next;
head->prev=nullptr;
temp->next=nullptr;
delete(temp);
}
return head;
}
struct Node* deleteEnd(struct Node* head){
if(head == nullptr){
cout<<"List is empty: ";
}else if(head->next==nullptr)
head=nullptr;
else
{
struct Node* temp1= head;
struct Node* temp2=nullptr;
while(temp1->next!=nullptr)
{
temp2=temp1;
temp1=temp1->next;
}
temp1 -> prev=nullptr;
temp2->next=nullptr;

delete (temp1);
}
B
return head;
}
int main(){
struct Node* head=nullptr;
head=insert(10,head);
head=insert(20,head);
head=insert(30,head);
display(head);
head=insertEnd(40,head);
display(head);
head=deleteBegin(head);
display(head);
head=deleteEnd(head);
display(head);
}


