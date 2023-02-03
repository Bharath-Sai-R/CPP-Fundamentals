#include <iostream>
#include<vector>                 // importing a vector
using namespace std;
int main() 
{
    int n;
    vector<int> v;              // Declaring a vector
    cin>>n;
    for(int i=1;i<=n;i++)       
       {
        v.push_back(i);         // Appending into a vector  
       }
    for(auto i:v)               // Iterating through the vector to display it using 'auto'  
       {
        cout<<i<<" ";   
       }   
    cout<<endl;   
    /*for(int i=0;i<n;i++)
       {
        int t;   
        cin>>t;   
        v.push_back(t); 
       }
    for(auto i:v)
       {
        cout<<i<<" ";   
       }    */    
    for(auto i=v.begin();i!=v.end();i++)   // Iterating through the vector to display it using 'begin() and end()'
       {
        cout<<*i<<" ";   
       }  
    cout<<endl;   
    for(auto i=v.rbegin();i!=v.rend();i++)  // Iterating through the vector to display it using 'rbegin() and rend()'
       {                                    // It is used to print the vector in reverse 
        cout<<*i<<" ";   
       }    
    cout<<"Size"<<v.size();                 // Gives the size of the vector
    cout<<"Capacity"<<v.capacity();         // Gives the capacity
    cout<<"Max size"<<v.max_size();         // Gives the max size
    v.resize(20);                           // Resizes the vector
    if(v.empty()==false)                    // Checks if the vector is empty
      {
       cout<<"Not Empty";   
      }   
    else
        {
         cout<<"Empty";  
        }  
    v.shrink_to_fit();                      // Shrinks the size of the array
    for(auto i:v)                           // Iterating through the vector to display it using 'auto'  
       {
        cout<<i<<" ";   
       }    
    return 0;
}