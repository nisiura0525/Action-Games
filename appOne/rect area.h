#pragma once
//�����蔻��̃G���A�ǉ�
struct RECT_AREA {
	//�f�B�X�^���X�G���A�@��̉摜��px�Apy��dx�Ady�ŉ��Z�����l�����N�ƃG���A
	float dx = 0;
	float dy = 0;
	float w = 0;
	float h = 0;
};
void drawRectArea(struct FLOAT2* p, struct RECT_AREA *r);
