//Stack- Last In First Out 

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;

    s.push('A');
    s.push('B');
    s.push('C');

    cout<<"Print:"<<endl;
    for(char i:s)
    {
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Top elemnt->"<<s.top()<<endl;
    
    cout<<"Size of stack"<<s.size()<<endl;

    cout<<"Empty or not"<<s.empty()<<endl;

    return 0;
}