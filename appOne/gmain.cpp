/*
#include"libOne.h"
struct SQUARE {
	float x, y, w, h;
	float left, right, top, bottom;
};
void gmain() {
	 window(1920, 1080, full);
	 struct SQUARE a;
	 struct SQUARE b;
	 //�`�C�a�̔��̏����l
	 a.x = 0;
	 a.y = 0;
	 a.w = 200;
	 a.h = 200;
	 b.x = 600;
	 b.y = 600;
	 b.w = 200;
	 b.h = 200;
	 //���C�����[�v
	 while (notQuit) {
		 a.x = mouseX;//�}�E�X���A�}�E�X���̓}�E�X�̏ꏊ���Ӗ����Ă���
		 a.y = mouseY;
		
		//�`��
		clear(128, 128, 128);
		//���ꂼ��̍��E�̍��W�Ə㉺�̍��W�̐ݒ�
		a.left = a.x;
		a.right = a.x + a.w;
		a.top = a.y;
		a.bottom = a.y + a.h;
		b.left = b.x;
		b.right = b.x + b.w;
		b.top = b.y;
		b.bottom = b.y + b.h;
		//�����蔻��
		if (a.right < b.left || b.right < a.left || a.bottom<b.top || a.top>b.bottom)
			fill(0, 200, 0, 128);
		else
			fill(200, 0, 0, 128);
		//�`��
		rect(a.x,a.y,a.w,a.h);
		rect(b.x, b.y, b.w, b.h);
		fill(255);
		textSize(200);
		text("a", a.x+50, a.y + 200);
		text("b", b.x+50, b.y + 200);
	 }
}
*/




#include"libOne.h"
#include"game.h"

void gmain() {
	window(1920, 1080, full);
	struct GAME game;
	load(&game);
	while (notQuit) {
		if (game.state == game.INIT) {
			init(&game);
		}
		else if (game.state == game.PLAY) {
			play(&game);
		}
		else if (game.state == game.OVER) {
			over(&game);
		}
		else if (game.state == game.CLEAR) {
			clear(&game);
		}
	}
}