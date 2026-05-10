#include<iostream>
using namespace std;
struct queue{
static const int size = 100;
int front,rear;
int arr[size];

queue(){
front=-1;
rear=-1;		
}

bool isempty(){
return front==-1;
}

bool isfull(){
return rear==size-1;
}

void enqueue(int value){
if(isfull()){
cout<<"queue is full";	
return;
}	
if(isempty()){
	front=0;
}
rear++;
arr[rear]=value;
}

void dequeue(){
if(isempty()){
cout<<"the queue is empty";
return;	
}	
cout << arr[front] << " dequeued from queue." << endl;
if(front==rear)
front=rear=-1;
else
front++;
}

bool EqualQueues(queue& Q1, queue& Q2) {
    if (Q1.size() != Q2.size()) {
        return false; 
    }


    Queue Temp1 = Q1;
    Queue Temp2 = Q2;

    while (!Temp1.isempty() && !Temp2.isempty()) {
        if (Temp1.dequeue() != Temp2.dequeue()) {
            return false;
        }
    }

    return true; 
}


int main() {
    Queue Q1, Q2;

   
    Q1.enqueue(1);
    Q1.enqueue(2);
    Q1.enqueue(3);

   
    Q2.enqueue(1);
    Q2.enqueue(2);
    Q2.enqueue(3);

    if (EqualQueues(Q1, Q2)) {
        cout << "The two queues are identical." << endl;
    } else {
        cout << "The two queues are NOT identical." << endl;
    }

    return 0;
}
