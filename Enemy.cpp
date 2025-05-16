#include "Enemy.h"
#include<stdio.h>

void Enemy::Approach() {
	printf("接近\n");
};

void Enemy::Shoot() {
	printf("射撃\n");
};

void Enemy::Disengage() {
	printf("離脱\n");
};

void (Enemy::* Enemy::funcTable[3])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Disengage,
};

void Enemy::Update() {
	for (int i = 0; i < 10; i++) {
	//phase_関数実行
	(this->*funcTable[phase_])();

	//行列更新
	phase_ += 1;
	if (phase_ > 2) {
		phase_ = 0;
	}

	}
};


