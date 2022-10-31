#include <iostream>
#include <vector>

template <typename T>
void wrapper(T& u) {
	g(u);
}

class A {};

void g(A& a) { std::cout << "lvalue refȣ��!" << std::endl; }
void g(const A& a) { std::cout << "lvalue ref constȣ��" << std::endl; }
void g(A&& a) { std::cout << "rvalue refȣ��!" << std::endl; }

int main() {
	A a;
	const A ca;

	std::cout << "���� -------------" << std::endl;
	g(a);
	g(ca);
	g(A());

	std::cout << "wrapper -------------" << std::endl;
	wrapper(a);
	wrapper(ca);
	wrapper(A());
}