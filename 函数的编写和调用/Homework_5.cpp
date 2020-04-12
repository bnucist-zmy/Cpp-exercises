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
    cout<<"输入两个整数："<<endl;
    cin>>a>>b;
    cout<<"输入两个浮点数："<<endl;
    cin>>x>>y;
    cout<<"输入两个字符串："<<endl;
    getchar();
    getline(cin,LA);

    getline(cin,LB);
    Swap(a,b);
    Swap(x,y);
    Swap(LA,LB);
    cout<<"交换两个整数：a="<<a<<" b="<<b<<endl;
    cout<<"交换两个浮点数：x="<<x<<" y="<<y<<endl;
    cout<<"交换两个字符串"<<endl<<"LA:"<<LA<<endl<<"LB:"<<LB<<endl;
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
