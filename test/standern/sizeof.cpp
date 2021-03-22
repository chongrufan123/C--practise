#include<iostream>
using namespace std;
#define NUM 1232313242394

int main()
{
  cout << "short: " << sizeof(short) << "\n";
  cout << "int: " << sizeof(int) << "\n";
  cout << "long: " << sizeof(long) << "\n";
  cout << "long long: " << sizeof(long long) << "\n" << endl;
  cout << "define: " << sizeof(NUM) << endl;
  cout << "define = " << NUM << endl;
  return 0;
}
