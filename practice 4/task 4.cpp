#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int kaif(int &n, vector<int> &numbers) {
    int num_enter;
    cout << "Enter the size of vector: " << endl;
    cin >> n;
    cout << "Enter numbers in vector: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> num_enter;
        numbers.push_back(num_enter);
    }

    cout << endl;

    return numbers, n;

}

int main() {
    int a;
    vector<int> num;

    kaif(a, num);

    cout << "array is: ";

    for (int n: num) {
        cout << n << " ";
    }

}