#include <stdio.h>
#include <thread>

void one() {
	printf("thread 1\n");
}
void two() {
	printf("thread 2\n");
}
void three() {
	printf("thread 3\n");
}

int main() {

	std::thread th1(one);
	th1.join();

	std::thread th2(two);
	th2.join();

	std::thread th3(three);
	th3.join();

	return 0;
}