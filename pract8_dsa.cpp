Objective :
Implement queue using circular array representation.
#include<iostream>
using namespace std;
const int size = 5;
class Cqueues
{
int first;
int last;
int arr[size];
public:
Cqueues()
{
first = -1;
last = -1;
}
void enqueue(int);
int dequeue();
void frontel();
bool isEmpty();
bool isFull();
void clear();
void display();
};
void Cqueues::enqueue(int item)
{
if(!(isFull()))
{
if(last == size -1 || last == -1)
{
arr[0] = item;
last = 0;
if(first == -1)
{
first =0;
}
}
else{arr[++last] = item;}
}
else
{
cout<<"Queue is full";
}
}
int Cqueues::dequeue()
{
int temp = arr[first];
if(first == -1)
{
cout<<"Queue is empty.";
exit(0);
}
else
{
if(first == last)
{
first = last = -1;
}
else if(first == size-1)
{
first = 0;
}
else
{
first++;
}
return temp;
}
}
void Cqueues::frontel()
{
if(isEmpty())
{
cout<<"Queue is Empty.";
}
else
{
cout<<"Top element of queue : "<<arr[first];
}
}
bool Cqueues::isEmpty()
{
return(first == -1);
}
bool Cqueues::isFull()
{
return ((first == 0 && last == (size-1)) || first == (last + 1));
}
void Cqueues::display()
{
int f = first, r = last;
if (first == -1)
{
cout<<"Queue is empty"<<endl;
return;
}
cout<<"Queue elements are :\n";
if (f <= r)
{
while (f <= r){
cout<<arr[f]<<" ";
f++;
}
}
else
{
while (f <= size - 1)
{
cout<<arr[f]<<" ";
f++;
}
f = 0;
while (f <= r)
{
cout<<arr[f]<<" ";
f++;
}
}
cout<<endl;
}
void Cqueues::clear()
{
for(int j = first;j<=last;j++)
{
dequeue();
}
}
int main()
{
Cqueues obj;
int ch, val;
char choice;
cout<<"Operations that you can perform : "<<endl;
cout<<"1)Insert element in queue."<<endl;
cout<<"2)Delete element in queue."<<endl;
cout<<"3)Get the top element of queue."<<endl;
cout<<"4)Clear the Queue."<<endl;
do {
cout<<endl;
cout<<"Enter choice : ";
cin>>ch;
switch(ch) {
case 1:
{
int num;
cout<<"How many elements you want to insert : ";
cin>>num;
for(int i = 0; i<num;i++)
{
int val;
cout<<"Enter "<<i+1<<" element : ";
cin>>val;
obj.enqueue(val);
}
cout<<endl;
obj.display();
break;
}
case 2:
{
obj.dequeue();
cout<<"After dequeue operation -> "<<endl;
obj.display();
break;
}
case 3:
{
obj.frontel();
break;
}
case 4:
{
obj.clear();
cout<<endl;
obj.display();
break;
}
default:
{
cout<<"Invalid choice.";
break;
}
}
cout<<endl<<endl<<"Do you want to continue(y/n) : ";
cin>>choice;
} while(choice == 'y');
return 0;
}
