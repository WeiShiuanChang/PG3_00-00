#include <iostream>

// 基底クラス
class IShape {
public:
    IShape() {};
    virtual ~IShape() {};
    float size = 0;

    // 仮想関数 
    virtual void Size() = 0;
    virtual void Draw() = 0;
};
// 派生クラス 1
class Circle : public IShape {
public:
    Circle() {};
    ~Circle() {};

    void Size() override {
        int radius = 5;
        size = radius * radius * 3.14;
    }

    void Draw() override {
        std::cout << "円の面積は" <<size << std::endl;
    }
};
// 派生クラス 2
class Rectangle : public IShape {
public:
    Rectangle() {};
    ~Rectangle() {};

    void Size() override {
        int width = 10;
        int height = 5;
        size = width * height;
    }
    void Draw() override {
        std::cout << "長方形の面積は" << size << std::endl;
    }
};


int main() {
    IShape* shape[3];
   
    // 生成
    for (int i = 0; i < 2; i++) {
        if (i < 1) {
            shape[i] = new Circle;
        } else {
            shape[i] = new Rectangle;
        }
    }

    //面積の出力
    for (int i = 0; i < 2; i++) {
        shape[i]->Size();
        shape[i]->Draw();
    }

    // メモリ解放
    for (int i = 0; i < 2; i++) {
        delete shape[i];
    }

	return 0;
}