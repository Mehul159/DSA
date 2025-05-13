#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};


struct Node* create(int d) {
    struct Node* nn = new Node();
    nn->data = d;
    nn->next = nullptr;
    return nn;
}


struct Node* push(int d, struct Node* top) {
    struct Node* nn = create(d);
    if (top == nullptr)
        top = nn;
    else {
        nn->next = top;
        top = nn;
    }
    return top;
}


struct Node* pop(struct Node* top) {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return top;
    }
    struct Node* temp = top;
    top = top->next;
    delete temp;
    return top;
}


void display(struct Node* top) {
    struct Node* temp = top;
    if (top == nullptr)
        cout << "Stack is empty\n";
    else {
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    struct Node* top = nullptr;
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        top = push(data, top);
    }

    display(top);

   
    top = pop(top);
    display(top);

    return 0;
}