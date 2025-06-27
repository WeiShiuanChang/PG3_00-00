#include <iostream>
#include<list>

int main() {
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
	std::cout << "-------------------------------\n1970 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	//
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = eki_list.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	
	std::cout << "-------------------------------\n2019 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = eki_list.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	std::cout << "-------------------------------\n2022 Yamanote Line\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << "\n";
	}
	return 0;
}