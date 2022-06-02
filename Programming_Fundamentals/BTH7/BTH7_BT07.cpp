#include<iostream>
using namespace std;

bool inhoa(char a)
{
    return (a >= 'A' && a <= 'Z');
}
bool inthuong(char a)
{
    return (a >= 'a' && a <= 'z');
}
int main()
{
    int demA=0, dema=0;
    string s;
    cout <<"Nhap vao mot chuoi: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (inhoa(s[i]))
            demA++;
        else if (inthuong(s[i]))
            dema++;
    }
    cout <<"So ky tu in hoa trong chuoi "<<"\""<<s<<"\""<<" la: "<<demA<<endl;
    cout <<"So ky tu in thuong trong chuoi "<<"\""<<s<<"\""<<" la: "<<dema<<endl;
    system("pause");
    system("cls");
    return 0;
}
