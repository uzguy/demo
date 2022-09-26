#include<iostream>
using namespace std;

int main()
{
  int a,b;

  cout << "enter number";
  cin >> a;


  for(int i=2;i<=a;i++)
  {

    if(a%i!=0)
    {

      cout << "prime number";
      
    }
  }
}
