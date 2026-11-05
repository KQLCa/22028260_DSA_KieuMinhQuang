#include <iostream>
using namespace std;

void doi(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N, i, j;
	cin >> N;
	int a[N];
	for (i = 0; i < N; ++i) {
		cin >> a[i];
	}
	
	for (i = 0; i <= N-2; i++) {
		for (j = 0; j <= N-2-i; j++) {
			if (a[j] > a[j+1]) 
			{
				doi(&a[j], &a[j+1]);
			}
		}
	}
	
	for (i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}
