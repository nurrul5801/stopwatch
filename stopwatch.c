#include<stdio.h>
#include<curses.h>
#include<string.h>
int main()
{
 int hour,min,sec;
 initscr();
 printf("------------------------------------------\n");
 printf("\t\t Stop Watch\n");
 printf("------------------------------------------\n");
 
 refresh();
 endwin();
return 0;
}