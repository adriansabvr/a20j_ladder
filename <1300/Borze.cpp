#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	string number = "";

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '.')
			number.push_back('0');
		else if(s[i] == '-' && s[i+1] == '.')
		{
			number.push_back('1');
			i++;
		}
		else
		{
			number.push_back('2');
			i++;
		}
	}

	cout << number << endl;

	return 0;
}