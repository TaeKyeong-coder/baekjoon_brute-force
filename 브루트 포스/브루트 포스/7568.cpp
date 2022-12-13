#include <iostream>
#include <vector>
using namespace std;

int main() {
	/*
	¸ö¹«°Ô : x
	Å° : y
	=> (x, y)
	*/

	int N;
	cin >> N;

	int rank = 1;
	vector<pair<int, int>> arr;
	arr.clear();

	for (int i = 0; i < N; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		arr.push_back(make_pair(tmp1, tmp2));
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		cout << rank << ' ';
		rank = 1;
	}
}