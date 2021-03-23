#include<iostream>
#include<ctime>
using namespace std;

int main()
{
  srand((unsigned int)time(NULL));
  int num = rand() % 100 +1;
  int a;
  while(1)
    {
      cout <<"清输入一个数字"<<endl;
      cin >> a;
      if(a > num)
        cout << "大了"<<endl;
      else if(a < num)
        cout << "小了"<<endl;
      else
        {
          cout << "恭喜你" << endl;
          break;
        }
    }
}
