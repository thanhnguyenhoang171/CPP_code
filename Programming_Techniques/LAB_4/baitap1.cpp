// 1. Viết chương trình nhập vào 1 chuỗi tối đa 50 ký tự. Sau đó đếm
// xem có bao nhiêu ký tự là ký tự chữ hoặc số? Bao nhiêu ký tự
// khoảng trắng? 

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[51];
    int demCN = 0, demSp = 0, d;
    cout << "Nhap chuoi: ";
    cin.get(S, 50);
    d = strlen(S);
    for (int i = 0; i < d; i++)
    {
        if (isalnum(S[i]))
            demCN++;
        else if (isspace(S[i]))
            demSp++;
    }
    cout << "So ky tu chu hoac so: " << demCN << endl;
    cout << "So ky tu khoang trang: " << demSp << endl;
    system("pause");
    return 0;
}