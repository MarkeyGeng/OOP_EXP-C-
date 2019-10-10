#include<iostream>
//账号、户名、密码、余额、活期年利率等信息。要求能够对个人账户进行存钱、取钱、计算年利息、打印账户相关信息等操作。
using namespace std;
class Person{
private:
    int account;
    char *name;
    char *passward;
    double money;
    double rate;
public:
    Person(int a,char *b,char *c,double d,double e)
    {
        account = a;
        name = b;
        passward = c;
        money = d;
        rate = e;
    }
    void Store(double);
    void Get(double);
    double Count_interest();
    void Print();
};
void Person::Store(double m)
{
    money += m;
}
void Person::Get(double m)
{
    money -= m;
}
double Person::Count_interest()
{
    double interest = money*rate;
    return interest;
}
void Person::Print()
{
    double temp = Person::Count_interest();
    cout<<"Account:"<<account<<" Name:"<<name<<" Passward:"<<passward<<" Money:"
    <<money<<" Rate:"<<rate<<" Interest:"<<temp<<endl;
}
int main()
{
    Person p1(12345,"xiaowang","asdfg",100,0.1);
    p1.Count_interest();
    p1.Print();
    p1.Store(100);
    p1.Print();
    return 0;
}
