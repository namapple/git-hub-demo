#include <stdio.h>

struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;
};
struct HeroDota {
	char name[50];
	char diff[5];
};

int main() {
	
	struct Student student1;
	student1.age = 24;
	student1.gpa = 2.9;
	strcpy(student1.name, "Dao Duy Nam");
	strcpy(student1.major, "English Language");

	struct HeroDota hero1;
	strcpy(hero1.name, "Mirana");
	strcpy(hero1.diff, "***");


	printf("Hero name:\t%s\n", hero1.name);
	printf("Difficulty:\t%s\n", hero1.diff);
	return 0;
}

