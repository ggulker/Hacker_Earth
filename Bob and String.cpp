#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; ++i)
	{
		string first, second;
		cin >> first >> second;
		int letters[128] = { 0 };
		int larger;
    
    //find the larger size to avoid doing two for loops
		if (first.size() > second.size())
			larger = first.size();
		else
			larger = second.size();
    
    //go through each string and add each char from the first and subtract each from second
		for (int y = 0; y < larger; ++y)
		{
			if(y < first.size())			
				++letters[first[y]];
			if (y < second.size())
				--letters[second[y]];
		}
    
    //adding absolutes of all array values 
		int count = 0;
		for (int y : letters)
			count += abs(y);

		cout << count << '\n';
	}
}
