#pragma once
#include "Essentials.h"
//TODO:もうちょい何とかする
class wTexture
{
public:
	//実質ただのinit
	void LoadTexture(string path);
	
};

void InitTextureBuff();
wTexture* GetTexture();
