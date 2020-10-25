#include <stdio.h>

int findRange(int array[]);
main() {
	int niz[7], range, i;
	printf("Unesi 7 brojeva (jedan po jedan uz pomoc Enter-a): \n");
	for (i = 0; i < 7; i++)
		scanf_s("%d", &niz[i], 4);
	range = findRange(niz);
	printf("Range ovog niza je %d!\n", range);
}

int findRange(int array[]) {
	int min = 100, max=0, i=0, frange;
	for (i=0; i<7; i++){
		if (max < array[i])
			max = array[i];
		if (min > array[i])
			min = array[i];
	}
	frange = max - min;
	return frange;
}