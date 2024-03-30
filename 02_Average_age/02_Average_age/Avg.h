/*
 * Avg.h
 *
 * Created: 04-03-2024 12:53:47
 *  Author: prabhakar
 */ 


#ifndef AVG_H_
#define AVG_H_

#include <avr/io.h>
struct Person
{
	char name[20];
	int age;
	char gender;
	float height;
	float weight;
};
float avg_ages(struct Person*,int);
#endif /* AVG_H_ */