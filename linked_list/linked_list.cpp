#include<iostream>
using namespace std;
template<class T>
struct node{
T info;	
node <T>*next;	
};

template<class T>
class linkedlist{
	
private:
node<T>*start;
node<T>*current;

public:
linkedlist();
~linkedlist();
void insert (T &element);
bool first (T &list);
bool getnext(T &list);
bool find (T &element)
bool retrieve ( T & element );  
bool replace (T & newelement ); 
bool remove ( T & element );   
bool isempty ();
void makeempty ();
	
};

template<class T>
linkedlist<T>::linkedlist(){
start=current=null;	
}

template<class T>
linkedlist<T>::~linkedlist(){
makeempty();	
}

template<class T>
void linkedlist<T>::insert(T &element){
node<T>*newnode=new node<T>;
new node->info=element;
new node->next=start;
start=newnode;
}

template<class T>
bool linkedlist<T>::first(T &list)
{
if(start==null)
return false;	
	
current=start;

list=start->info;
return true:	
}

template<class T>
bool linkedlist<T>::getnext()
{
 if ( current == null ) 
 return false;
 
 if(current->next==null){
 current=null;
 return false;	
 }
 
current=current->next;
list=current->info;
return true;	
}

template<class T>
bool linkedlist<T>::find(T &element){
T item;
if(!first(item))
return false;	


do 
if(item==element)
return true;

while(getnext(item));
return false;
}

template<class T>
bool linkedlist<T>::retrieve(T &element){
if(current==null)
return false;

element=current->info;
return true;	
}


