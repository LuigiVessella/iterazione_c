#include<stdio.h>
#include<ncurses.h>
#include<time.h>

int main(){
    struct timespec tempo;
    tempo.tv_sec=0;
    tempo.tv_nsec=800*1000*1000;
 
    initscr();

    curs_set(0);/*cursore invisibile*/
    
    for(int i =0; i<10; i++){
	    
            mvaddstr(3,3, "*");/*stampa in una determinata posizione*/
            refresh();/*pulisce lo schermo*/
            nanosleep(&tempo, NULL);/*attende*/
            mvaddstr(3,3, " ");
            refresh();
	    nanoleep(&tempo, NULL);
    }
     getch();
     endwin();
return 0;
}

