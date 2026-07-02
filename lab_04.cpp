#include <iostream>
using namespace std;

const int size = 10;
int arr[size];
int top = 0;

bool isEmpty() {
    return top == 0;
}
bool isFull() {
    return top == size;
}
void push(int x) {
    if(isFull()) {
        cout << "Overflow" << endl;
        return;
    }
    arr[top] = x;
    top++;
}
int pop() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return arr[--top];
}
void show() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    for(int i = top - 1; i >= 0; i--) {
        cout << arr[i] << " "<<endl;
    }
    cout << endl;
}
void getMiddle() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Middle element: " << arr[top / 2] << endl;
}
void deleteMiddle() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    int middle = top / 2;
    for(int i = middle; i < top - 1; i++) {
        arr[i] = arr[i + 1];
    }
    top--;
}
void findMin() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    int minVal = arr[0];
    for(int i = 1; i < top; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << "Minimum element: " << minVal << endl;
}
void removeMin() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    int minIndex = 0;
    int minVal = arr[0];

    for(int i = 1; i < top; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }
    for(int i = minIndex; i < top - 1; i++) {
        arr[i] = arr[i + 1];
    }
    top--;
}
void reverseStack() {
    if(isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    int temp[size];
    int tempTop = 0;

    for(int i = top - 1; i >= 0; i--) {
        temp[tempTop++] = arr[i];
    }
    for(int i = 0; i < top; i++) {
        arr[i] = temp[i];
    }
}
void popAll() {
    if(isEmpty()) {
        cout << "Stack is already empty" << endl;
        return;
    }
    cout << "Popping all elements:" << endl;
    while(!isEmpty()) {
        cout << pop() << endl;
    }
}
int main() {
    push(5);
    push(23);
    push(37);
    push(47);
    push(57);
    cout << "Initial stack: ";
    show();
    cout << endl;
    getMiddle();
    cout << endl;
    cout << "After deleting middle element: "<<endl;
    deleteMiddle();
    show();
    cout << endl;
    findMin();
    cout << endl;
    cout << "After removing minimum element: "<<endl;
    removeMin();
    show();
    cout << endl;
    cout << "After reversing the stack: "<<endl;
    reverseStack();
    show();
    cout << endl;
    popAll();
    return 0;
}
