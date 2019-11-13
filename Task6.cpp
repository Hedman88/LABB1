
#include "iostream";

using namespace std;
/*
int main() {
	
	// Used the Sieve of Eratosthenes algorithm, realized it does a lot of unneccessary work.
	//int n;
	//cout << "How many prime numbers do you want?" << endl;
	//cin >> n;
	//cout << "----------------------------" << endl;
	//int k = 0;
	//const int len = 10000;
	//int arr[len] = { 0 };
	//for (int i = 2; i < len; i++) {
	//	for (int j = i * i; j < len; j += i) {
	//		arr[j - 1] = 1;
	//	}
	//}
	//for (int i = 1; i < len; i++) {
	//	if (arr[i - 1] == 0) {
	//		cout << i << endl;
	//		k++;
	//		if (k >= n) {
	//			break;
	//		}
	//	}
	//}
	
	// This is the one for the assignment
	int primtal = 7;
	int n;
	cout << "How many prime numbers do you want?" << endl;
	cin >> n;
	if (n == 1)
	{
		cout << "2";
	}
	else if (n == 2)
	{
		cout << "2.3";
	}
	else if (n == 3)
	{
		cout << "2.3.5";
	}
	else if (n == 4)
	{
		cout << "2.3.5.7";
	}
	else
	{
		cout << "2.3.5.7";
		for (int i = 4; i < n; i++)
		{
			bool sant = false;
			while (sant == false)
			{
				if ((primtal % 2) == 0)
				{
					primtal++;
				}
				else if ((primtal % 3) == 0)
				{
					primtal++;
				}
				else if ((primtal % 5) == 0)
				{
					primtal++;
				}
				else if ((primtal % 7) == 0)
				{
					primtal++;
				}
				else
				{
					sant = true;
					cout << "." << primtal;
					primtal++;
				}
			}
		}
	}
	system("pause");
	return 0;
}
*/