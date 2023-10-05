#include <conio.h>
#include <iostream>
/*时间复杂度O(N2) 空间复杂度O(n)*/
using namespace std;
void srot(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {//>是升序，<是降序
				swap(a[i], a[j]);
			}
		}
	}
}

int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	srot(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	_getch();
	return 0;
}
