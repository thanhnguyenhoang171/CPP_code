// Bài 9. Viết hàm đệ qui chuyển một số nguyên ở dạng nhị phân sang hệ thập phân.
#include <iostream>
using namespace std;
int He2_He10(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        int a = n % 10;
        return He2_He10(n / 10) * 2 + a;
    }
}
int main()
{
    int k, tam, dem = 0;
    do
    {
        cout << "Nhap vao 1 so he nhi phan: ";
        cin >> k;
        int l = k;
        while (l > 1)
        {
            tam = l % 10;
            if (tam != 1 && tam != 0)
            {
                dem++;
            }
            l = l / 10;
        }
    } while (dem != 0);
    cout << "So nhi phan " << k << " sang he thap phan la: " << He2_He10(k) << endl;
    system("pause");
    return 0;
}