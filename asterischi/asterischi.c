#include<stdio.h>
#include<ncurses.h>
#include<time.h>
int main(){
struct timespec intervallo;
intervallo.tv_sec=0;
intervallo.tv_nsec=500*1000*1000;
  initscr();
  curs_set(0);/*cursore invisibile*/
  
  addch("*");
  nanosleep(&intervallo, NULL);
  refresh();

   addch("*");
   nanosleep(&intervallo, NULL);
   refresh();


  endwin();

  return 0;
}
