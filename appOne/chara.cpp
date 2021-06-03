#include"chara.h"
#include"libOne.h"
//画像読み込み
void load(struct CHARA* c) {
	c->imgIdx = loadImage("assets/witch.png");
	c->imgW = 223;
	c->imgH = 500;
}
//初期値
void init(struct CHARA* c) {
	c->p.x = 400;
	c->p.y = height - c->imgH;
	c->limmitpy = c->p.y;
	c->vx = 2;
	c->initVy = -50;
	c->gravity = 3;
	c->jumpFlag = 0;
	c->r.dx = 85;
    c->r.dy = 0;
	c->r.w = c->imgW - c->r.dx*2+6;
	c->r.h = c->imgH;
}
void move(struct CHARA* c) {//横移動
		c->p.x += c->vx;
		//ジャンプのアルゴリズム
		if (c->jumpFlag == 0) {
			if (isTrigger(KEY_SPACE)) {
				c->vy = c->initVy;
				c->jumpFlag = 1;
			}
		}
		if (c->jumpFlag == 1) {
			c->p.y += c->vy;
			c->vy += c->gravity;
			if (c->p.y > c->limmitpy) {
				c->p.y = c->limmitpy;
				c->jumpFlag = 0;
			}
		}
}

//描画
void draw(struct CHARA* c) {
		image(c->imgIdx, c->p.x, c->p.y);
}

