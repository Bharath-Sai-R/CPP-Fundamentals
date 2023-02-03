#include <iostream>
#include<string.h> // for string class
#include<vector>
#include<stdio.h>

using namespace std;
 
int main()
{
    // Declaring string
    string str,S;
 
    // Taking string input using getline()
    getline(cin, str);
 
    // Taking string input using cin
    cin>>S;

    //Printing string str and S
    cout<<str<<" "<<S<<"\n";

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Inserting a character
    str.push_back('s');
 
    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;
 
    // Deleting a character
    str.pop_back();
 
    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Resizing string using resize()
    str.resize(20);
 
    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;
 
    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;
 
    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;
 
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();
 
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;
 
    for(auto i=str.begin();i!=str.end();i++)
       {
        cout<<*i;   
       }
    cout<<endl;   

    for(auto i=str.rbegin();i!=str.rend();i++)
       {
        cout<<*i;   
       }
    cout<<endl;

    string str1 = "string 1";
 
    // Declaring 2nd string
    string str2 = "string 2";
 
    // Declaring character array
    char ch1[80];
 
    // using copy() to copy elements into char array
    // copies "string 1"
    str1.copy(ch1, str1.length(), 0);
 
    // Displaying char array
    cout << "The new copied character array is : ";
    cout << ch1 << endl;
 
    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;
 
    // using swap() to swap string content
    str1.swap(str2);
 
    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;

    // Implementing raw strings 
    str1="String \n1";
    str2=R"(String \n2)";
    cout<<str1<<endl;
    cout<<str2<<endl;

    char c1[] = "Hello Darkness my old friend";
 
    // Returns first token
    char *token = strtok(c1," ");
 
    // Keep printing tokens while one of the
    // delimiters present in ca[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    // Implementing strchr function
    char c2[] = "This is a string";
    char * ch = strrchr(c2,'a');
    cout << ch - c2 + 1<<"\n";

    char st[] = "Hello World";
    char ch2 = 'e';
    char* val;
 
    // Use of strrchr()
    val = strrchr(st, ch2);
 
    printf("String after last %c is :  %s \n", ch2, val);

    return 0;
}