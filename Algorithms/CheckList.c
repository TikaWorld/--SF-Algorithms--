#include "Test.h"

int test() {
	int chk = 0;
	int list1[3] = { 1,3,4 };
	int list2[5] = { 1,1,2,3,4 };
	int j = 0;

	printf("%d", checkList(list1, list2));

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


int checkList(int* list, int* unionList) {
	int count = 0;
	for (int i = 0; i < sizeof(*unionList) / sizeof(int); i++) {
		printf("%d %d %d %d\n", list[count], unionList[i], sizeof(list), sizeof(*unionList));
		if (list[count] == unionList[i]) {
			count++;
			if (count > (sizeof(list) / sizeof(int)))
				return 0;
		}
	}
	printf("%d\n", count);

	return 1;
}