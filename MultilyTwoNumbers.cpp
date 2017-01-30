//This Program demostrates the basic logic to multiply two numbers using
// Binary operations using <<, >>, & and | in short yo can use all Binary 
// operators but not * seems simple :)

//Header Section
#include<iostream>
using namespace std;

//Function Prototype
int Multiply(int x, int b);

//Driver function
int main()
{
 int x, y;
 cout<<"Enter value of x & y (Two numbers to multiply):";
 cin>>x>>y;

 int result = Multiply(x,y);
 cout<<"Multilication of "<<x<<" and "<<y<<" is: "<<result<<"\n";
 return 0;
}

//Main function
int Multiply(int x, int y)
{
  int word_size = 64;
  int result=0;
  //Reason why we have taken range from 0-64 as we are working with 64 bit number
  for (int i=0; i<word_size; i++)
  {
    if (x&1)
      result +=y;
    x>>=1;y<<=1;
  }
  return result;
}
