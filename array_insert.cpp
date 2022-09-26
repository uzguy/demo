#include<iostream>
using namespace std;

int main()
{
  int a[10],value,position;

  cout << "enter elemts " << endl;
  for(int i=0;i<5;i++)
  {
    cout << "enter element " << i << ":" ;
    cin >> a[i];

  }

  cout << "enter elemnt to insert ";
  cin >> value;

  cout << "enter position";
  cin >> position;

   for(int i=0;i<position;i++)
   {
     a[position]=value;


   }
     cout << "the new array is " << endl;
     
   for(int i=0;i<5;i++)
   {

      cout << a[i];


   }

   return 0;




}
