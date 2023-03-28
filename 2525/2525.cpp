#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main() {
	int need;

	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	printf("%d %d\n", tm.tm_hour, tm.tm_min);

	scanf("%d", &need);
	if (0 > need || need > 1001) {
		printf("오류입니다.");
		return;
	}
	else if (0 <= need && need <= 1000) {
		int min2 = tm.tm_min + need;
		int hour = tm.tm_hour;
		if (min2 > 60) {
			min2 -= 60;
			hour += 1;
		}
		printf("%d %d", hour, min2);
	}
	
}