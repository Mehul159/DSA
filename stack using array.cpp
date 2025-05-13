#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:

int top=-1;
int arr[50];
void push(int data)
{
if(top==6)
cout<<"Stack Overflow. Can't Insert"<<endl;
else
{
arr[++top]=data;
}
}
void pop()
{
if(top==-1)
cout<<"Stack Underflow. Can't delete"<<endl;
else
top--;
}
void display()
{
for(int i=top;i>=0;i--)
{
cout<<arr[i]<<"<-";
}
cout<<endl;
}
};
int main()
{
int n;
cin>>n;
Stack s1;
for(int i=0;i<n;i++)
{
int d;
cin>>d;
s1.push(d);
}
s1.display();
s1.pop();
s1.display();
}




