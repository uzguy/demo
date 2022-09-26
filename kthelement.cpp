#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int kth_Smallest_element(int arr[], int N, int K)
{
 set<int> s;
 for (int i = 0; i<=N-1; i++)
  s.insert(arr[i]);

 auto it= s.begin();
 for (int i = 0; i<=K - 1; i++)
 it++;
 return *it;
}

int kth_Largest_element(int arr2[], int n, int k)
{
 set<int> s1;
 for (int i = 0; i<=n-1; i++)
  s1.insert(arr2[i]);

 auto it= s1.begin();
 for (int i = 0; i<=k - 1; i++)
 it++;
 return *it;
}

int main()
{
 int arr[] = { 12, 3, 5, 7, 3, 19,20,6,8,4 };
 int N = sizeof(arr) / sizeof(arr[0]);
 int arr2[] = { 12, 3, 5, 7, 3, 1,82};
 int n = sizeof(arr2) / sizeof(arr2[0]);

 int K = 2;
 int k=3;
 cout << "Kth smallest element of an Array is: "<< kth_Smallest_element(arr, N, K)<<" "<<"\n";
 cout << "Kth Largest element of an Array is: "<< kth_Largest_element(arr2, n, k);
 return 0;
}
