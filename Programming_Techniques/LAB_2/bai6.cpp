// Bài 6. Viết hàm đệ qui tính số đảo ngược của một số nguyên không âm.Sau đó xây
//     dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
#include <iostream>
using namespace std;
void daong(int n)
{
    if (n < 10){
        cout << n;
    }
    else {
        cout << n % 10;
        daong(n / 10);
    }
}
int main()
{
    int a;
    cout << "Nhap vao 1 so nguyen khong am: ";
    cin >> a;
    cout << "So dao cua so " << a << " la: ";
    daong(a);
    cout << endl;
    system("pause");
    return 0;
}