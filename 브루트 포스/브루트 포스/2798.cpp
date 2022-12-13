#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, goal=0, sum = 0;
	vector<int> card;

	cin >> N >> M;

	card.clear();
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		card.push_back(tmp);
	}

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				sum = card[i] + card[j] + card[k];
				if (sum <= M && sum > goal) {
					goal = sum;
				}
			}

	cout << goal;
}