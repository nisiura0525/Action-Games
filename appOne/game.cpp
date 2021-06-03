


























#include"game.h"
#include"libOne.h"
void load(struct GAME* g) {
	load(&g->obstacle);
	load(&g->chara);
}
void init(struct GAME* g) {
	init(&g->obstacle);
	init(&g->chara);
	g->state = g->PLAY;
}
void play(struct GAME* g) {
	move(&g->obstacle);
	move(&g->chara);
	draw(g);
	if (collision(&g->chara, &g->obstacle)){
		g->state = g->OVER;
    }
	else if (g->chara.p.x+g->chara.imgW>width) {
		g->state = g->CLEAR;
	}
}
int collision(struct CHARA* c, struct OBSTACLE* o) {
	float cLeft = c->p.x + c->r.dx;
	float cRight = cLeft + c->r.w;
	float cTop = c->p.y + c->r.dy;
	float cBottom = cTop + c->r.h;
	float oLeft = o->p.x + o->r.dx;
	float oRight = oLeft + o->r.w;
	float oTop = o->p.y + o->r.dy;
	float oBottom = oTop + o->r.h;
	if (cRight<oLeft || cLeft>oRight ||
		cBottom<oTop || cTop>oBottom) {
		return 0;
	}
	return 1;
}
void over(struct GAME* g) {
	draw(g);
	fill(235,64,52);
	textSize(255);
	text("GAMEOVERA", 30, 300);
	if (isTrigger(KEY_SPACE)) {
		g->state = g->INIT;
	}
}
void clear(struct GAME* g) {
	draw(g);
	fill(52, 207, 235);
	textSize(255);
	text("GAMECREAR", 30, 300);
	if (isTrigger(KEY_SPACE)) {
		g->state = g->INIT;
	}
}
void draw(struct GAME* g) {
	clear(70, 0, 70);
	draw(&g->obstacle);
	draw(&g->chara);
	drawRectArea(&g->chara.p, &g->chara.r);
	drawRectArea(&g->obstacle.p, &g->obstacle.r);
}
