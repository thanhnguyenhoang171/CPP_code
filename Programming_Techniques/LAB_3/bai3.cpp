// Bài 3. Viết chương trình dùng cấp phát động để cho phép 2 con trỏ lưu trữ giá trị của 2 số
// nguyên. Sau đó dựa trên địa chỉ mà con trỏ trỏ đến để tìm ước chung lớn nhất của 2 giá trị số
// nguyên này bằng thuật giải Euclid.
// Gợi ý: thuật giải Euclid xem lại ở BTTH Lab2

#include <iostream>
using namespace std;
int main()
{
    int *p, *q, m, n, temp;
    cout << "Nhap vao 2 so nguyen m va n: ";
    cin >> m >> n;
    p = &m;
    q = &n;
    while (*q != 0)
    {
        temp = *p % *q;
        *p = *q;
        *q = temp;
    }
    cout << "Uoc chung lon nhat la: " << *p << endl;
    system("pause");
    return 0;
}
