#include<iostream>
using namespace std;
class Stack
{
class nodes
{
public:
int data;
nodes *next;
};
nodes *first , *last ;
nodes *temp ;
public:
Stack()
{
first = nullptr;
last = nullptr;
temp = nullptr;
}
void push(int);
void pop();
bool isEmpty();
void display();
int topel();
void clear(int);
};
void Stack::push(int item)
{
int value = item;
if (first == nullptr)
{
temp = new nodes;
temp->data=value;
temp->next=nullptr;
first=last=temp;
}
else
{
temp = new nodes;
temp->data=value;
temp->next=nullptr;
last->next=temp;
last=temp;
}
}
void Stack::pop()
{
if(first == nullptr)
{
cout<<"Stack is empty.";
}
else if(first==last)
{
delete first;
first = nullptr;
last = nullptr;
}
else
{
temp = new nodes;
temp = first;
while(temp->next != last)
temp = temp->next;
last = temp;
delete temp->next;
temp->next = nullptr;
}
}
void Stack::display()
{
if(isEmpty())
{
cout<<"Stack is empty.";
}
else
{
temp = new nodes;
temp=first;
while(temp!=nullptr)
{
cout<<temp->data;
cout<<" ";
temp = temp->next;
}
}
}
int Stack::topel()
{
int topelement;
if(isEmpty())
{
return 0;
}
else
{
topelement = last->data;
return topelement;
}
}
bool Stack::isEmpty()
{
return(first == nullptr);
}
void Stack::clear( int si)
{
for(int i = 0;i<si;i++)
{
pop();
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
cout<<endl<<"Stack after pop : ";
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
