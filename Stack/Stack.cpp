#include<iostream>
using namespace std;

# define N 5
int stack[N];
int top = -1;

void push(){
    int x;
    cout<<"Enter data: "<<x<<endl;
    cin>>x;
    if(top == N-1){
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if(top == -1){
        cout<<"Stack Underflow!"<<endl;
    }
    else {
        item = stack[top];
        top--;
        cout<<"Popped element is: "<<item<<endl;
    }
}

void peek(){
    if(top == -1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Top element is: "<<stack[top]<<endl;
    }
}

void display(){
    int i;
    if(top == -1){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack elements are: ";
        for(i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
   int choice;
   while(1){
       cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
       cout<<"Enter your choice: ";
       cin>>choice;
       switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            cout<<"Wrong choice! Please try again."<<endl;
       }
       }

       return 0;
}
