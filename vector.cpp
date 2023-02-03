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
    cout<<endl;  

    cout<<"Size "<<v.size()<<endl;                 // Gives the size of the vector

    cout<<"Capacity "<<v.capacity()<<endl;         // Gives the capacity

    cout<<"Max size "<<v.max_size()<<endl;         // Gives the max size

    v.resize(10);                           // Resizes the vector

    if(v.empty()==false)                    // Checks if the vector is empty
      {
       cout<<"Not Empty"<<endl;   
      }   
    else
        {
         cout<<"Empty"<<endl;  
        }  

    v.shrink_to_fit();                      // Shrinks the size of the array

    for(auto i:v)                           // Iterating through the vector to display it using 'auto'  
       {
        cout<<i<<" ";   
       } 

    v.assign(5, 10);
 
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 15 to the last position
    v.push_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // removes last element
    v.pop_back();
 
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
 
    cout << "\nThe first element is: " << v[0];
 
    // removes the first element
    v.erase(v.begin());
 
    cout << "\nThe first element is: " << v[0];
 
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
 
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
 
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
 
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 
    // Swaps v1 and v2
    v1.swap(v2);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
           
    return 0;
}