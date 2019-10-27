#include <bits/stdc++.h>
using namespace std;

void toggle(int r, int c, vector<vector<int>> &matrix)
{
	if(r>0)
		matrix[r-1][c] = !matrix[r-1][c];
	if(r<2)
		matrix[r+1][c] = !matrix[r+1][c];
	if(c>0)
		matrix[r][c-1] = !matrix[r][c-1];
	if(c<2)
		matrix[r][c+1] = !matrix[r][c+1];

	matrix[r][c] = !matrix[r][c];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> matrix(3, vector<int>(3,1));
	int x;

	for(int r = 0; r < 3; r++)
		for(int c = 0; c < 3; c++)
		{
			cin >> x;

			if(x % 2)
				toggle(r, c, matrix);
		}

	for(int r = 0; r < 3; r++)
	{
		for(int c = 0; c < 3; c++)
		{
			cout << matrix[r][c];
		}
		cout << endl;
	}

	return 0;
}