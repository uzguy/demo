#include<iostream>
using namespace std;

int main()
{
  int n,i=2;


  cout << "enter number ";
  cin >> n;

  while(i<n)
  {
      if(n%i==0)
      {
         cout << "not prime for " <<i <<endl;

      }
      else
      {
        cout << "prime for " << i << endl;

      }
      i+=1;



  }


  return 0;

}
