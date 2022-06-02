// Bài 13. Viết hàm đệ qui để xuất ra 1 tam giác Pascal.Biết rằng 1 tam giác Pascal
//     có dạng như sau với chiều cao là 5:
//     1
//     1   1
//     1   2   1
//     1   3   3   1
//     1   4   6   4   1
#include <iostream>
#include <iomanip>
using namespace std;
int gt(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return gt(n - 1) * n;
}
int tohop(int n, int k)
{
    return (gt(n) / (gt(k) * gt(n - k)));
}
void Pascal(int n)
{
    if (n == 0)
        cout << "";
    else
    {
        Pascal(n - 1);
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << setw(4) << tohop(n - 1, i);
        }
    }
}
int main()
{
    int n;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> n;
    cout << "Tam giac Pascal khi n = " << n << endl;
    Pascal(n);
    cout << endl;
    system("pause");
    return 0;
}