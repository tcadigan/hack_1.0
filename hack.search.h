#ifndef HACK_SEARCH_H_
#define HACK_SEARCH_H_

#include "def.monst.h" /* monst */

void wakeup(struct monst *mtmp);
int dosearch();
int doidtrap();
int findit();
void seemimic(struct monst *mtmp);

#endif
