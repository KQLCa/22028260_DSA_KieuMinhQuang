#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	double a[N];
	double sum = 0.0;
	
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}
