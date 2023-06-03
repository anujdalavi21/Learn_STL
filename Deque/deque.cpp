//Doubly ended queue . Insertion and deletion from both side
//Dynamic(size will increase) Random access possible using at operation

#include<iostream>
#include<deque>
using namespace std;

int main() 
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    //d.pop_back(); 
    //d.pop_front();

    cout<<"Print:"<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"front"<<d.front()<<endl;
    cout<<"Back"<<d.back()<<endl;

    cout<<"Empty or not->"<<d.empty()<<endl; //give 0(false) / 1(true)




    return 0;
}
