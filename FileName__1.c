#include<stdio.h>

int main() {
	int per[4] = { 25, 38, 0, 40 };
	int num,num2;
	while (1) {
		printf("현재 분반별 C프로그래밍1 수강 인원은 다음과 같습니다.(정원: 40명)\n");
		for (int i = 0; i < 4; i++) {
			printf("%d분반 %d명 ", i + 1, per[i]);
		}
		printf("명령을 입력하세요.(1.수강인원 추가, 2.수강인원 감소, 기타.종료)");
		scanf_s("%d", &num);
		if (num == 1) {
			printf("분반을 선택하세요:(1~4)>");
			scanf_s("%d", &num2);
			if (per[num2-1] >= 40) {
				printf("%d분반은 인원초과입니다\n",per[num2-1]);
			}
			else
			per[num2-1] += 1;
		}
		else if (num == 2) {
			printf("분반을 선택하세요:(1~4)>");
			scanf_s("%d", &num2);
			if (per[num2-1] == 0) {
				printf("%d분반은 인원이 없습니다.\n",per[num2-1]);
			}
			else
			per[num2-1] -=1;
		}
		else {
			printf("프로그램을 종료합니다.");
			break;
		}
	}
	return 0;
}