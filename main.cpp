#include <iostream>
#include <unistd.h>
#include <thread>
#include <ncurses.h>
#define drone "/-\\"
#define clscr system("clear")
using namespace std;
class Drone{
	public:
	string art = drone;
	int pos_x;
	int pos_y;
	//Position is integer as the screen will be divided into grids. No decimal value should be allowed.
	int speed_x;
	int speed_y;
	//The latter applies to speed, only allowing integer operations.
	//Initialize default values for newly created drones:
	Drone(){
	this->pos_x=0;
	this->pos_y=0;
	this->speed_x=0;
	this->speed_y=0;
}
	//Test functions:
	void logPos(){
	cout << "(" << this->pos_x << ", " << this->pos_y << ")" << endl;
}
	void changePos(int x, int y){
	this->pos_x=x;
	this->pos_y=y;
}
};

int main(){
	Drone drone1;
	//Test class
	drone1.changePos(4,7);
	drone1.logPos();
	initscr();
	noecho();
	curs_set(FALSE);
	int max_x=0;
	int max_y=0;
	getmaxyx(stdscr,max_y,max_x);
	for(int i=0;i<max_x;i++){
		clear();
		mvprintw(drone1.pos_y, drone1.pos_x, "o");
		refresh();
		usleep(60000);	
		drone1.changePos(i,0);
}
 } 


