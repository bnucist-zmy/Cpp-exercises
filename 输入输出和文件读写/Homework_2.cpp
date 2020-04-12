#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
typedef struct Array
{
    int n;
    int *num;
}ARRAY;
int main()
{
    ARRAY* arrays =new ARRAY[3];
    ifstream inputfile("in.txt");
    for(int i=0;i<3;i++)
    {
        inputfile>>arrays[i].n;
        arrays[i].num=(int *)malloc(arrays[i].n*sizeof(int));
        for(int j=0;j<arrays[i].n;j++)
            inputfile>>arrays[i].num[j];
        for(int m=0;m<arrays[i].n;m++)
            for(int q=m+1;q<arrays[i].n;q++)
            {
                if(arrays[i].num[m]>arrays[i].num[q])
                {
                    int temnum=arrays[i].num[m];
                    arrays[i].num[m]=arrays[i].num[q];
                    arrays[i].num[q]=temnum;
                }
            }


    }
    inputfile.close();
    cout<<"已成功读入"<<endl;
    ofstream outfile("out.txt");
    for(int i=0;i<3;i++)
    {
        outfile<<arrays[i].n;
        outfile<<"\t";
        for(int j=0;j<arrays[i].n;j++)
            {   outfile<<arrays[i].num[j];
                outfile<<" ";
            }
        outfile<<endl;
    }
    outfile.close();
    delete[]arrays;
    cout<<"操作完成";
    return 0;
}
