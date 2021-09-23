//Author : Nahin-CDR
//Date : 23-09-2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
   //We are learning how to find odd and even numbers
   // using BITWISE AND operator 
   
   cout<<"\n\n----------------------------\n";
   cout<<"WELCOME TO YOUR CODE MASTER"<<endl;

   int test;
   cout<<"\n\nEnter the number of test cases : "; cin>>test;
   
   while(test--)
   {
       int number;

       cout<<"\nEnter number : ";cin>>number;
       bitset<8>x(number);
       cout<<"\nBinary representation of "<<number<<" : "<<x<<endl;
       //Normally we are see that every even number in binary form 
       // has last bit 0
       int result = number & 1;
       if(result == 0)
       {
           cout<<"Number is Even"<<endl;
       }
       else
       {
           cout<<"Number is Odd"<<endl;
       }
   }
   cout<<"Loop has finished !"<<endl;
   cout<<"----------------------------\n";




    return 0;
}


