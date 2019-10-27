#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	pair<int, int> pos1;

	for(int r = 0; r < 5; r++)
		for(int c = 0; c < 5; c++)
		{
			cin >> x;
			if(x)
				pos1 = make_pair(r,c);
		}

	cout << abs(pos1.first-2) + abs(pos1.second-2) << endl;

	return 0;
}