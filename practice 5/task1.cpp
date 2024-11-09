#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, maxNum;
	cout << "Введите количество элементов вектора: ";
	cin >> n;
	vector<int> m(n);
	cout << "Введите элементы вектора: ";
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	} 
	maxNum = m[0];
	for (int i = 1; i < n; i++) {
		maxNum = maxNum > m[0] ? maxNum : m[0];
	}
	cout << "Максимальное число: " << maxNum;
	return 0;
}