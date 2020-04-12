#include <iostream>

using namespace std;
void Sort3Int(int a,int b,int c);
void Sort3IntReference(int& a,int& b,int& c);
void Sort3IntPoint(int* a,int* b,int* c);
int main()
{
    int a,b,c;
    cout<<"请输入三个整数："<<endl;
    cin>>a>>b>>c;
    Sort3Int(a,b,c);
    Sort3IntReference(a,b,c);
    Sort3IntPoint(&a,&b,&c);
    return 0;
}

void Sort3Int(int a,int b,int c)
{
    int num[3];
    num[0]=a;
    num[1]=b;
    num[2]=c;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
        {
            if(num[i]>num[j])
            {
                int tem;
                tem=num[i];
                num[i]=num[j];
                num[j]=tem;
            }
        }
    for(int i=0;i<3;i++)
        cout<<num[i]<<" ";
    cout<<endl;
}

void Sort3IntReference(int& a,int& b,int& c)
{
    int num[3];
    num[0]=a;
    num[1]=b;
    num[2]=c;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
        {
            if(num[i]>num[j])
            {
                int tem;
                tem=num[i];
                num[i]=num[j];
                num[j]=tem;
            }
        }
    for(int i=0;i<3;i++)
        cout<<num[i]<<" ";
    cout<<endl;
}

void Sort3IntPoint(int* a,int* b,int* c)
{
    int num[3];
    num[0]=*a;
    num[1]=*b;
    num[2]=*c;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
        {
            if(num[i]>num[j])
            {
                int tem;
                tem=num[i];
                num[i]=num[j];
                num[j]=tem;
            }
        }
    for(int i=0;i<3;i++)
        cout<<num[i]<<" ";
    cout<<endl;
}
