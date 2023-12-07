#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[10];
	
};
int main(int argc, char *argv[]) {
	struct Book **bookshelf;
	int i;
	bookshelf= (struct Book**)malloc(3*sizeof(struct Book*));
	//initial bookshelf (3 boxes for Book*)
	for(i=0;i<3;i++){
		bookshelf[i]=(struct Book*) malloc (10*sizeof(struct Book));//10sturcture allocation  
		//two steps allocation neccessary : first for the Book*(1,2,3) --> Each Book(10°³)  
		//free must be the same procedur
	bookshelf[1][3].number=5;
	strcpy(bookshelf[1][3].title,"C++");
	(bookshelf[2]+4)-> number=3;
	strcpy((bookshelf[2]+4)->title, "communication");
	
	printf("book(1,3): %i,%s\n",(bookshelf[1]+3)->number, (bookshelf[1]+3)-> title);
	printf("book(2,4): %i,%s\n",bookshelf[2][4].number, bookshelf[2][4]. title);
	
	for(i=0;i<3;i++)
		free(bookshelf[i]);
		free(bookshelf);
		system("PAUSE");
		return 0;
		
	}	
	}
	
