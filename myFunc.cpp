#include"myFunc.h"


void max_min(void* arr, const int arrLength, int** ptrArr) {//ÕÒ×îÖµ
	int* arr1 = (int*)arr;
	//int *ptrMax = nullptr; int* ptrMin = nullptr;

	if (*arr1 > * (arr1 + 1)) {
		//ptrArr[0] = arr1; ptrArr[1] = (arr1+1);
		*ptrArr = arr1; *(ptrArr + 1) = (arr1 + 1);
	}
	else {
		//ptrArr[1] = arr1; ptrArr[0] = arr1+1;
		*(ptrArr + 1) = arr1; *ptrArr = arr1 + 1;
	}
	for (int i = 2; i < arrLength; i++) {
		if (**(ptrArr + 1) > * (arr1 + i)) {
			//*ptrArr[1] > * (arr1 + i)
			//ptrMax = arr1; ptrMin = arr1 + 1;
			//ptrArr[1] = arr1+i; continue;
			*(ptrArr + 1) = arr1 + i; continue;
		}
		else {

			if (**ptrArr < *(arr1 + i)) {//*ptrArr[0]
				*ptrArr = arr1 + i;
			}
		}
	}
	//return ptrArr;

}
int compare_ints(const void* a, const void* b) {//ÅÅÐò
	int* arg1 = (int*)a;
	int* arg2 = (int*)b;
	if (*arg1 > * arg2) return -1;
	else if (*arg1 == *arg2) return 0;
	else return 1;
}