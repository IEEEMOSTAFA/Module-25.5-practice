#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
T data;
node*nxt;

};
template<class T>
class Queueue{
    public:
    node<T>*head;
    node<T>*tail;
    int sz;
    Queueue()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
    node<T>*CreateNewNode(T value)
    {
        node<T>*newnode=new node<T>;
        newnode->data =value;
        newnode->nxt =NULL;
        return newnode;
    }
    void enqueue(T value)
    {
        sz++;
        node<T>*newnode=CreateNewNode(value);
        if(head==NULL)
        {
           head=newnode;
           tail=newnode;
           return;
        }
        tail->nxt=newnode;
        tail=newnode;
    }
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"Queue is empty \n:";
            return;
        }
        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<T>*a=head;
        head=head->nxt;
        sz--;
        delete a;


    }
T front()
{
    if(sz==0)
    {
        cout<<"Queue is empty \n";
        return -1;
    }
    return head->data;
}
int size()
{
    return sz;
}


};
int main()
{
    //Queueue q;
    Queueue<int>q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    cout<<"Q size : "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
     cout<<q.front()<<"\n";
    q.dequeue();
     cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size : "<<q.size()<<"\n";
    cout<<"Template Checking By Any Data Type "<<"\n";

Queueue<char>q2;
    q2.enqueue('a');
    q2.enqueue('b');
    q2.enqueue('c');
    cout<<"Q size : "<<q2.size()<<"\n";
    cout<<q2.front()<<"\n";
    q2.dequeue();
     cout<<q2.front()<<"\n";
    q2.dequeue();
     cout<<q2.front()<<"\n";
    q2.dequeue();

    cout<<"Q size : "<<q2.size()<<"\n";

}



