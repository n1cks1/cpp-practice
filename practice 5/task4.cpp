#include <iostream>
#include <vector>
using namespace std;


int detr(vector<vector<int>> arr) {
	int d;
	if (arr.size() > 2) {
		d = 0;
		for (int i = 0; i < arr.size(); i++) {
			vector<vector<int>> new_arr(arr);
			new_arr.erase(new_arr.cbegin() + i);
			for (int j = 0; j < new_arr.size(); j++) {	
				new_arr[j].erase(new_arr[j].cbegin());
			}
			int z = i%2?-1:1;
			d = d + (arr[i][0] * detr(new_arr)) * z;
		}
	}
	else if (arr.size() == 2) {
		d = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
	}
	else {
		d = arr[0][0];
	}
	return d;
}

int main() {
	// vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// vector<vector<int>> arr{{1, 2}, {3, 4}};
	vector<vector<int>> arr;
	int n, el;

	cout << "Введите размерность матрицы: ";
	cin >> n;
	cout << "Введите элементы матрицы(" << n*n << " чисел через пробел/перенос строки): \n";
	for (int i = 0; i < n; i++) {
		arr.push_back(vector<int>{});
		for (int j = 0; j < n; j++) {
			cin >> el;
			arr[i].push_back(el);
		}
	}

	cout << "Определитель матрицы равен: " << detr(arr);
}