#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  int n = 100;
  do
    {
      a = n % 10;
      b = (n / 10) % 10;
      c = n / 100;
      if(a*a*a + b*b*b + c*c*c == n)
        cout << n << endl;
      n++;
    }while(n <1000);
}
