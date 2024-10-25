#include "grade_funcs.h"

int max, min = 100;
extern int size;

float calculate_average(int score[]) {
	float avg = 0;
	for (int i = 0; i < size; i++) {
		avg += score[i];
	}
	return avg / size;
}

void find_min_max(int score[]) {
	for (int i = 0; i < size; i++) {
		if (score[i] > max)
			max = score[i];
		else if (score[i] < min)
			min = score[i];
	}
}

int count_pass_fail(int score[]) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (score[i] >= 60)
			count++;
	}
	return count;
}