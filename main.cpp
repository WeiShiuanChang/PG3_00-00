#include <stdio.h>
#include <string>
#include <chrono>

int main() {
	std::string a(1000000, 'a');

    // コピー処理の計測
    auto start = std::chrono::high_resolution_clock::now();
    std::string copy = a;
    auto end = std::chrono::high_resolution_clock::now();
    auto copyTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // ムーブ処理の計測
    start = std::chrono::high_resolution_clock::now();
    std::string moved = std::move(a);
    end = std::chrono::high_resolution_clock::now();
    auto moveTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    //print out
    printf("1,000,000文字を移動とコピーで比較しました。\n");
    printf("コピー ： %lld  μs\n", copyTime);
    printf("移動 ： %lld  μs\n", moveTime);

	return 0;
}