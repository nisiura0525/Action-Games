#pragma once
#include"obstacle.h"
#include"chara.h"
struct GAME {
	//ƒQ[ƒ€‚Ìstateió‘Ôj‚ğİ’è‚µ‚Ä‚¢‚é
	const int INIT = 0;
	const int PLAY = 1;
	const int OVER = 2;
	const int CLEAR = 3;
	int state = 0   ;
	struct OBSTACLE obstacle;
	struct CHARA chara;
};
void load(struct GAME* g);
void init(struct GAME* g);
void play(struct GAME* g);
void over(struct GAME* g);
void clear(struct GAME* g);
void draw(struct GAME* g);
int collision(struct CHARA* c, struct OBSTACLE* o);


