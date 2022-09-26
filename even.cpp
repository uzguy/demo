#include<iostream>
using namespace std;

int main()
{
  int a,b,sum=0;

  cout << "enter number upto";
  cin >>a;

for(int i=0;i<=a;i++)
{
  if(i%2==0)
  {
    sum +=i;

  }
}

    cout << sum;

  }
