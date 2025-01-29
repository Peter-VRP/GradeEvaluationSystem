#include <iostream>

using namespace std;

int main() {

	double score;

	cout << "Enter score:";
	cin >> score;

	if (score >= 90) {
		cout << "Excellent" << endl;
	}
	else if (score <= 89 && score >= 70) {
		cout << "Good" << endl;
	}
	else if (score <= 69 && score >= 60) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
}