#ifndef NLO_HPP
# define NLO_HPP

#include "ncurses.h"

class NLO {
public:
	NLO(int, int,int,int);
	~NLO();
protected:
	int posX;
	int posY;
	int maxX;
	int maxY;
};


#endif