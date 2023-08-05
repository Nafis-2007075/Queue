#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class node *front=NULL;
class node *rear=NULL;
void enqueue(int x)
{
    node *newnode;
    newnode = new node();
    newnode->data=x;
    newnode->next=0;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeuee()
{
    node *temp;
    temp=front;
    front=front->next;
    delete temp;
}
void display()
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeuee();
    display();
}