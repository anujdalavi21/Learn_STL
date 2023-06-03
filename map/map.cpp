//map is key:value pair one key pointed one value 

#include<iostream>
#include<map>

using namespace std;

int main()
{   
    map<int ,string>m;
    m[1]="Anuj";    //1=key
    m[2]="Dalavi";
    m[4]="Believe";

    m.insert({5,"Sheth"} );

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 4->"<<m.count(4)<<endl;

    return 0;
}