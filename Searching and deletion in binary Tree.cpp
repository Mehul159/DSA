// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	Node* left;
	int data;
    int key;
	Node* right;
};
struct Node* root=nullptr;
void insert(int data)
{
	Node* nn=new Node();
	nn->left=nullptr;
	nn->data=data;
	nn->right=nullptr;
	if(root==nullptr)
		root=nn;
	else
	{
		Node* front=nullptr;
		queue<Node*> que;
		que.push(root);
		while(!que.empty())
		{
			front=que.front();
			que.pop();
			if(front->left==nullptr)
			{
				front->left=nn;
				break;
			}
			else if(front->right==nullptr)
			{
				front->right=nn;
				break;
			}
			else
			{
				que.push(front->left);
				que.push(front->right);
			}
		}
	}
}
void display()
{
	queue<Node*> que;
	que.push(root);
	Node* temp=nullptr;
	while(!que.empty())
	{
		temp=que.front();
		cout<<temp->data<<" ";
		que.pop();
		if(temp->left!=nullptr)
		{
			que.push(temp->left);
		}
		if(temp->right!=nullptr)
		{
			que.push(temp->right);
		}
	}
	cout<<endl;
}
int lastNode()
{
	queue<Node*> que;
	que.push(root);
	Node* temp=nullptr;
	while(!que.empty())
	{
		temp=que.front();
		que.pop();
		if(temp->left!=nullptr)
		{
			que.push(temp->left);
		}
		if(temp->right!=nullptr)
		{
			que.push(temp->right);
		}
	}
	return temp->data;
}

// int deleteNode()
// {
// 	queue<Node*> que;
// 	que.push(root);
// 	Node* temp=nullptr;
// 	while(!que.empty())
// 	{
// 		temp=que.front();
// 		que.pop();
//         if(temp->left == key){
//             int x;
//             temp->left = x;
//             temp->left = que.lastNode();
//             que.lastNode() = x;
//             que.pop();

//         }
        
//         if(temp->right == key){
//             int x;
//             temp->right = x;
//             temp->right = lastNode();
//             que.lastNode() = x;
//             que.pop();

//         }

// 		if(temp->left!=nullptr)
// 		{
// 			que.push(temp->left);
// 		}
// 		if(temp->right!=nullptr)
// 		{
// 			que.push(temp->right);
// 		}
// 	}
// 	return temp->data;
// }

void deletelast()
{
queue<Node*> que;
que.push(root);
Node* curr=root;
Node* prev=nullptr;
while(!que.empty())
{
curr=que.front();
que.pop();
if(curr->left!=nullptr&&curr->right!=nullptr)
{
que.push(curr->left);
que.push(curr->right);
prev=curr;
}
else if(curr->left!=nullptr&&curr->right==nullptr)
{
curr->left=nullptr;
break;
}
else if(curr->left==nullptr&&curr->right==nullptr)
{
prev->right=nullptr;
break;
}
}
}

void deletion(int key)
{

queue<Node*> que;
que.push(root);
Node* keyNode=nullptr;
while(!que.empty())
{
keyNode=que.front();
que.pop();
if(keyNode->data==key)
{
keyNode->data=lastNode();
deletelast();
return;
}
if(keyNode->left!=nullptr)
que.push(keyNode->left);
if(keyNode->right!=nullptr)
que.push(keyNode->right);
}
}




int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        insert(d);
    }

    display();

    int key;
    cin >> key;
    deletelast();

    display();
}
