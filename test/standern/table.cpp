#include<iostream>
using namespace std;

int main()
{
  int n;
  for( n = 1; n <=100 ; n++)
    {
      if( n % 7 ==0 || n / 10 == 7 || n % 10 == 7)
        cout << "敲桌子" << endl;
      else
        cout << n <<endl;
    }

}
