#include <iostream>
#include<string>
using namespace std;

int main()
{
    string inputstring,keyword,substring;
    int countnum=0;
    cout<<"请输入一段文字："<<endl;
    getline(cin,inputstring);
    cout<<"请输入查找的词"<<endl;
    getline(cin,keyword);
    for(int i=0;i<inputstring.length();i++)
    {
        if(inputstring[i]==keyword[0])
        {
            substring=inputstring.substr(i,keyword.length());
            if(substring==keyword) countnum++;
        }
    }

    cout<<"你输入的内容是："<<endl<<inputstring<<endl<<"其中“"<<keyword<<"“有"<<countnum<<"个"<<endl;

    return 0;
}
