#include<bits/stdc++.h>
using namespace std;
#define n 5
int q[n];
int front=-1;
int rear=-1;
int enqueue(int x)
{
    if(rear==(n-1))
        cout<<"error"<<endl;
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        q[front]=x;
    }
    else
    {
        rear++;
        q[rear]=x;
    }
}
void dequeue()
{
    if(rear==-1 && front==-1)
        cout<<"error"<<endl;
    else if(rear==front)
        rear=front=-1;
    else
    {
        for(int i=front ; i<rear ; i++)
            cout<<q[i]<<" ";
    }
}
void peek()
{
    if(rear==-1 && front==-1)
        cout<<"error"<<endl;
        else
        cout<<q[front];
}

int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    cout<<endl;
    peek();
}
