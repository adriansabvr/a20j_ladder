#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	int upper = 0;

	for(int i = 0; i < s.size(); i++)
		if(isupper(s[i]))
			upper++;

	if(2*upper > s.size())
		for(int i = 0; i < s.size(); i++)
			cout << (char)toupper(s[i]);
	else
		for(int i = 0; i < s.size(); i++)
			cout << (char)tolower(s[i]);



	return 0;
}