//List STL-Doubly linked list 
//Direct access is not applicable foe linkedlist . Traversal use for access 

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;

    l.push_back(11);
    l.push_front(12);
    //l.pop_back();
    //l.pop_front();

    cout<<"Print"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list:"<<l.size()<<endl;


    return 0;
}
