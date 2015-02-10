/*
******************************************************************************
*
*	Filename: hellofunc.c
*
*   Description: A Hello World application.
*   
*	Change Log: 
*   2015_02_10_EST_1411: mav: Created Hello World application.
*   
*   
******************************************************************************
*/
#include <helloworld.h>

int display(int i) {
	
	for(i=1; i<=10; i++) {
		printf("\n i=%d", i);
	}
	
	return 0;
}
