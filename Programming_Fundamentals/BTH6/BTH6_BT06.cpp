#include<iostream>
using namespace std;
void hoanDoi(int &d1, int &d2)
{
int temp;
temp = d1;
d1 = d2;
d2 = temp;
}
int main()
{
int x, y;
cout << "Nhap so nguyen: ";
cin >> x;
cout << "Nhap so nguyen: ";
cin >> y;
cout << "Truoc khi goi ham x = " << x << " va y = "
<< y << endl;
hoanDoi(x, y);
cout <<"Sau khi goi ham x = " << x << " va y = "
<< y << endl;
system("pause");
system("cls");
return 0;
}