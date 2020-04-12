#include <iostream>
#include<string>
using namespace std;

typedef struct Student
{
    string department;
    char gender;
    int num;
    string name;
}STUDENT;
STUDENT InputStudent(int num1=2017001,string de="Computer",string name1="XXX",char g='m');
int main()
{
    STUDENT stu[6];
    int xuehao;
    string depart,name;
    char gender;
    for(int i=0;i<6;i++)
    {
        cout<<"请输入学号:";
        cin>>xuehao;
        getchar();
        cout<<"请输入系别：";
        getline(cin,depart);
        cout<<"请输入姓名：";
        getline(cin,name);
        cout<<"请输入性别：";
        gender=getchar();
        stu[i]=InputStudent(xuehao,depart,name,gender);
    }
    cout<<"Department"<<'\t'<<"Gender"<<'\t'<<"Number"<<'\t'<<"Name"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<stu[i].department<<'\t'<<stu[i].gender<<'\t'<<stu[i].num<<'\t'<<stu[i].name<<endl;
    }
    return 0;
}

STUDENT InputStudent(int num1,string de,string name1,char g)
{
    STUDENT tem;
    tem.num=num1;
    tem.department=de;
    tem.name=name1;
    tem.gender=g;
    return tem;
}
