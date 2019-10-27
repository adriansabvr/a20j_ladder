#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b, c;
	int sumA = 0, sumB = 0, sumC = 0;
	cin >> n;

	while(n--)
	{
		cin >> a >> b >> c;
		sumA += a;
		sumB += b;
		sumC += c;
	}

	if(sumA || sumB || sumC)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}