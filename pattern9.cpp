#include<iostream>
using namespace std;

int main()
{
  int a;

  cout << "enter ";
  cin >> a;

  int count  = 1;
  int i =1;

  while(i<=a)
  {
    int j=1;

    while(j<=i)
    {
      cout << count;
      j+=1;
      count ++;


    }
    cout  << endl;
    i+=1;


  }
}
