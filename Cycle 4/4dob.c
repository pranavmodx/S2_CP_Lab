#include<stdio.h>

struct Person {
	char name[100];
	
	struct DOB {
		int day;
		char month[20];
		int year;
	} dob;
} p1;

int main() {

	//Input
	printf("Enter name of person : ");
	scanf("%s", &p1.name);
	printf("Enter day of birth : ");
	scanf("%d", &p1.dob.day);
	printf("Enter month of birth : ");
	scanf("%s", &p1.dob.month);
	printf("Enter year of birth : ");
	scanf("%d", &p1.dob.year);

	//Display
	printf("Name of person : %s \n", p1.name);
	printf("Date of Birth of person : %dth %s, %d \n", p1.dob.day, p1.dob.month, p1.dob.year);

	return 0;
}
