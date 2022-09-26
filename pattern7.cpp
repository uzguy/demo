#include<iostream>
using namespace std;

int main()
{
  int a;

  cout << "enter number ";
  cin >>a;

  int i =1;

  while(i<=a)
  {
    int j =1;

      while(j<=i)
      {


     cout << "*";
     j+=1;

   }
   cout <<endl;
   

    i+=1;


  }


}
