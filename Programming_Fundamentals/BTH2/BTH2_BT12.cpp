#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "Nhap chuoi : ";
    getline(cin, s);
    cout <<"Chieu dai cua chuoi la : "<<s.length()<<endl;
    system("pause");
    return 0;
}
