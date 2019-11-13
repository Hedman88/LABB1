
#include "iostream";

using namespace std;

int main() {
	int n = -1;
	cout << "Give a natural number:" << endl;
	cin >> n;
	if (n > 0) {
		cout << n << " ";
		bool bounce = false;
		int k = 2 * n;
		for (int i = 0; i < k; i++) {
			if (bounce) {
				n++;
				cout << n << " ";
			}
			else {
				n--;
				cout << n << " ";
				if (n == 0) {
					bounce = true;
				}
			}

		}
		cout << endl;
	}
	else {
		cout << "Error! Input cannot be negative." << endl;
	}
	system("pause");
	return 0;
}
