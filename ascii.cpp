#include<iostream>
using namespace std;

int main()
{

  int a,sum=1;

  cout << "the number";
  cin >>a;


  for(int i=a;i>=1;i--)
  {
    sum *=i;

  }

  cout << sum;


  return 0;

}
