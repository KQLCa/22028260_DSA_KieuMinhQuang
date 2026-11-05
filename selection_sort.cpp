#include <iostream>
using namespace std;

void doi(int* a, int* b) 
{
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
	
	for (i = 0; i <= N-2; ++i) {
		for (j = i; j <= N-1; ++j) {
			if (a[i] > a[j]) 
			{
				doi(&a[i], &a[j]);
				/*int temp = a[i];
				a[i] = a[j];
				a[j] = temp;*/
			} 
		}
	}
	
	for (i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}
