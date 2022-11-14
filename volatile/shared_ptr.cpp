#include <iostream>
#include <memory>
#include <vector>

class A : public std::enable_shared_from_this<A> {
	int* data;

public:
	A() {
		data = new int[100];
		std::cout << "class A constructor called!" << std::endl;
	}

	~A() {
		delete[] data;
		std::cout << "class A destructor called!" << std::endl;
	}

	std::shared_ptr<A> get_shared_ptr() {
		// 주소를 받아 생성하므로 자체적 control block을 만듬 => problem
		// return std::shared_ptr<A>(this);

		// std::enabled_shared_from_this로부터 상속
		return shared_from_this();
	}
};

int main() {
	std::vector<std::shared_ptr<A>> vec;
	vec.push_back(std::shared_ptr<A>(new A()));
	vec.push_back(std::shared_ptr<A>(vec[0]));
	vec.push_back(std::shared_ptr<A>(vec[1]));

	// 벡터의 첫번째 원소를 소멸 시킨다.
	std::cout << "첫 번째 소멸!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	// 그 다음 원소를 소멸 시킨다.
	std::cout << "다음 원소 소멸!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	// 마지막 원소 소멸
	std::cout << "마지막 원소 소멸!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	std::cout << "프로그램 종료!" << std::endl;

	std::cout << "=========================================" << std::endl;
	// 아래 문장은 동적 할당이 2번된다
	std::shared_ptr<A> ptr1(new A());

	// 이건 한번에 동적 할당을 다 처리해서 포인터를 넘겨준다
	std::shared_ptr<A> ptr2 = std::make_shared<A>();

	std::cout << "=========================================" << std::endl;
	// sharted_ptr의 생성자가 주소를 인자로 받으면 control_block을 만든다
	A* a = new A();

	// 아래는 control_block을 각각 만든다 => problem
	std::shared_ptr<A> pa1(a);
	std::shared_ptr<A> pa2(a);

	//std::cout << pa1.use_count() << std::endl;
	//std::cout << pa2.use_count() << std::endl;	// 두번 소멸해서 ERROR

	std::cout << "=========================================" << std::endl;
	std::shared_ptr<A> pptr1 = std::make_shared<A>();
	std::shared_ptr<A> pptr2 = pptr1->get_shared_ptr();

	std::cout << pptr1.use_count() << std::endl;
	std::cout << pptr2.use_count() << std::endl;

}