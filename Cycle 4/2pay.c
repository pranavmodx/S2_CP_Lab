#include<stdio.h>

struct Pay {
	char name[100];
	int basic;
	int da;
	int gross;	
} emp[100];


int main() {
	//struct Pay emp[i];
	int num, i;
	printf("Enter no. of employees : \n");
	scanf("%d", &num);
	for (i=0; i<num; i++) {
		printf("Enter employees name : ");
		scanf("%s", &emp[i].name);
		//gets(emp[i].name);
		printf("Enter basic pay : ");
		scanf("%d", &emp[i].basic);

		emp[i].da = 0.52 * emp[i].basic;
		emp[i].gross = emp[i].basic + emp[i].da;
	}
	
	for (i=0; i<num; i++) {
		printf("Employee name : %s \n", emp[i].name);
		printf("DA : %d \n", emp[i].da);
		printf("Gross : %d \n", emp[i].gross);	
	}

	return 0;
}
