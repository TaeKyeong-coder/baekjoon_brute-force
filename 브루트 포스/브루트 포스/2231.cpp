#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int sum = i;
		int tmp = i;
		while (tmp) {
			sum += tmp % 10;
			tmp = tmp / 10;
		}

		if (N == sum) {
			cout << i << endl;
			return 0;
		} 

		if(i+1 == N)
			cout << "0" << endl;
	}


	return 0;
}