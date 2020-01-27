#include <iostream>
#include <vector>
using namespace std;

//Node struct we use for our BST
struct Node {
	Node* l;
	Node* r;
	int data;

	Node(int i)
	{
		data = i;
		l = nullptr;
		r = nullptr;
	}
};

int height(Node root);
int main() {
	//grab how many ints will be input
	int size;
	cin >> size;

	//create the first root in our BST
	int temp;
	cin >> temp;
	Node root(temp);

	//plug in all numbers into our BST
	for (int i = 1; i < size; ++i)
	{
		cin >> temp;
		Node* ptr = &root;
		while (ptr != nullptr)
		{
			//checks which way we need to go
			if (temp > ptr->data)
			{
				//checks if that edge has no child
				if (ptr->r == nullptr)
				{
					//places a child there
					ptr->r = new Node(temp);
					break;
				}
				else
				{
					//keeps going down the tree
					ptr = ptr->r;
				}
			}
			else
			{
				if (ptr->l == nullptr)
				{
					ptr->l = new Node(temp);
					break;
				}
				else
				{
					ptr = ptr->l;
				}
			}
		}
	}
	int treeheight = height(root);
	cout << treeheight << '\n';
}

//returns the height of the tree by recursively adding every child node 
int height(Node root)
{
	//if a leaf node return with 1
	if (root.l == nullptr && root.r == nullptr)
		return 1;

	//we declare early incase the node has 1 child node
	int l = 1;
	int r = 1;

	//check if has a child on that edge
	if(root.l != nullptr)
		//recursively add all of that children's children
		l += height(*root.l);
	if(root.r != nullptr)
		r += height(*root.r);

	if (l == r || l > r)
		return l;
	else
		return r;
}
