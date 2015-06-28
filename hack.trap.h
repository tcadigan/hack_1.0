#ifndef HACK_TRAP_H_
#define HACK_TRAP_H_

#include "def.gen.h" /* gen */

void dotrap(struct gen *trap);
void selftouch(char *arg);
void placebc(int attach);
void unplacebc();
void float_up();
void float_down();

#endif