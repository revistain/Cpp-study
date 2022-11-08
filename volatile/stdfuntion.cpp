#include <iostream>
#include <functional>

struct S {
	void operator()(char c) { std::cout << "S의 함수 호출: " << c << std::endl; }
};

class A {
	int c;

public:
	A(int c) : c(c) {}
	int some_func() {
		std::cout << "비상수 함수: " << ++c << std::endl;
		return c;
	}

	int some_const_function() const {
		std::cout << "상수 함수: " << c << std::endl;
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
	std::function<void()> f2 = []() {std::cout << "lambda함수 호출" << std::endl; };

	f1('A');
	f2();
	
	std::cout << "------------------" << std::endl;
	// 맴버 함수는 좀 다르다, 파이썬처럼 객체의 정보를 넘겨줘야하는데 그 정보가 소실됨
	A a(5);
	std::function<int(A&)> ff1 = &A::some_func;
	std::function<int(const A&)> ff2 = &A::some_const_function;

	ff1(a);
	ff2(a);
}