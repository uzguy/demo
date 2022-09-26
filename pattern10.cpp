#include<iostream>
using namespace std;

int main()
{
  int a;

  cout << "enter";
  cin >> a;

  int i=1;

  while(i<=a)
  {
    int j=1;
    int count =i;

    while(j<=i)
    {
      cout  << count;
      count++;
      j++;

    }
    cout << endl;
    
    i++;

  }
}
