#include <iostream>
#include<string>
using namespace std;
void Swap(int& a,int& b);
void Swap(float& x,float& y);
void Swap(string& LA,string& LB);
int main()
{
    int a,b;
    float x,y;
    string LA,LB;
    cout<<"��������������"<<endl;
    cin>>a>>b;
    cout<<"����������������"<<endl;
    cin>>x>>y;
    cout<<"���������ַ�����"<<endl;
    getchar();
    getline(cin,LA);

    getline(cin,LB);
    Swap(a,b);
    Swap(x,y);
    Swap(LA,LB);
    cout<<"��������������a="<<a<<" b="<<b<<endl;
    cout<<"����������������x="<<x<<" y="<<y<<endl;
    cout<<"���������ַ���"<<endl<<"LA:"<<LA<<endl<<"LB:"<<LB<<endl;
    return 0;
}
void Swap(int& a,int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void Swap(float& x,float& y)
{
    float temp;
    temp=x;
    x=y;
    y=temp;
}

void Swap(string& LA,string& LB)
{
    LA.swap(LB);
}
