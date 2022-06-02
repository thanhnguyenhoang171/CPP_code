// Bài 5. Viết hàm đệ qui đếm số chữ số của một số nguyên không âm.Sau đó xây dựng
//     chương trình để mô phỏng và kiểm tra hàm vừa xây dựng
#include<iostream>
using namespace std;
int dems(int n)
{
    if (n<10)
        return 1;
    else
        return (dems(n / 10) + 1);
}
int main()
{
    int a;
    cout << "Nhap vao 1 so nguyen khong am: ";
    cin >> a;
    cout << "So chu so cua so " << a << " la: " << dems(a) << endl;
    system("pause");
    return 0;
}