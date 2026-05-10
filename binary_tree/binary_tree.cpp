#include<iostream>
using namespace std;
template<class T>
class binarytree{
	
private: 
T treedata;
binarytree*lefttree;	
binarytree*righttree;
bool nulltree;

public:
binarytree();
bool isempty();
T getdata();
void insert(T &item);
binarytree*left();
binarytree*right();
void makeleft(binarytree*t1);
void makeright(binarytree*t1);	
};

template<class T>
binarytree<T>::binarytree()
{
nulltree=true;
lefttree=0;
righttree=0;
}

template<class T>
bool binarytree<T>::isempty()
{
return nulltree;	
}

template<class T>
T binarytree<T>::getdata()
{
if(!isempty == true)
return treedata;	
}

template<class T>
void binarytree<T>::insert(T &item)
{
treedata=item;
if(nulltree){
nulltree=false;
lefttree= new binarytree;
rightree= new binarytree;	
}
}

template<class T>
binarytree<T>*binarytree<T>::left(){
if(!isempty())
{
	return lefttree;
}
}

template<class T>
binarytree<T>*binartytree<T>::right(){
	if(!isempty())
{
	return righttree;
}
}
