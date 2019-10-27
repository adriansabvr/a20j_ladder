#include <bits/stdc++.h>
using namespace std;

bool distinct(int y)
{
	string sy = to_string(y);
	set<char> numbers;

	for(int i = 0; i < sy.size(); i++)
	{
		if(numbers.count(sy[i]))
			return false;

		numbers.insert(sy[i]);
	}

	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int y;
	cin >> y;

	while(!distinct(++y));

	cout << y << endl;

	return 0;
}