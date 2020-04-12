#include <iostream>
#include<iomanip>
using namespace std;
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
    int inputdate;

    cout<<setw(3)<<"一"<<setw(3)<<"二"<<setw(3)<<"三"<<setw(3)<<"四"<<setw(3)<<"五"<<setw(3)<<"六"<<setw(3)<<"日"<<endl;
    for(int i=0;i<5;i++)
        cout<<"   ";
    for(int i=1;i<31;i++)
    {
        cout<<setw(3)<<i;
        if((i+5)%7==0) cout<<endl;
    }

    cout<<"请输入一个日期:"<<endl;
    cin>>inputdate;
    cout<<"该日期为星期";
    switch((inputdate+5)%7)
    {
        case sun:cout<<"日";break;
        case mon:cout<<"一";break;
        case tue:cout<<"二";break;
        case wed:cout<<"三";break;
        case thu:cout<<"四";break;
        case fri:cout<<"五";break;
        case sat:cout<<"六";break;
    }

    return 0;
}
