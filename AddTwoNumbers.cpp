//This Program illustrates how we can use Binary operators to add two numbers.

//Header File
#include<iostream>
using namespace std;

//Function Prtotype
int Add(int x, int y);

//Driver Code
int main()
{
 int x,y;
 cout<<"\nEnter two numbers to be added:";
 cin>>x>>y;
 int res = Add(x, y);
 cout <<"\n Sum of "<<x <<"and "<<y<<" is:"<<res<<"\n"; 
}

//Main Function to add two numbers
int Add(int x, int y)
{
  int sum = 0;
  int carry=0;

  for(int i=0; i<=64; i++)
  {
    sum |= ((x&1) ^ (y&1) ^ carry)<<i;
    carry = ((x&1)&(y&1)|  //Checking if both x and y has LSB 1
              (x&carry) | 
              (y&carry));
    x>>=1; y>>=1;
  }
  return sum;
}
