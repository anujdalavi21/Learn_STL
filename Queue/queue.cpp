//Queue-Fist in first out

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");

    cout<<"First:"<<q.front()<<endl;
    cout<<"Last:"<<q.back()<<endl;

    cout<<"Size:"<<q.size()<<endl;

    return 0;
}