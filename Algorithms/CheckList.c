#include "Test.h"

int test() {
	int chk = 0;
	int list1[3] = { 1,3,4 };
	int list2[5] = { 1,1,2,3,4 };
	int j = 0;

	for (int i = 0; i < 3; i++) {
		chk = 0;
		for (; j < 5; j++) {
			if (list1[i] == list2[j]) {
				chk = 1;
				break;
			}
		}
		if (!chk) {
			printf("Error");
			return 0;
		}
	}
	return 1;
}


