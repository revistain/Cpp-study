#include <iostream>
#include <vector>

template <typename T>
void wrapper(T& u) {
	g(u);
}

class A {};

void g(A& a) { std::cout << "lvalue ref호출!" << std::endl; }
void g(const A& a) { std::cout << "lvalue ref const호출" << std::endl; }
void g(A&& a) { std::cout << "rvalue ref호출!" << std::endl; }

int main() {
	A a;
	const A ca;

	std::cout << "원본 -------------" << std::endl;
	g(a);
	g(ca);
	g(A());

	std::cout << "wrapper -------------" << std::endl;
	wrapper(a);
	wrapper(ca);
	wrapper(A());
}