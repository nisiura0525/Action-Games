#pragma once
//当たり判定のエリア追加
struct RECT_AREA {
	//ディスタンスエリア　基準の画像のpx、pyをdx、dyで加算した値がレクとエリア
	float dx = 0;
	float dy = 0;
	float w = 0;
	float h = 0;
};
void drawRectArea(struct FLOAT2* p, struct RECT_AREA *r);
