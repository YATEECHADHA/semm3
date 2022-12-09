Objective :
Implement a stack using array representation.
#include<iostream>
using namespace std;
const int size = 30;
class Stack
{
int arr[size];
int top;
public:
Stack()
{
top = -1;
}
void push(int);
int pop();
bool isEmpty();
void display();
int topel();
void clear(int);
};
void Stack::push(int item)
{
if(top == (size-1))
{
cout<<"Stack is full !";
exit(1);
}
else
{
arr[++top] = item;
}
}
int Stack::pop()
{
if(isEmpty())
{
cout<<"Stack is empty.";
exit(0);
}
else
{
int item = arr[top--];
return item;
}
}
int Stack::topel()
{
if(isEmpty())
{
cout<<"Stack is empty.";
exit(0);
}
else
{
int item = arr[top];
return item;
}
}
void Stack::clear(int s)
{
for(int i= 0;i<s;i++)
{
pop();
}
}
bool Stack::isEmpty()
{
return(top == -1);
}
void Stack::display()
{
if(isEmpty())
{
cout<<"Stack is empty.";
}
else
{
for(int i = top ;i>= 0 ; i--)
{
cout<<arr[i];
cout<<endl;
}
}
}
int main()
{
Stack obj;
int s , n , choice;
cout<<"Operations that you can perform : "<<endl;
cout<<"1. push() "<<endl;
cout<<"2. pop() "<<endl;
cout<<"3. topel() "<<endl;
cout<<"4. clear() "<<endl;
char ch;
do
{
cout<<"Enter choice : ";
cin>>choice;
switch(choice)
{
case 1:
{
cout<<"Enter the size of stack : ";
cin>>s;
cout<<endl;
for(int i = 0;i<s;i++)
{
cout<<"Enter the "<<i+1<<" element of stack : ";
cin>>n;
obj.push(n);
}
cout<<endl;
obj.display();
break;
}
case 2:
{
int num;
cout<<"For how many elements you want to perform pop operation : ";
cin>>num;
for(int i = 0;i<num;i++)
{
obj.pop();
}
cout<<endl<<"Stack after pop : "<<endl;
obj.display();
break;
}
case 3:
{
if(obj.topel() == 0)
{
cout<<"Stack is empty.";
}
else
{
cout<<"Top element of stack is : "<<obj.topel();
}
break;
}
case 4:
{
obj.display();
cout<<endl<<"AFTER clear operation : ";
obj.clear(s);
obj.display();
break;
}
default :
{
cout<<"Invalid choice .";
break;
}
}
cout<<endl<<endl;
cout<<"Do you want to continue(y/n):";
cin>>ch;
}while(ch == 'y');
return 0;
}
