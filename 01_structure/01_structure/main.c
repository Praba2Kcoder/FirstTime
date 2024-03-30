#include <avr/io.h>
#include <stdio.h>
#include <string.h>
struct Person
{
	char name[20];
	int age;
	char gender;
	float height;
	float weight;
	};

int main(void)
{
    struct Person p[5]={{"Prabakar",21,'M',162,65.0},{"Ankur",22,'M',170,70.0},{"Mohan",21,'M',162,60.0},{"Jothi",21,'F',162,60.0},{"Sethulakshmi",22,'F',162,60.0}};
	//Command added
	return 0;
}

