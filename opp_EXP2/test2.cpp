#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Student{

private:
    char *name;
    int num;
    int mathScore;
    int englishScore;
    static int stu_count;
    static int mathTotalScore;
    static int englishTotalScore;
public:
    Student(char *,int,int,int);
    void showBase();
    static void showStatic();
};
Student::Student(char *n,int nn,int ms,int es)
{
    name = n;
    num = nn;
    mathScore = ms;
    englishScore = es;
    mathTotalScore += mathScore;
    englishTotalScore += englishScore;
    stu_count ++;
}
void Student::showBase()
{
    cout<<"Name: "<<name<<" MathScore: "<<mathScore<<" EnglishScore: "<<englishScore<<endl;
}
void Student::showStatic()
{
    cout<<"StudentNumber: "<<stu_count<<" MathTotalScore: "<<mathTotalScore<<" EnglishTotalScore: "<<englishTotalScore<<endl;
}
int Student::stu_count = 0;
int Student::mathTotalScore = 0;
int Student::englishTotalScore = 0;
int main()
{
    Student s1("Li Lei",10,80,90),s2("Wang Ming",15,83,96);
    s1.showBase();
    s1.showStatic();
    s2.showBase();
    s2.showStatic();
    return 0;

}
