#include<iostream>
#include<iomanip>
using namespace std;
int Giaithua(int n)
{
    int gt=1;
    for (int i = 2; i <= n; i++){
        gt*=i;
    }
    return gt;
}
int Tohop(int n, int k)
{
    return Giaithua(n)/(Giaithua(k)*Giaithua(n - k));
}
void TGPCAL (int h)
{
    cout <<" k |  0  1  2  3  4  5 . . ."<<endl;
    cout <<"----|-----------------------"<<endl;
    for (int i=0; i<=h; i++)
    {
        cout <<setw(4)<<i<<" |";
        for (int j=0; j<=i; j++)
        {
            cout <<setw(4)<<Tohop(i, j);
        }
            cout <<endl;
    }
}
int main()
{
    int k;
    int l, m;
    int h;
    do {
    cout <<"Nhap vao mot so de tinh giai thua: ";
    cin >>k;
    cout <<"Nhap to hop chap: ";
    cin >>l>>m;
    cout <<"Nhap vao chieu cao tam giac Pascal: ";
    cin >>h;
    if (k < 0 || l < m || h < 0)
        cout <<"Nhap sai roi! Hay nhap lai\n";
    }
    while (k < 0 || l < m || h < 0);
    cout <<k<<"!"<<" = "<<Giaithua(k)<<endl;
    cout <<"C("<<l<<", "<<m<<")"<<" = "<<Tohop(l, m)<<endl;
    cout <<"Tam giac Pascal: "<<endl;
    TGPCAL(h);
    system("pause");
    system("cls");
    return 0;
}
