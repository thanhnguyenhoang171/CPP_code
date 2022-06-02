#include<iostream>
using namespace std;

bool KTS(int a)
{
    return (a >= '0'  && a <= '9');
}
bool KTC(char a)
{
    return (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z');
}
int main()
{
    string s;
    int demchu = 0, demso = 0;
    cout <<"Nhap mot chuoi ky tu: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (KTS(s.at(i)))
            demso++;
        else if (KTC(s.at(i)))
            demchu++;
    }
    cout <<"So ky tu chu trong chuoi "<<"\""<<s<<"\""<<" la: "<<demchu<<endl;
    cout <<"So ky tu so trong chuoi "<<"\""<<s<<"\""<<" la: "<<demso<<endl;
    system("pause");
    system("cls");
    return 0;
}