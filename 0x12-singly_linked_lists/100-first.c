#include "lists.h"

/**
 * myFirstfunc - Apply the constructor attribute to
 * myFirstFunc() so that it is executed before main()
 */

void myFirstfunc(void);
/*__attribute__((constructor));*/

/**
 * myFirstfunc - implementation of myFirstfunc
 */

void myFirstfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
