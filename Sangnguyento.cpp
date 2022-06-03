#include <iostream>
#include <cmath>
using namespace std;

const int MAXSANG = 1000;

int main()
{
    bool check[MAXSANG + 1];
    // khởi tạo tất cả các sô [2..MAXSANG] đều là số nguyên tố
    for (int i = 2; i <= MAXSANG; i++)
    {
        check[i] = true;
    }
    // thuật toán sàng số nguyên tố
    //  nếu một số là số nguyên tố, thì tất cả các bội của nó không phải là số nguyên tố
    for (int i = 2; i <= MAXSANG; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= MAXSANG; j += i)
            {
                check[j] = false;
            }
        }
    }
    // In ra các số là số nguyên tố
    for (int i = 2; i <= MAXSANG; i++)
    {
        if (check[i] == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}