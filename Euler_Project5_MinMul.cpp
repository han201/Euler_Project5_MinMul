#include <iostream>
#include "utils.h"
using namespace std;

int main() {
	int total = 20;
	int solution = 1;
	for (int x = 1; x < total+1; ++x) {
		if (solution%x != 0) {
			solution = solution * largestprime(x);
		}
	cout << solution << " is the minimul number to be divided by " << x << ". " << endl;
	}
	system("pause");
	return 0;
}

