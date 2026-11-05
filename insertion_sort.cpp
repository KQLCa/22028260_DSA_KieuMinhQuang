#include <iostream>
using namespace std;

int main()
{ 
    int N, i, j;
	cin >> N;
	int a[N];
	for (i = 0; i < N; ++i) {
		cin >> a[i]; 
	}
	
	for (i = 1; i <= N-1; i++) {
	    int key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key; 
	}
	
	for (i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	return 0;
} 
