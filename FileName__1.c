#include<stdio.h>

int main() {
	int per[4] = { 25, 38, 0, 40 };
	int num,num2;
	while (1) {
		printf("���� �йݺ� C���α׷���1 ���� �ο��� ������ �����ϴ�.(����: 40��)\n");
		for (int i = 0; i < 4; i++) {
			printf("%d�й� %d�� ", i + 1, per[i]);
		}
		printf("����� �Է��ϼ���.(1.�����ο� �߰�, 2.�����ο� ����, ��Ÿ.����)");
		scanf_s("%d", &num);
		if (num == 1) {
			printf("�й��� �����ϼ���:(1~4)>");
			scanf_s("%d", &num2);
			if (per[num2-1] >= 40) {
				printf("%d�й��� �ο��ʰ��Դϴ�\n",per[num2-1]);
			}
			else
			per[num2-1] += 1;
		}
		else if (num == 2) {
			printf("�й��� �����ϼ���:(1~4)>");
			scanf_s("%d", &num2);
			if (per[num2-1] == 0) {
				printf("%d�й��� �ο��� �����ϴ�.\n",per[num2-1]);
			}
			else
			per[num2-1] -=1;
		}
		else {
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
	return 0;
}