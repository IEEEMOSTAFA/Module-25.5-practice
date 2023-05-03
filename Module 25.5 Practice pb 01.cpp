#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE =10;
template<class T>

class Queue{
    public:
T a[MAX_SIZE];
int l,r;
Queue()
{
    l=0;
    r=-1;
}
void enqueue(T value)
{
    if(r+1>=MAX_SIZE)
    {
        cout<<"Queue is Full  \n";
        return ;
    }
    r++;
    a[r]=value;
}
void dequeue()
{
    if(l>r)
    {
        cout<<"Queue is empty \n ";
        return ;
    }
    l++;
}
T front()
{
     if(l>r)
     {
         cout<<"Queue is empty \n ";
         return -1;
     }
     return a[l];
}
int size()
{
    return r-l+1;
}


};

int main()
{

 //Queue q;
 Queue<int>q;
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);
cout<<" Q size :   "<<q.size()<<"\n";
cout<<q.front()<<" \n";
q.dequeue();
cout<<q.front()<<"\n";
q.dequeue();
cout<<q.front()<<"\n";
q.dequeue();
cout<<" Q size :   "<<q.size()<<"\n";

 cout<<"Template Checking By Any Data Type "<<"\n";

Queue<char>q2;
q2.enqueue('a');
q2.enqueue('b');
q2.enqueue('c');
cout<<" Q size :   "<<q2.size()<<"\n";
cout<<q2.front()<<" \n";
q2.dequeue();
cout<<q2.front()<<"\n";
q2.dequeue();
cout<<q2.front()<<"\n";
q2.dequeue();
cout<<" Q size :   "<<q2.size()<<"\n";







}

