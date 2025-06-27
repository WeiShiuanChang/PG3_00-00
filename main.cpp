#include <iostream>
#include<list>

int main() {
	// 1970年の山手線の駅名リスト
	std::list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", 
		"Okachimachi", "Ueno", "Uguisudani",
		"Nippori", "Tabata", "Komagome",
		"Sugamo", "Otsuka", "Ikebukuro",
		"Mejiro", "Takadanobaba", "Sin-Okubo",
		"Shinjuku", "Yoyogi", "Harajuku",
		"Shibuya", "Ebisu", "Meguro",
		"Gotanda", "Osaki", "Sinagawa", 
		"Tamachi", "Hamamatsucho", "Shimbashi","Yurakucho"
	};
	// 1970年の山手線の駅を出力
	std::cout << "-------------------------------\n1970 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	//西日暮里駅は1971年に追加されたので、「田端」の前に挿入する
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = eki_list.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 2019年時点の山手線の駅を出力
	std::cout << "-------------------------------\n2019 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	// 高輪ゲートウェイ駅は2020年に追加されたので、「田町」の前に挿入する
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = eki_list.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// 2022年時点の山手線の駅を出力
	std::cout << "-------------------------------\n2022 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	return 0;
}