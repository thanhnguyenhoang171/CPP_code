// Bài 8. Viết hàm đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân.Sau
//     đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
using namespace std;
int Dec_Bin(int n)
{
    if (n==0||n==1)
        return n;
    else
        return (Dec_Bin(n / 2)*10 + (n % 2));
}
int main()
{
    int a;
    cout << "Nhap vao mot so nguyen he 10: ";
    cin >> a;
    cout << "So " << a << " he 10 sang he 2 la: " << Dec_Bin(a) << endl;
    system("pause");
    return 0;
}
