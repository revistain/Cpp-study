#include <iostream>
#include <vector>

class Test {
private:
	int a;
public:
	Test() {}
	Test(int a) : a(a) { std::cout << "일반 생성자 호출!" << std::endl; };
	Test(const Test& A) : a(A.a) { std::cout << "복사 생성자 호출!" << std::endl; }
	Test(Test&& A) : a(A.a) { std::cout << "이동 생성자 호출!" << std::endl; }
};

template<typename ITER>
void printVec(ITER begin, ITER end) {
	while (begin < end) {
		std::cout << *begin << " ";
		begin++;
	}
	std::cout << std::endl;
}

template <typename T>
void my_swap(T& a, T& b) {
	T tmp(std::move(a));
	a = std::move(b);
	b = std::move(tmp);
}

int main() {
	std::vector<Test> vec;
	vec.resize(3);
	vec.push_back(Test(3));
	vec.push_back(Test(23));
	vec.push_back(Test(9));

	printVec(vec.begin(), vec.end());
	//my_swap<Test>(vec.at(0), vec.at(1));

}