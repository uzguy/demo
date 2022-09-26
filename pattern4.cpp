#include<iostream>
using namespace std;

int main()
{
  int a;

  cout << "the number ";
  cin >> a;

  int i;
  i=a;

  while(i>=1)
  {
    int j=1;
    j=a;
    while(j>=1)
    {
      cout << j;
      j-=1;
    }
    cout << endl;
    
    i-=1;
  }

  return 0;




}
