#include<iostream>
using namespace std;

int main()
{
  int A, B, C;
  cout << "请分别输入三只小朱的体重" << endl;
  cin >> A ;
  cin >> B;
  cin >> C;
  if(A > B)
    {
      if(A > C)
        cout <<"小朱A最重";
      else
        cout << "小朱C最重";
    }
  else
    {
      if(B > C)
        cout <<"小朱B最重";
      else
        cout << "小朱C最重";
    }
  return 0;

}
  
