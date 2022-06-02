// Bài 10. Viết hàm đệ qui tìm ước số chung lớn nhất của hai số nguyên.Sau đó xây
//     dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
// Gợi ý: ước chung lớn nhất của 2 số nguyên a và b có thể được tính bằng thuật giải Eucli
// như sau:
// Bước 1: nếu b = 0 thì trả về kết quả là a và kết thúc, ngược lại sang bước 2.
// Bước 2: chia a cho b và gán d là số dư. Sang bước 3
// Bước 3: gán giá trị b cho a và d cho b. Quay lại bước 1.
#include<iostream>
using namespace std;
// cach 1
int UCLN(int a, int b)
{
    if (a==b)
        return a;
    else    
        if (a>b)
            a = a - b;
        else
            b = b - a;
        return UCLN(a, b);
}
// cach 2
int ucln(int a, int b)
{
    int r;
    if (b==0)
        return a;
    else
    {
        r = a % b;
        a = b;
        b = r;
    }
    return ucln(a, b);
}
int main()
{
    int n, m;
    cout << "Nhap vao 2 so nguyen:  ";
    cin >> n >> m;
    cout << "Cach 1:\n";
    cout << "Uoc chung lon nhat cua 2 so nguyen " << n << " va " << m << " la: " << UCLN(n, m) << endl;
    cout << "Cach 2:\n";
    cout << "Uoc chung lon nhat cua 2 so nguyen " << n << " va " << m << " la: " << ucln(n, m) << endl;
    system("pause");
    return 0;
}
