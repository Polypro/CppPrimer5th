#include <iostream>

using namespace std;
int main()
{
	// programm to grade students
	int n_students = 0;

	if (cin >> n_students && n_students > 0 && n_students < 100) {

		cout << "+----+-------+" << endl;
		cout << "| id | grade |" << endl;
		cout << "+----+-------+" << endl;

		for (int i = 0; i < n_students; ++i) {
			if (i < 10) {
				cout << "| " << "0" << i << " |-------|" << endl;
				cout << "+----+-------+" << endl;
			}
			else {
				cout << "| " << i << " |-------|" << endl;
				cout << "+----+-------+" << endl;
			}
		}
	}
	else {
		cout << "invalid input" << endl;
	}
}
