#ifndef SPRITE_H
#define SPRITE_H

#include "Frame.h"

struct Sprite {
	//Frame info
	FrameSize size;
	UINT8 first_tile;

	//Anim data
	UINT8* data;
	UINT8 current_frame;
	UINT8 accum_ticks;
	UINT8 ticks_per_frame;

	UINT16 x;
	UINT16 y;

	UINT8 coll_x, coll_y, coll_w, coll_h;
};

void InitSprite(struct Sprite* sprite, FrameSize size, UINT8 first_tile);
void SetSpriteAnim(struct Sprite* sprite, UINT8* data);
void DrawSprite(struct Sprite* sprite);

void TranslateSprite(struct Sprite* sprite, INT8 x, INT8 y);
void TranslateSpriteNEG(struct Sprite* sprite, INT8 x, INT8 y);


#endif