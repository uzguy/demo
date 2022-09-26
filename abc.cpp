#include<iostream>
using namespace std;

int main()
{


  int arr[5];

  cout << "enter elements";


  for(int i=0;i<5;i++)
  {
    cout << "elemet " << i ;
    cin >> arr[i];

  }
  int position;

  int value;

  cout << "enter the element to replace";
  cin >>value;

  cout << "enter position ";
  cin >> position;

  for(int i=0;i<5;i++)
  {
    arr[position] = value;


  }

  cout << "new  array";


  for(int i=0;i<5;i++)
  {
    cout << arr[i];

  }

}
