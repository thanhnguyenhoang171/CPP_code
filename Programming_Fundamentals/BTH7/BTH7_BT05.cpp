#include<iostream>
using namespace std;

void hoandoi(int &n, int &m)
{
    int temp;
    temp = n;
    n = m;
    m = temp;
}
void sapxep(int n, int m)
{
    if (n > m){
        hoandoi(n, m);
        cout <<"Sap xep 2 so nguyen tang: "<<n<<", "<<m<<endl;
    }
}
int main()
{
    int a, b;
    cout <<"Nhap vao 2 so nguyen: ";
    cin >>a>>b;
    sapxep(a, b);
    cout <<endl;
    system("pause");
    system("cls");
    return 0;
}