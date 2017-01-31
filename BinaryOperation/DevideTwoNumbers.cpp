//Program to devide two numbers using binary or bit wise operations

#include<iostream>
using namespace std;


int Devide(int x, int y)
{
  int quotient=0;
  int y_power=y;
  while(y<x)
  {
    int power = 0;
    while(y_power<=x)
    {
      y_power*=2<<1;
      power++;
    }
    power--;
    if(power>0) quotient += 2<<power;
    else if (!power) quotient +=1;
    x-=quotient;
  }
  return quotient;
}
   
int main()
{
  int x, y;
  cout<<"Enter values of x and y:";
  cin>>x>>y;
  if (y==0)
  {
    cout<<"Devide by Zero error";
    return 1;
  }
  int res = Devide(x, y);
  cout<<"Devision of "<<x<<" and "<<y<<" is:"<<res;
  return 0;
}
