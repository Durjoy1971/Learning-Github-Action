#include <iostream>

// Simple template function that prints any printable type
template<typename T>
void print(const T &msg) {
	std::cout << msg;
}

int main() {
	// Use the template to print "Hello World"
	print("Hello World\n");
	return 0;
}
