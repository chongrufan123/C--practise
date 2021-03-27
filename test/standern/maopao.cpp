#include<iostream>
using namespace std;

void bubbleSort(int *arr, int len);
int main()
{
  int arr[10] = {4, 3,6,1,2,10,8,7,5};
  int len = sizeof(arr)/sizeof(arr[0]);
  cout << "原来的" << endl;
  for(int i = 0; i<len; i++)
    {
      cout << arr[i] << ' ';
    }
  bubbleSort(arr, len);
  
  cout << "\n排序之后" << endl;
  for(int i = 0; i<len; i++)
    {
      cout << arr[i] << ' ';
    }
  cout << endl;

  return 0;
}

void bubbleSort(int *arr, int len)
{
  int temp;
  for(int i = 0; i < len - 1; i++)
    {
      for(int j = 0; j < len-1-i; j++)
        {
          cout << "\n排序之后" << endl;
          for(int i = 0; i<len; i++)
            {
              cout << arr[i] << ' ';
            }
          if(arr[j] > arr[j+1])
          {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            
            
          }
        }
    }


}
