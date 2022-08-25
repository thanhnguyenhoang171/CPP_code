//#include<iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *left;
//	Node *right;
//};
//Node *root;
//void tree_empty()
//{
//	root = NULL;
//}
//Node *Search(Node *p, int x)
//{
//	while (p != NULL)
//	{
//		if (p->info == x)
//			return p;
//		else
//		{
//			if (p->info > x)
//				p = p->left;
//			else
//				p = p->right;
//		}
//	}
//	return NULL;
//}
//void InsertNode(Node *&p, int x)
//{
//	if (p == NULL)
//	{
//		p = new Node;
//		p->info = x;
//		p->left = NULL;
//		p->right = NULL;
//	}
//	else
//	{
//		if (p->info == x)
//			return;
//		else if (p->info > x)
//			return InsertNode(p->left, x);
//		else
//			return InsertNode(p->right, x);
//	}
//}
//void duyetLNR(Node *p)
//{
//	if (p != NULL)
//	{
//		duyetLNR(p->left);
//		duyetLNR(p->right);
//		cout << p->info << " ";
//	}
//}
//int main()
//{
//	tree_empty();
//	int n,x;
//	Node *p = root;
//	cout << "Enter the lenght of the tree: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Enter value: ";
//		cin >> x;
//		InsertNode(p, x);
//	}
//	duyetLNR(p);
//	system("pause");
//	return 0;
//}