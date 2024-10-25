#include "grade_funcs.h"
#include <stdio.h>

extern int max, min;
int size;

int main() {
	int score[] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };
	size = sizeof(score) / sizeof(int);

	float avg = calculate_average(score);
	printf("Average grade : %.1f\n", avg);
	find_min_max(score);
	printf("Highest grade : %d\n", max);
	printf("Lowest grade : %d\n", min);
	puts("");

	printf("Grades above average : ");
	for (int i = 0; i < size; i++) {
		if (score[i] > avg)
			printf("%d ", score[i]);
	}
	puts("");
	printf("Grades below average : ");
	for (int i = 0; i < size; i++) {
		if (score[i] < avg)
			printf("%d ", score[i]);
	}
	printf("\n\n");

	printf("Numbers of students passing : %d\n", count_pass_fail(score));
	printf("Numbers of students failing : %d", size - count_pass_fail(score));

	return 0;
}