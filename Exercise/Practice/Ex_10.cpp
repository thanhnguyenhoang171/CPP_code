#include <iostream>
using namespace std;
struct Node
{
    int info;
    Node *link;
};
struct LinkedList
{
    Node *Top;
};
void init(LinkedList &ST)
{
    ST.Top = NULL;
}
void Push(LinkedList &ST, int value)
{
    Node *p = new Node;
    p->info = value;
    p->link = ST.Top;
    ST.Top = p;
}
int Empty(LinkedList ST)
{
    if (ST.Top == NULL)
        return 1;
    return 0;
}
void Pop(LinkedList &ST)
{
    if (Empty(ST) == 1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        Node *temp;
        temp = ST.Top;
        ST.Top = ST.Top->link;
        delete temp;
    }
}
void Display(LinkedList ST)
{
    if (Empty(ST) == 1)
        cout << "Stack is empty\n";
    else
    {
        cout << "Top of stack is " << ST.Top->info << endl;
        Node *p = ST.Top;
        while (p != NULL)
        {
            cout << p->info << endl;
            p = p->link;
        }
    }
}
int main()
{
    LinkedList ST;
    init(ST);
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element: ";
        cin >> x;
        Push(ST, x);
    }
    Display(ST);
    cout << "***Pop stack*** \n";
    Pop(ST);
    Display(ST);
    return 0;
}
