#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[10];
	
};
int main(int argc, char *argv[]) {
	struct Book*p;
	
	p=malloc(2*sizeof(struct Book));
		//allocation with 4 multiplied integer --> 14(4+10)
	p->number=1;
	strcpy(p->title,"C Programming");
	(p+1)->number=2;
	strcpy((p+1)->title,"Electronics");
	free(p);
	//p unit [ 1| number=1| title =****](_16)[2|number=2|title =***](32)
	return 0;}
