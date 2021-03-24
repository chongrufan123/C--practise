#include<iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 3, 2, 5, 4};
  int brr[5];
  int i;
  for (i = 0; i< 5; i++)
    {
      brr[i] = arr[4-i];

    }
  for(i = 0; i< 5; i++)
    {    
      cout << brr[i]; 
    }
  cout << endl;
}
