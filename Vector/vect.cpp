//Vector is a dynamic array
#include<iostream>
#include<vector>    //Use #include<bits/stdc++.h> library 
using namespace std;

int main()
{
   vector<int> v;

   vector<int> a(4,1); //  Alsp initialised this way  5size intialised with 1
   cout<<"Print"<<endl;
   for(int i:a)
   {
    cout<<i<<" ";
   }

   cout<<"Capacity:"<<v.capacity()<<endl; 

   v.push_back(11);
   cout<<"Capacity:"<<v.capacity()<<endl; 

    v.push_back(21);
   cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(51);
   cout<<"Capacity:"<<v.capacity()<<endl;  //capacity() show the how much capacity in array
   cout<<"Size:"<<v.size()<<endl;    //size() show the how much elemnt in array 

  cout<<"Element at 2nd index:"<<v.at(2)<<endl;

  cout<<"Fist element :"<<v.front()<<endl;

  cout<<"Last element :"<<v.back()<<endl;
  
  cout<<"Print array"<<endl;
  for(int i:v)
  {
    cout<<i<<" "; 
  }cout<<endl;

  v.pop_back();

  cout<<"After pop"<<endl;
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl;

   vector<int> a(4,1); //  Alsp initialised this way  5size intialised with 1
   cout<<"Print"<<endl;
   for(int i:a)
   {
    cout<<i<<" ";
   }


 




    return 0;
}