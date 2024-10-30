#include <ncurses.h>

void window_menu(){
	initscr();
	//
	cbreak();
	noecho();
	WINDOW *win = newwin(10, 40, 5, 5);
	refresh();
	char c = 'o';
	box(win, (int)c, 0);
	mvwprintw(win, 1, 1,  "menu");
	wrefresh(win);	
	getch();
	getch();
	endwin();
}
