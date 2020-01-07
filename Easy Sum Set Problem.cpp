#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
	int sizeA, sizeC, temp;
	cin >> sizeA;
	vector<int> a(sizeA);
	for (int i = 0; i < sizeA; ++i)
	{
		cin >> temp;
		a[i] = temp;
	}

	cin >> sizeC;
	unordered_set<int> c;
	for (int i = 0; i < sizeC; ++i)
	{
		cin >> temp;
		c.insert(temp);
	}

	vector<int> b;
	for (int x : c)
	{
		int possible = x - a[0];
		bool pass = true;
		for (int y = 1; y < sizeA; ++y)
		{
			int check = possible + a[y];
			unordered_set<int>::iterator find = c.find(check);
			if (find == c.end())
			{
				pass = false;
			}
		}

		if (pass)
			b.push_back(possible);
	}
    sort(b.begin(), b.end());
	for (int x : b)
		cout << x << ' ';
}

