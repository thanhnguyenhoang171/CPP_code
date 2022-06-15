#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;
void p1()
{
    cout << "---------\n";
    cout << "|       |\n";
    cout << "|   *   |\n";
    cout << "|       |\n";
    cout << "---------\n";
}
void p2()
{
    cout << "---------\n";
    cout << "|       |\n";
    cout << "|  * *  |\n";
    cout << "|       |\n";
    cout << "---------\n";
}
void p3()
{
    cout << "---------\n";
    cout << "|   *   |\n";
    cout << "|   *   |\n";
    cout << "|   *   |\n";
    cout << "---------\n";
}
void p4()
{
    cout << "---------\n";
    cout << "| *   * |\n";
    cout << "|       |\n";
    cout << "| *   * |\n";
    cout << "---------\n";
}
void p5()
{
    cout << "---------\n";
    cout << "| *   * |\n";
    cout << "|   *   |\n";
    cout << "| *   * |\n";
    cout << "---------\n";
}
void p6()
{
    cout << "---------\n";
    cout << "| *    * |\n";
    cout << "| *    * |\n";
    cout << "| *    * |\n";
    cout << "---------\n";
}
void intro()
{
    SetConsoleOutputCP(65001);
    cout << "Chào mừng bạn đến trò chơi Chẵn - Lẻ \n";
    cout << "Cách chơi: \n";
    cout << "Bước 1: Chọn Chẵn hoặc Lẻ\n";
    cout << "Bước 2: Nhấp phím 'r' để lắc xí ngầu hoặc bạn nhấn 'o' để thoát\n";
}
int main()
{
    char gh;
    do
    {
        intro();

        cout << "Lắc xí ngầu hay thoát\n";
        cin >> gh;
        if (gh == 'r')
        {
            char s;
            cout << "Mời bạn chọn Chẵn hay Lẻ: (Chẵn: c, Lẻ: l): ";
            cin >> s;
            int tong = 0;
            for (int i = 1; i <= 3; i++)
            {
                srand(time(NULL));
                int n = rand() % 6 + 1;
                if (n == 1)
                    p1();
                if (n == 2)
                    p2();
                if (n == 3)
                    p3();
                if (n == 4)
                    p4();
                if (n == 5)
                    p5();
                if (n == 6)
                    p6();
                tong += n;
            }
            cout << endl;
            if (tong % 2 == 0)
            {
                if (s == 'c')
                    cout << tong << " là Chẵn. Bạn thắng\n";
                if (s != 'c')
                    cout << tong << " là Chẵn. Bạn thua\n";
            }
            if (tong % 2 != 0)
            {
                if (s == 'l')
                    cout << tong << " là Lẻ. Bạn thắng\n";
                if (s != 'l')
                    cout << tong << " là Lẻ. Bạn thua\n";
            }
            cout << endl;
            system("pause");
            system("cls");
        }
        if (gh == 'o')
        {
            break;
        }
    } while (true);

    return 0;
}