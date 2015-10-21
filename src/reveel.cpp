#include <iostream>
namespace ncurses {
    extern "C" {
        #include <ncurses.h>
    }
}

int main() {
    ncurses::initscr();
    ncurses::printw("Hello World !!!");
    ncurses::refresh();
    ncurses::getch();
    ncurses::endwin();

    return 0;
}
