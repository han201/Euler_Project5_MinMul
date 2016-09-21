#include <iostream>
#include "utils.h"
using namespace std;

int largestprime(int N) {
	int factor = 2;
	while (factor <= N) {
		if (N%factor == 0)
			N = N / factor;
		else
			factor = factor + 1;
	}
	return factor;
}