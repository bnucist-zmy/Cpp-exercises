#include <iostream>
#include<string>
using namespace std;

int main()
{
    string inputstring,keyword,substring;
    int countnum=0;
    cout<<"������һ�����֣�"<<endl;
    getline(cin,inputstring);
    cout<<"��������ҵĴ�"<<endl;
    getline(cin,keyword);
    for(int i=0;i<inputstring.length();i++)
    {
        if(inputstring[i]==keyword[0])
        {
            substring=inputstring.substr(i,keyword.length());
            if(substring==keyword) countnum++;
        }
    }

    cout<<"������������ǣ�"<<endl<<inputstring<<endl<<"���С�"<<keyword<<"����"<<countnum<<"��"<<endl;

    return 0;
}
