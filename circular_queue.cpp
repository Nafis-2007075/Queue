#include<bits/stdc++.h>
using namespace std;
#define n 5
int q[n];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front = rear = 0;
        q[rear]=x;
    }
    else if((rear+1)%n==front)
        cout<<"Full";
    else
    {
        rear=(rear+1)%n;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        cout<<"error";
    else if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%n;
}
void display()
{
    int i;
    i=front;
    while(i!=rear)
    {
        cout<<q[i]<<" ";
        i=(i+1)%n;

    }
    cout<<q[rear];
}
int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    //enqueue(25);
   // cout<<endl;
    dequeue();
    display();
}
