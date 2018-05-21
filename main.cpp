#include <iostream>
#include "my_lib.h"


reader list[KST];
reader olders[KST];

int numb;

void main(void)
{

	printf("Кількість читачів - ");
	scanf_s("%d", &count);
	getchar();
	getReaders();
	sort();
	printHeader();
	for (int i = 0; i < count; i++) {
		printRow(i);
	}
	printFooter();
	searchOlders();
	setOlders();
}






