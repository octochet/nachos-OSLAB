/* mytest.c
 *	Simple program to test whether the systemcall interface works.
 *
 */

#include "syscall.h"

int main() {
    PrintUCString("this was in small case\n");

    Halt();
    /* not reached */
}
