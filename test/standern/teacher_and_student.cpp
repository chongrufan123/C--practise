#include <iostream>
#include <string>

using namespace std;

struct student
{
  string name;
  int score;
};



struct teacher
{
  string name;
  struct student sarr[5];
  
};

void fuzhi(struct teacher * tarr);
void printsomething(struct teacher * tarr);

int main()
{
  struct teacher tarr[3];
  fuzhi(tarr);
  printsomething(tarr);
  return 0;


}

void fuzhi( struct teacher * tarr)
{
  string tname, sname;
  int scrone;
  for(int i = 0; i < 3; i++)
    {
      cout << "老师" << i+1 <<"的名字是: ";
      cin >> tname;
      cout << endl;
      tarr[i].name = tname;
      for(int j = 0; j < 5; j++)
        {
          cout << "学生" << j+1 << "的名字是:";
          cin >> sname;
          cout << endl;
          tarr[i].sarr[j].name = sname;
          cout << "学生" << j+1 << "的分数是:";
          cin >> scrone;
          cout << endl;
          tarr[i].sarr[j].score = scrone;
        }
      
    }

}

void printsomething(struct teacher * tarr)
{
  for(int i = 0; i < 3; i++)
    {
      cout << "老师" << i+1 << "的名字是" << tarr[i].name<<endl;
      for(int j = 0; j<5; j++)
        {
          
          cout << "学生" << j+1 << "的名字是" << tarr[i].sarr[j].name << "\t";
          cout << "学生" << j+1 << "的分数是" << tarr[i].sarr[j].score << endl;
        }
      
    }

}
