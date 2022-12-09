#include<iostream>
using namespace std;
template<class x>
class SLL
{
class nodes
{
public:
x data;
nodes *next;
};
nodes *first ,*last ;
nodes *temp, *temp1;
public:
SLL()
{
first = nullptr;
last = nullptr;
temp = nullptr;
temp1 = nullptr;
}
~SLL()
{
temp1 = new nodes;
temp = first;
while(temp!= nullptr)
temp1 = temp;
temp->next;
delete temp1;
}
public:
void add_to_tail();
void add_to_head();
void add_at_ith_position();
void dlt_first();
void dlt_last();
void dlt_at_ith_position();
void display();
void searchnode();
void operator +(SLL s2)
{
if(first == nullptr)
{
first = s2.first;
last = s2.last;
}
else
{
last->next = s2.first;
}
}
};
template <class x>
void SLL<x>::add_to_tail()
{
int num;
x value;
cout<<"How many nodes do you want to add : ";
cin>>num;
cout<<endl;
for(int i= 0; i<num;i++)
{
cout<<"Enter the value of "<<" "<<i+1<<" "<<" node : ";
cin>>value;
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
}
template< class x>
void SLL<x>::display()
{
temp = new nodes;
temp=first;
while(temp!=nullptr)
{
cout<<temp->data;
cout<<"->";
temp = temp->next;
}
}
template<class x>
void SLL<x>:: add_to_head()
{
int num ;
x value;
cout<<"How many nodes you want : ";
cin>>num;
cout<<endl;
for(int i=0; i<num;i++)
{
cout<<"enter the value of"<<" "<<i+1<<" "<<"node :";
cin>>value;
if(first==nullptr)
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
temp->next=first;
first=temp;
}
}
}
template<class x>
void SLL<x>::dlt_first()
{
if(first == nullptr)
{
cout<<"List is empty.";
}
else if(first==last)
{
delete first;
last = nullptr;
}
else
{
temp = new nodes;
temp = first;
first = temp->next;
delete temp;
}
}
template<class x>
void SLL<x>::dlt_last()
{
if(first == nullptr)
{
cout<<"List is empty.";
}
else if(first==last)
{
delete first;
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
template<class x>
void SLL<x>:: add_at_ith_position()
{
int position , key ;
x value;
cout<<"Enter the position at which do you want to add :";
cin>>position;
cout<<endl;
cout<<"Enter the value of node previous to that position:";
cin>>key;
cout<<endl;
cout<<"Enter the value of node inserted:";
cin>>value;
temp1 = new nodes;
temp = new nodes;
temp->data=value;
temp1 = first;
while(temp1->data != key)
temp1 = temp1->next;
temp->next = temp1->next;
temp1->next = temp;
}
template<class x>
void SLL<x>::dlt_at_ith_position()
{
temp1 = new nodes;
temp = new nodes;
temp = first;
int position , counter =1;
cout<<"Enter position at whoose node you want to delete:";
cin>>position;
while(counter < position)
{
temp1 = temp;//here temp1 represents node previous to the node selected to delete;
temp = temp->next;
counter++;
}
if(temp == last)
{
temp1->next = nullptr;
delete temp;
temp1 = last;
}
else
{
temp1->next = temp->next;
delete temp;
}
}
template<class x>
void SLL<x>::searchnode()
{
x srch ;
cout<<"Enter the value of node you want to search : ";
cin>>srch;
temp = new nodes;
temp = first;
if(first == nullptr)
{
cout<<"list is empty.";
}
while(temp->data != srch)
{
temp = temp->next;
}
if(temp->data == srch)
cout<<"Data Found"<<endl;
else
cout<<"data not found";
}
int main()
{
cout<<"Types of list that can be created : "<<endl;
cout<<"1. char "<<endl;
cout<<"2. int "<<endl;
cout<<"3. float "<<endl;
int c;
cout<<"Enter choice :";
cin>>c;
switch(c)
{
case 1:
{
SLL<char> obj;
cout<<"Operations to be performed are listed below:"<<endl;
cout<<"1. Insert element at the beginning of singly link list."<<endl;
cout<<"2. Insert element after element of singly link list."<<endl;
cout<<"3. Insert element at the back of singly link list."<<endl;
cout<<"4. Remove element from the beginning of singly link list."<<endl;
cout<<"5. Remove element from back of singly link list."<<endl;
cout<<"6. Remove element from singly link list."<<endl;
cout<<"7. Search element in the singly link list."<<endl;
cout<<"8. Concatenate two singly link list."<<endl<<endl;
int choice;
char ch;
do
{
cout<<"Enter Choice : ";
cin>>choice;
switch(choice)
{
case 1:
obj.add_to_head();
obj.display();
break;
case 2:
obj.add_at_ith_position();
obj.display();
break;
case 3:
obj.add_to_tail();
obj.display();
break;
case 4:
obj.dlt_first();
obj.display();
break;
case 5:
obj.dlt_last();
obj.display();
break;
case 6:
obj.dlt_at_ith_position();
obj.display();
break;
case 7:
obj.searchnode();
break;
case 8:
{
cout<<"Create your first list ."<<endl;
SLL<char> obj1;
obj1.add_to_head();
cout<<endl;
cout<<"First list is : ";
obj1.display();
cout<<endl;
cout<<endl<<"Create your second list ."<<endl;
SLL<char> obj2;
obj2.add_to_head();
cout<<endl;
cout<<"Second list is : ";
obj2.display();
cout<<endl;
cout<<endl<<"concatenated list is : ";
obj1 + obj2;
obj1.display();
break;
}
default:
cout<<"Invalid choice.";
break;
}
cout<<endl<<"want to continue(y/n) ? ";
cin>>ch;
}while(ch == 'y');
break;
}
case 2 :
{
SLL<int> obj;
cout<<"Operations to be performed are listed below:"<<endl;
cout<<"1. Insert element at the beginning of singly link list."<<endl;
cout<<"2. Insert element after element of singly link list."<<endl;
cout<<"3. Insert element at the back of singly link list."<<endl;
cout<<"4. Remove element from the beginning of singly link list."<<endl;
cout<<"5. Remove element from singly link list."<<endl;
cout<<"6. Remove element from the back of singly link list."<<endl;
cout<<"7. Search element in the singly link list."<<endl;
cout<<"8. Concatenate two singly link list."<<endl<<endl;
int choice;
char ch;
do
{
cout<<"Enter Choice : ";
cin>>choice;
switch(choice)
{
case 1:
obj.add_to_head();
obj.display();
break;
case 2:
obj.add_at_ith_position();
obj.display();
break;
case 3:
obj.add_to_tail();
obj.display();
break;
case 4:
obj.dlt_first();
obj.display();
break;
case 5:
obj.dlt_last();
obj.display();
break;
case 6:
obj.dlt_at_ith_position();
obj.display();
break;
case 7:
obj.searchnode();
break;
case 8:
{
cout<<"Create your first list ."<<endl;
SLL<int> obj1;
obj1.add_to_head();
cout<<endl;
cout<<"First list is : ";
obj1.display();
cout<<endl;
cout<<endl<<"Create your second list ."<<endl;
SLL<int> obj2;
obj2.add_to_head();
cout<<endl;
cout<<"Second list is : ";
obj2.display();
cout<<endl;
cout<<endl<<"concatenated list is : ";
obj1 + obj2;
obj1.display();
break;
}
default:
cout<<"Invalid choice.";
break;
}
cout<<endl<<"want to continue(y/n) ? ";
cin>>ch;
}while(ch == 'y');
break;
}
case 3:
{
SLL<float> obj;
cout<<"Operations to be performed are listed below:"<<endl;
cout<<"1. Insert element at the beginning of singly link list."<<endl;
cout<<"2. Insert element after element of singly link list."<<endl;
cout<<"3. Insert element at the back of singly link list."<<endl;
cout<<"4. Remove element from the beginning of singly link list."<<endl;
cout<<"5. Remove element from singly link list."<<endl;
cout<<"6. Remove element from the back of singly link list."<<endl;
cout<<"7. Search element in the singly link list."<<endl;
cout<<"8. Concatenate two singly link list."<<endl<<endl;
int choice;
char ch;
do
{
cout<<"Enter Choice : ";
cin>>choice;
switch(choice)
{
case 1:
obj.add_to_head();
obj.display();
break;
case 2:
obj.add_at_ith_position();
obj.display();
break;
case 3:
obj.add_to_tail();
obj.display();
break;
case 4:
obj.dlt_first();
obj.display();
break;
case 5:
obj.dlt_last();
obj.display();
break;
case 6:
obj.dlt_at_ith_position();
obj.display();
break;
case 7:
obj.searchnode();
break;
case 8:
{
cout<<"Create your first list ."<<endl;
SLL<float> obj1;
obj1.add_to_head();
cout<<endl;
cout<<"First list is : ";
obj1.display();
cout<<endl;
cout<<endl<<"Create your second list ."<<endl;
SLL<float> obj2;
obj2.add_to_head();
cout<<endl;
cout<<"Second list is : ";
obj2.display();
cout<<endl;
cout<<endl<<"concatenated list is : ";
obj1 + obj2;
obj1.display();
break;
}
default:
cout<<"Invalid choice.";
break;
}
cout<<endl<<"want to continue(y/n) ? ";
cin>>ch;
}while(ch == 'y');
break;
}
default:
cout<<"Invalid choice";
}
return 0;
}
