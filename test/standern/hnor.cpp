#include <iostream>
#include <string>


using namespace std;

struct hero
{
  string name;
  int age;
  string gender;
};


void printla(struct hero lala[], int len);
void sort(struct hero lala[], int len);

int main()
{
  int len;
  struct hero lala[5]
  {
    {"刘备", 23, "男"},
    {"关羽", 22, "男"},
    {"张飞", 20, "男"},
    {"赵云", 21, "男"},
    {"貂蝉", 19, "女"},
  };
  cout << "排序之前: " << endl;
  len = sizeof(lala)/sizeof(lala[0]);
  printla(lala, len);
  
  sort(lala, len);
  cout << "排序之后: " << endl;
  printla(lala, len);
  return 0;

}
     

void printla(struct hero lala[], int len)
{
  for(int i = 0; i< len; i++)
    {
      cout << lala[i].name << "\t" << lala[i].age << "\t" << lala[i].gender <<endl;

    }

}

void sort(struct hero lala[], int len)
{
  struct hero temp;
  for(int i=0; i<len-1; i++)
    {
      for(int j=0; j<len-i-1; j++)
        {
          if(lala[j].age > lala[j+1].age)
            {
              temp = lala[j];
              lala[j] = lala[j+1];
              lala[j+1] = temp;
            }
        }

    }

}

