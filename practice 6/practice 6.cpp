#include <iostream>
#include <string>
using namespace std;
 
class Person
{
public:
	int number1;
	int number2;
	int number3;

	void print() {
		cout << number3;
	}

	int print_test1(int testNum) {
		return testNum;
	}

	int print_test1(int testNum1, int testNum2) {
		cout <<	testNum2;
		return testNum2;
	}
	Person(int testNum1, int testNum2) {
		this->number1 = testNum1;
		this->number2 = testNum2;
	}
	Person(int testNum1) {
		this->number1 = testNum1;
	};
	Person(int testNum1, int testNum2, int testNum3) {
		this->number1 = testNum1;
		this->number2 = testNum2;
		this->number3 = testNum3;
	}
};



int main() {
	Person person(2, 3, 4);
	person.print_test1(2, 3);
	
	return 0;
}