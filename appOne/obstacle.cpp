#include"obstacle.h"
#include"libOne.h"
#include"rect area.h"
void load(struct OBSTACLE* o) {
	o->imgIdx = loadImage("assets/pumpkin.png");
	o->imgW = 364;
	o->imgH = 300;	//�p���v�L��	
	//load �摜�ǂݍ���
}
void init(struct OBSTACLE* o) {//init �f�[�^�̏�����
	o->p.x = width;
	o->p.y = height - o->imgH;
	o->vx = -45;
	o->r.dx = 30;
	o->r.dy = 60;
	o->r.w = o->imgW - o->r.dx * 2;
	o->r.h = o->imgH-o->r.dy;
}
void move(struct OBSTACLE* o) {//move �p���v�L�����ړ�
	o->p.x += o->vx;
	if (o->p.x < -o->imgW) {
		o->p.x = width;
	}
}
void draw(struct OBSTACLE* o) {//draw �`��
	image(o->imgIdx, o->p.x, o->p.y);
}