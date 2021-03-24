#include<iostream>
using namespace std;

int main()
{
  int scores[3][3] =
    {
      {100, 100, 100},
      {90, 50, 100},
      {60, 70, 80}
    };
  int i, j;
  int zong[3] = {0};
  for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 3; j++)
        {
          zong[i] += scores[i][j];
        }

    }
  for(i = 0; i < 3; i++)
    {
      cout << "成绩分别为" << zong[i] << endl;

    }

}
