#include<iostream>
using namespace std;

int main()
{
   int a;

   cout << "ener number ";
   cin >> a;

   int i=1;
   int count  =1;



   while(i<=a)
   {
      int j=1;
      while(j<=a)
      {
        cout << count;
        count ++;

        j +=1;

      }
      cout << endl;

      i+=1;

   }







   
}
