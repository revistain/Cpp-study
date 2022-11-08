#include <iostream>
#include <functional>

struct S {
	void operator()(char c) { std::cout << "S�� �Լ� ȣ��: " << c << std::endl; }
};

class A {
	int c;

public:
	A(int c) : c(c) {}
	int some_func() {
		std::cout << "���� �Լ�: " << ++c << std::endl;
		return c;
	}

	int some_const_function() const {
		std::cout << "��� �Լ�: " << c << std::endl;
		return c;
	}

	static void st() {}
};

int main() {
	S s;

	auto f = [](int a, int b)->void { std::cout << "a + b = " << a + b << std::endl; };
	f(2, 3);


	// use of std::function
	std::function<void(char)> f1 = S();
	std::function<void()> f2 = []() {std::cout << "lambda�Լ� ȣ��" << std::endl; };

	f1('A');
	f2();
	
	std::cout << "------------------" << std::endl;
	// �ɹ� �Լ��� �� �ٸ���, ���̽�ó�� ��ü�� ������ �Ѱ�����ϴµ� �� ������ �ҽǵ�
	A a(5);
	std::function<int(A&)> ff1 = &A::some_func;
	std::function<int(const A&)> ff2 = &A::some_const_function;

	ff1(a);
	ff2(a);
}