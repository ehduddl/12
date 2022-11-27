#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX_NAME     20

struct student {
    int ID;
    char name[MAX_NAME];
    double grade;
};

int main(int argc, char *argv[]) {
	
    struct student student1;

    student1.ID=1003;
    strcpy(student1.name,"YujinIn");
    student1.grade = 4.3;

	return 0;
}
