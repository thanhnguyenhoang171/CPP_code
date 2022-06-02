#include <iostream>
#include <cstring>
using namespace std;
int uc(int n)
{
    int kq;
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            kq = i;
            tong += i;
        }
    }
    return tong;
}
int main()
{
    int n;
    cin >> n;
    long long int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << uc(a) << endl;
    }
    return 0;
}