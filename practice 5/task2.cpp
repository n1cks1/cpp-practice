#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите количество элементов массива: ";
  cin >> n;

  int* m = new int[n]; 

  cout << "Введите элементы массива: ";
  for (int i = 0; i < n; i++) {
    cin >> *(m + i); 
  }

  int maxNum = *m; 
  for (int i = 1; i < n; i++) {
    if (*(m + i) > maxNum) {
      maxNum = *(m + i);
    }
  }

  cout << "Максимальное число: " << maxNum << endl;
  delete[] m; 
  return 0;
}