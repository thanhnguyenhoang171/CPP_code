// Bài 8. Xây dựng chương trình nhập vào chuỗi họ và tên. Sau đó tách họ, chữ lót, tên ra mỗi
// dòng.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[50];
    int n, q, p;
    cout << "Nhap vao ho va ten: ";
    cin.getline(s, 50);
    n = strlen(s);
    p = 0;
    while (!isspace(s[p]))
    {
        p++;
    }
    q = n - 1;
    while (!isspace(s[q]))
    {
        q--;
    }
    int dem = 0;
    cout << "Ho: ";
    for (int i = 0; i < n; i++)
    {
        if (i == p || i == q)
        {
           cout << endl;
           dem++;
           if (dem==1)
           {
                cout << "Ten lot: ";
           }
           else if (dem==2)
           {
               cout << "Ten: ";
           }
        }
        else
        cout << s[i];
    }
    cout << endl;
    system("pause");
    return 0;
}