// Danh sách đặc
#include <iostream>

using namespace std;

// Enter list from keyboard
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] = ";
        cin >> a[i];
    }
}
// Display list
void output(int a[], int n)
{
    cout << "Display: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// Search an element of the list
int search(int a[], int n, int x)
{
    int i = 0;
    while (i < n && a[i] != x)
        i++;
    if (i == n)
        return -1;
    return -1;
}
// Add new element in the list at position i
void add(int a[], int &n, int i, int x)
{
    if (i >= 0 && i < n)
    {
        for (int j = n; j >= i; j--)
        {
            a[j] = a[j - 1];
            
        }
        n++;
        a[i] = x;
    }
}
// Remove an element in the list at position i
void Delete(int a[], int &n, int i)
{
    if (i>=0 && i<n)
    {
        for (int j = i; j < n - 1; j++)
            a[j] = a[j + 1];
        n--;
    }
}
int main()
{
    const int MAX = 100;
    int a[MAX], n, i, x, d;
    cout << "Enter the size of list: ";
    cin >> n;
    input(a, n);
    output(a, n);
    cout << "Enter the position that need to add an new element: ";
    cin >> i;
    cout << "Enter new element: ";
    cin >> x;
    add(a, n, i, x);
    output(a, n);
    cout << "Enter position that need to remove from the list: ";
    cin >> d;
    Delete(a, n, d);
    output(a, n);
    return 0;
}