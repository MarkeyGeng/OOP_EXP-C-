#include<iostream>
using namespace std;
class People
{
protected:
    /* data */
    int age;
    int height;
    int weight;
    static int num;

public:
    People(int ,int,int);
    void Eating();
    void Sporting();
    void Sleeping();
    void Show();
    static void ShowNum();

};
People::People(int a,int h,int w)
{
    age = a;
    height = h;
    weight = w;
    num = num+1;
}
void People::Eating()
{
    weight++;
}
void People::Sporting()
{
    height++;
}
void People::Sleeping()
{
    age++;
    weight++;
    height++;
}
void People::Show()
{
    cout<<"age:"<<age<<" height:"<<height<<" weight:"<<weight<<endl;
}
void People::ShowNum()
{
    cout<<num<<endl;
}
int People::num = 0;

int main()
{
    People p1(18,170,60);
    People p2(40,160,70);
    p1.Show();
    p1.ShowNum();
    p1.Eating();
    p1.Sporting();
    p1.Sleeping();
    p1.Show();
    return 0;
}


