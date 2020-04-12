#include <iostream>

using namespace std;
void printcolor(int i,int j,int k);
void color(int i);
int main()
{
    int i,j,k;
    for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
            for(k=j+1;k<5;k++)
                printcolor(i,j,k);

    return 0;
}
void printcolor(int i,int j,int k)
{
    color(i);
    color(j);
    color(k);
    cout<<endl;
}
void color(int i)
{
    switch(i)
    {
        case 0:cout<<"红";break;
        case 1:cout<<"黄";break;
        case 2:cout<<"蓝";break;
        case 3:cout<<"白";break;
        case 4:cout<<"黑";break;
        default:break;
    }
}
