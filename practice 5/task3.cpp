#include <iostream>
#include <string>
#include <vector>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    wstring s;
    wcout << L"Введите количество строк: ";
    wcin >> n;
    wcin.ignore();

    vector<wstring> m;
    wcout << L"Введите строки: " << endl;

    for (int i = 0; i < n; i++) {
        wcout << i + 1 << L": ";
        getline(wcin, s);

        auto it = m.begin();
        while (it != m.end() && *it < s) {
            ++it;
        }
        m.insert(it, s);
    }

    wcout << L"\nОтсортированные строки:" << endl;
    for (const auto& str : m) {
        wcout << str << endl;
    }

    return 0;
}
