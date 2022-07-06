#include <iostream>
using namespace std;
// Node structure
struct Node
{
    int info;
    Node *next, *previous;
};
Node *first, *last;
// Creat empty list
void init()
{
    first = NULL;
    last = NULL;
}
Node *CreateNode(int x)
{
    Node *p;
    p = new Node;
    p->info = x;
    p->next = NULL;
    p->previous = NULL;
    return p;
}
// Parsing
// Parse from the beginnig
void Process_begin_list()
{
    Node *p;
    p = first;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->next;
    }
}
// Parse from the end
void Process_last_list()
{
    Node *p;
    p = last;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->previous;
    }
}
// Find the element 'x'(using parse from beginning)
Node *Search(int x)
{
    Node *p;
    p = first;
    while (p != NULL && p->info != x)
    {
        p = p->next;
    }
    return p;
}
// Add new node
// 1. At the beginning
void Insert_first(int x)
{
    Node *p;
    p = CreateNode(x);
    p->next = first;
    if (first != NULL)
    {
        first->previous = p;
    }
    else
    {
        last = p;
    }
    first = p;
}
// 2. At the end
void Insert_last(int x)
{
    Node *p = new Node;
    p = CreateNode(x);
    p->previous = last;
    if (last != NULL)
    {
        last->next = p;
    }
    else
    {
        first = p;
    }
    last = p;
}
// 3. At after node q
void Insert_mid(int x, int q)
{
    Node *p = new Node;
    Node *Q;
    p = CreateNode(x);
    Q = Search(q);
    Node *m;
    m = Q->next;
    Q->next = p;
    p->previous = Q;
    m->previous = p;
    p->next = m;
}
// Remove node
// 1. Remove the first element
void Delete_first()
{
    Node *p;
    p = first;
    first = first->next;
    if (first != NULL)
        first->previous = NULL;
    else
        last = NULL;
    delete p;
}
// 2. Remove the end element
void Delete_last()
{
    Node *p = last;
    last = last->previous;
    if (last != NULL)
    {
        last->next = NULL;
    }
    else
    {
        first = NULL;
    }
    delete p;
}
// 3. Remove the node after node'q'
void Delete_mid(int q)
{
    Node *Q = Search(q);
    Node *p = Q->next;
    Node *m = p->next;
    Q->next = m;
    m->previous = Q;
    delete p;
}
int main()
{
    init();
    int x, n;
    cout << "Enter the size of the list: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter an element: ";
        cin >> x;
        Node *p = CreateNode(x);
        Insert_last(x);
    }
    cout << "Parse from the beginning: ";
    Process_begin_list();
    cout << endl;
    cout << "Parse from the end: ";
    Process_last_list();
    cout << endl;
    cout << "--Add new element at the beginning--\n";
    int b;
    cout << "Enter a new element: ";
    cin >> b;
    Insert_first(b);
    Process_begin_list();
    cout << endl;
    cout << "--Add new element at the end--\n";
    int e;
    cout << "Enter a new element: ";
    cin >> e;
    Insert_last(e);
    Process_begin_list();
    cout << endl;
    cout << "--Add new element at after the node 'q'--\n";
    int m, q;
    cout << "Enter the info of the node that need to add: ";
    cin >> q;
    cout << "Enter a new element: ";
    cin >> m;
    Insert_mid(m, q);
    Process_begin_list();
    cout << endl;
    cout << "--Delete the first node--\n";
    Delete_first();
    Process_begin_list();
    cout << endl;
    cout << "--Delete the last node--\n";
    Delete_last();
    Process_begin_list();
    cout << endl;
    cout << "--Delete the node after the node 'q'--\n";
    cout << "Enter the node that need to delete after: ";
    int d;
    cin >> d;
    Delete_mid(d);
    Process_begin_list();
    cout << endl;
    return 0;
}