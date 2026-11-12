#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* tao_node(int x) {
	Node* p = new Node;
	p -> data = x;
	p -> left = NULL;
	p -> right = NULL;
	return p;
}

void Preorder(Node*root) {
	if (root != NULL) {
		cout << root-> data << " ";
		Preorder(root-> left);
		Preorder(root-> right);
    }
} 

void Inorder(Node*root) {
	if (root != NULL) {
		Inorder(root-> left);
		cout << root-> data << " ";
		Inorder(root-> right);
	}
}

void Postorder(Node*root) {
	if (root != NULL) {
		Postorder(root-> left);
		Postorder(root-> right);
		cout << root-> data << " ";
	}
}

int main()
{
	Node* root = tao_node(3);
	
	root-> left = tao_node(1);
	root-> right = tao_node(5);
	
	(root-> left)-> left = tao_node(0);
	(root-> left)-> right = tao_node(2);
	(root-> right)-> left = tao_node(4);
	(root-> right)-> right = tao_node(6);
	
	cout << "duyet goc-trai-phai: ";
	Preorder(root);
	cout << "\n" << "duyet trai-goc-phai: ";
	Inorder(root);
	cout << "\n" << "duyet trai-phai-goc: ";
	Postorder(root);
	return 0;
}
