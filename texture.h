#pragma once

#include <d3d9.h>

typedef enum 
{
    TEXTURE_INDEX_YUKIDARUMA,
	TEXTURE_INDEX_RUNNINGMAN,
	TEXTURE_INDEX_BULLET,
	TEXTURE_INDEX_LASER,
	TEXTURE_INDEX_EXPLOSION,
	TEXTURE_INDEX_NUMBER,
	TEXTURE_INDEX_TITLE,

	TEXTURE_INDEX_STAGE_START,
	TEXTURE_INDEX_STAGE1,
	TEXTURE_INDEX_STAGE2,
	TEXTURE_INDEX_STAGE3,
	TEXTURE_INDEX_STAGE_END,

	TEXTURE_INDEX_RESULT,
	TEXTURE_INDEX_TILEMAP,


    TEXTURE_INDEX_MAX
}TextureIndex;

int Texture_Load(void); //初期化
void Texture_Release(void); //終了処理
LPDIRECT3DTEXTURE9 Texture_GetTexture(TextureIndex index);
int Texture_GetWidth(TextureIndex index);
int Texture_GetHeight(TextureIndex index);
