#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    int n;
    vector<int> v;
    cin>>n;
    for(int i=1;i<=n;i++)
       {
        v.push_back(i); 
       }
    for(auto i:v)
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
    for(auto i=v.begin();i!=v.end();i++)
       {
        cout<<*i<<" ";   
       }  
    cout<<endl;   
    for(auto i=v.rbegin();i!=v.rend();i++)
       {
        cout<<*i<<" ";   
       }    
    return 0;
}