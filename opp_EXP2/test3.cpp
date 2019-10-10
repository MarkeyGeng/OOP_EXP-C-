#include<iostream>
using namespace std;
class Dog{
private:
    char *name;
    int age;
    int sex;
    int weight;
public:
    Dog(char *,int,int,int);
    void show();
};
Dog::Dog(char *dn,int a,int s,int w)
{
    name = dn;
    age = a;
    sex = s;
    weight = w;
}
void Dog::show()
{
    cout<<"Name:"<<name<<" age:"<<age<<" sex:"<<sex<<" weight:"<<weight<<endl;
}
int main()
{
    Dog d1("d1",10,0,20);
    Dog *p = &d1;
    p->show();
    return 0;
}
