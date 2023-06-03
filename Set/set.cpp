//set store only unique element . Implementation behind the scene iS Binary Search Tree. Once u store is not modified  only insertion and deletion 
//elemnt in sorted oredr when fetch the element
//unorded set mhade jar data fecth kartana data unorderd mhade yeto
//

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);

    for(int i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<s.count(5)<<endl;

    return 0;
}
