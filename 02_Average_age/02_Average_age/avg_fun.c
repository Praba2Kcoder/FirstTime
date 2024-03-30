#include "Avg.h"
float avg_ages(struct Person *q,int n)
{
	int sum=0; 
	float avg;
	for(int i=0;i<n;i++)
	{
		sum=sum+(q->age);
		q++;
	}
	avg=sum/(float)n;
	return avg;
}