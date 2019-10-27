#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int count = 0;
	long long int n;
	cin >> n;

	while(n)
	{
		if(n%10 == 4 || n%10 == 7)
			count++;
		n /= 10;
	}

	if(count == 4 || count == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}