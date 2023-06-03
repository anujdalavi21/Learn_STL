#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(51);
    v.push_back(101);

//         search         start    end    search
    cout<<binary_search(v.begin(),v.end(),201)<<endl;

    int a=4;
    int b=5;

    cout<<"Max->"<<max(a,b)<<endl;
    swap(a,b);
    cout<<"a->"<<a;

    string str="anuj";

    reverse(str.begin(),str.end());
    cout<<"Reverse sstring->"<<str<<endl;




    return 0;
}

