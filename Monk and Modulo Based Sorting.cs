#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main()
{
	int n, k, temp, i;
	cin >> n >> k;
	vector<int> data(n), mods(n);
	for (i = 0; i < n; ++i)
	{
		cin >> temp;
		data[i] = temp;
		int mod = temp % k;
		mods[i] = mod;
	}
 
	for (i = 0; i < n - 1; ++i)
	{
		for (int y = 0; y < n-1; ++y)
		{
			if (mods[y] > mods[y + 1])
			{
				swap(mods[y], mods[y + 1]);
				swap(data[y], data[y + 1]);
			}
		}
	}
 
	for (int i : data)
	{
		cout << i << ' ';
	}
	return 0;
}
