#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Createlist(int a[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1;

        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] != a[j])
                continue;

            else
            {
                a[i] = rand() % 100 + 1;
                j = i;
            }
        }
    }
}
void Display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}
int Search(int a[], int n, int x)
{
    // Complexity of the algorithm is n;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            res = i;
    }
    return res;
}
void Addlast(int a[], int &n, int x)
{
    if (n != 100)
    {
        a[n] = x;
        n++;
        cout << "New list after add: ";
        Display(a, n);
    }
    else
    {
        cout << "The list is full can't add more element\n";
        cout << endl;
    }
}
void Removelast(int a[], int &n)
{
    n--;
    Display(a, n);
}
void Removei(int a[], int &n, int x)
{
    // Complexity of the algorithm is n(n-2-i)
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
    Display(a, n);
}
int main()
{
    int a[100], n, x, i, y;
    cout << "Enter the length of the list: ";
    cin >> n;
    if (n >= 0 && n <= 100)
    {
        Createlist(a, n);
        cout << "Display list: ";
        Display(a, n);
        cout << "Enter new element need to add at the end list: ";
        cin >> x;

        Addlast(a, n, x);
        cout << "Remove the last element: ";
        Removelast(a, n);
        cout << "Enter position need to remove: ";
        cin >> i;
        if (i >= 0 && i < n)
        {
            cout << "New list after remove at position " << i << ": ";
            Removei(a, n, i);
        }
        else
        {
            cout << "Not found!\n";
            cout << endl;
        }
        cout << "Enter element want to find and remove: ";
        cin >> y;
        if (Search(a, n, y) != -1)
        {
            cout << "New list: ";
            Removei(a, n, Search(a, n, y));
        }
        else
        {
            cout << "Not found\n";
        }
        system("pause");
    }
    else
    {
        cout << "Over memory!\n";
        cout << endl;
        system("pause");
    }

    return 0;
}