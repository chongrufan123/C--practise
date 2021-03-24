#include<iostream>

using namespace std;

int main()
{
  int pig_weight[5] = {300, 350, 200, 400, 950};
  int i, weight, count=1;
  weight = pig_weight[0];
  for(i = 1; i < (int)(sizeof(pig_weight) / sizeof(pig_weight[0])); i++)
    {
      if( weight <= pig_weight[i])
        {
          weight = pig_weight[i];
          count = i+1;
        }
    }
  cout << "第" << count<< "只小猪最终,达到了" << weight <<endl;

}
