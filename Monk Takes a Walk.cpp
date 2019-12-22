#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
	int cases;
	string data;
	unordered_set<char> vowels ({ 'a','e','i','o','u','A','E','I','O','U'});
	cin >> cases;
	for (int i = 0; i < cases; ++i)
	{
		cin >> data;
		int count = 0;
		for (int y = 0; y < data.size(); ++y)
		{
			if (vowels.find(data[y]) != vowels.end())
			{
				++count;
			}
		}
		cout << count << '\n';
	}
}
