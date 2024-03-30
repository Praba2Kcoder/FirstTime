#include "Avg.h"
int main()
{
	float average; 
	struct Person p[5]={{"Prabakar",21,'M',162,65.0},{"Ankur",22,'M',170,70.0},{"Mohan",21,'M',162,60.0},{"Jothi",21,'F',162,60.0},{"Sethulakshmi",22,'F',162,60.0}};
	average=avg_ages(&p,5);
	return 0;
}

