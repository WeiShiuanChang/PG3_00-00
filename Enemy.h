#pragma once
#include <functional>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

class Enemy {
public:
	void Update();

	void Approach();
	void Shoot();
	void Disengage();


private:
	// ŠÖ”ƒe[ƒuƒ‹
	static void (Enemy::* funcTable[3])();
	int phase_ = 0;

};

