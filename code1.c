#include<stdio.h>

typedef struct characterclass {
	char* name;
	int level;
	struct characterclass* nextclass;
}characterclass;

void pointer(){

}

int main() {

    characterclass classlist[5];
    classlist[0].name = "Archer";
    classlist[0].level = 1;

    classlist[1].name = "Cavalry";
    classlist[1].level = 1;

    classlist[2].name = "Infantry";
    classlist[2].level = 1;

    classlist[3].name = "Horse Archer";
    classlist[3].level = 2;
    classlist[3].nextclass = NULL; 

    classlist[4].name = "Spearman";
    classlist[4].level = 2;
    classlist[4].nextclass = NULL; 

    classlist[0].nextclass = &classlist[3]; 
    classlist[1].nextclass = &classlist[3]; 
    classlist[2].nextclass = &classlist[4]; 

    printf("===================================\n");
    printf("��� ������ B������ ���� Ʈ���Դϴ�. (��ȣ �� ���ڴ� ������ �ǹ�)\n");
    for (int i = 0; i < 5; i++) {
        printf("%s(%d):", classlist[i].name, classlist[i].level);
        if (classlist[i].nextclass != NULL) {
            if (i == 0 && i == 1) {
                printf("Horse Archer(2)�� ��������\n");
            }
            else {
                printf("Spearman(2)�� ���� ����\n");
            }
        }
        else
            printf("���� �Ұ���\n");
    }
    return 0;
}