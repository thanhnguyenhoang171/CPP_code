// Bài 2. Viết chương trình nhận vào 1 chuỗi ký tự bao gồm “ho, ten”. Sau đó tiến hành tách
// họ và tên của chuỗi này ra, kết hợp chúng lại thành “ho ten” và xuất lại kết quả.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{

    char S[] = "ho, ten", S1[3], S2[5];
    strncpy(S1, S, 2);
    S1[2] = '\0';
    cout << S1 << endl;
    strncpy(S2, S+4, 3);
    S2[3] = '\0';
    cout << S2 << endl;
    strcat(S1, " ");
    strcat(S1, S2);
    cout << S1 << endl;
    return 0;
}