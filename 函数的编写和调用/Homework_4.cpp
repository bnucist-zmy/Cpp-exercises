#include <iostream>
#include<string>
using namespace std;
void encipher(string& L);
int main()
{
    string ciphertext;
    cout<<"ÇëÊäÈëÃ÷ÎÄ£º"<<endl;
    getline(cin,ciphertext);
    cout<<"first encipher£º"<<endl;
    encipher(ciphertext);
    cout<<"decipher the ciphertext£º"<<endl;
    encipher(ciphertext);
    return 0;
}
void encipher(string& L)
{
    string key="ilikecplusplus";
    if(L.length()<=key.length())
    {
        for(int i=0;i<L.length();i++)
            L[i]=L[i]^key[i];
    }
    else
    {
        int j=0;
        for(int i=0;i<L.length();i++)
        {
            L[i]=L[i]^key[j];
            j++;
            if(j==key.length())
                j=0;
        }
    }
    cout<<"after ciphered:"<<L<<endl;
}
