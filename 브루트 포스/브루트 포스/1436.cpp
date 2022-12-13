#include <iostream>
#include <string>
using namespace std;
int movieN(int);

int main() {
	int N;
	cin >> N;
	cout << movieN(N);
}

int movieN(int N)
{
	int i = 666;
	int series = 0;
	string i_to_str;
	while (true)
	{
		i_to_str = to_string(i);
		for (int j = 0; j < i_to_str.length() - 2; j++)
			if (i_to_str[j] == '6' && i_to_str[j + 1] == '6' && i_to_str[j + 2] == '6')
			{
				series++;
				if (series == N)
					return i;
				break;
			}
		i++;
	}
}