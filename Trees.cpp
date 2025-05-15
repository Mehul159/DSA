// You are using GCC
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	Node* left;
	int data;
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

int MinVal()
{
    queue<Node*> que;
    que.push(root);
    int minVal = root->data;
    Node* temp = nullptr;
    
    while (!que.empty())
    {
        temp = que.front();
        que.pop();
        minVal = min(minVal, temp->data);
        
        if (temp->left != nullptr)
        {
            que.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            que.push(temp->right);
        }
    }
    return minVal;
}

int MaxVal()
{
    queue<Node*> que;
    que.push(root);
    int maxVal = root->data;
    Node* temp = nullptr;
    
    while (!que.empty())
    {
        temp = que.front();
        que.pop();
        maxVal = max(maxVal, temp->data);
        
        if (temp->left != nullptr)
        {
            que.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            que.push(temp->right);
        }
    }
    return maxVal;
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
    
    int last = lastNode();
    int minVal = MinVal();
    int maxVal = MaxVal();

    cout << last << endl;
    cout << minVal << endl;
    cout << maxVal << endl;
}



