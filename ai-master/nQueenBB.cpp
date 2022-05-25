/* C++ program to solve N Queen Problem using Branch
and Bound */
#include <bits/stdc++.h>
using namespace std;

bool pqueen(vector<vector<int>> &vec, vector<int> col, vector<int> dd, vector<int> bd, int row)
{
	int n = vec.size();
	if (row >= n)
		return true;
	for (int i = 0; i < n; i++)
	{
		if (!col[i] && !dd[i + row] && !bd[row - i + n - 1])
		{
			vec[row][i] = 1;
			col[i] = 1;
			dd[i + row] = 1;
			bd[row - i + n - 1] = 1;
			if (pqueen(vec, col, dd, bd, row + 1))
				return true;

			vec[row][i] = 0;
			col[i] = 0;
			dd[i + row] = 0;
			bd[row - i + n - 1] = 0;
		}
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vecn(n, vector<int>(n, 0));
	vector<int> col(n, 0);
	vector<int> dd(2 * n - 1, 0);
	vector<int> ud(2 * n - 1, 0);
	pqueen(vecn, col, dd, ud, 0);
	for(auto i : vecn){
		for(auto j : i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}