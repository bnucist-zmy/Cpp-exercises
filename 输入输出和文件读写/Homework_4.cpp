#include <iostream>
#include<iomanip>
using namespace std;
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
    int inputdate;

    cout<<setw(3)<<"һ"<<setw(3)<<"��"<<setw(3)<<"��"<<setw(3)<<"��"<<setw(3)<<"��"<<setw(3)<<"��"<<setw(3)<<"��"<<endl;
    for(int i=0;i<5;i++)
        cout<<"   ";
    for(int i=1;i<31;i++)
    {
        cout<<setw(3)<<i;
        if((i+5)%7==0) cout<<endl;
    }

    cout<<"������һ������:"<<endl;
    cin>>inputdate;
    cout<<"������Ϊ����";
    switch((inputdate+5)%7)
    {
        case sun:cout<<"��";break;
        case mon:cout<<"һ";break;
        case tue:cout<<"��";break;
        case wed:cout<<"��";break;
        case thu:cout<<"��";break;
        case fri:cout<<"��";break;
        case sat:cout<<"��";break;
    }

    return 0;
}
