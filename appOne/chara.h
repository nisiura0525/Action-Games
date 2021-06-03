#pragma once
#include"float2.h"
#include"rect area.h"
struct CHARA {
	int imgIdx = 0;
	int imgW = 0;
	int imgH = 0;
	struct FLOAT2 p;
	float vx = 0;
	float vy = 0;
	float initVy = 0;
	float gravity = 0;
	int jumpFlag = 0;
	float limmitpy = 0;
	struct RECT_AREA r;
};
void load(struct CHARA* c);
void init(struct CHARA* c);
void move(struct CHARA* c);
void draw(struct CHARA* c);