// Bài 3. Viết chương trình dùng cấp phát động để cho phép 2 con trỏ lưu trữ giá trị của 2 số
// nguyên. Sau đó dựa trên địa chỉ mà con trỏ trỏ đến để tìm ước chung lớn nhất của 2 giá trị số
// nguyên này bằng thuật giải Euclid.
// Gợi ý: thuật giải Euclid xem lại ở BTTH Lab2
#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    int *q, *p, r;
    p = &a;
    q = &b;
    if (*q == 0)
    {
        return *q;
    }
    else
    {
        r = *p % *q;
        *p = *q;
        *q = r;
        return r;
    }
}
int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen: \n";
    cin >> a >> b;
    cout << "Uoc chung lon nhat cua " << a << " va " >> b << " la: " << UCLN(a, b) << endl;
    system("pause");
    return 0;
}