#include <iostream>

// 基底クラス
class Vehicle {
public:
    // 仮想関数 
    virtual void move() {
        std::cout << "移動手段" << std::endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        std::cout << "車で出発" << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    void move() override {
        std::cout << "自転車で出発" << std::endl;
    }
};


int main() {
    Vehicle* vehicle[3];
   
    // 生成
    for (int i = 0; i < 2; i++) {
        if (i < 1) {
            vehicle[i] = new Car;
        } else {
            vehicle[i] = new Bicycle;
        }
    }

    // move() を呼び出す
    for (int i = 0; i < 2; i++) {
        vehicle[i]->move();
    }

    // メモリ解放
    for (int i = 0; i < 2; i++) {
        delete vehicle[i];
    }

	return 0;
}