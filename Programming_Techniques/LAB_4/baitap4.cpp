// 4. Viết chương trình nhập vào 1 chuỗi họ và tên. Sau đó tiến hành tách
// họ, chữ lót, tên ra thành 3 dòng khác nhau.

#include <iostream>
#include <cstring>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
    int oldMode = _setmode(_fileno(stdout), _O_WTEXT);
    char S[50];
    int n, p, q;
    cout << "Nhap vao ho ten: ";
    cin.getline(S, 50);
    n = strlen(S);
    p = 0;
    while (!isspace(S[p]))
        p++;
    q = n - 1;
    while (!isspace(S[q]))
        q--;
    wcout << "Họ: ";
    for (int j = 0; j < p; j++)
    {
        wcout << S[j];
    }
    cout << endl;
    cout << "Tên lót: ";
    for (int k = p + 1; k < q; k++)
    {
        wcout << S[k];
    }
    cout << endl;
    cout << "Tên: ";
    for (int h = q + 1; h < n; h++)
    {
        wcout << S[h];
    }
    cout << endl;
    _setmode(_fileno(stdout), oldMode);
    system("pause");
    return 0;
}