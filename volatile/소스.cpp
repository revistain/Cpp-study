#include <iostream>
#include <vector>

// 메모리가 구조적으로 누수가 생기는 경우
// 예외처리로 인한 누수
// 디자인패턴 => Resource Acquisition is Initialization(RAII)

class A {
	int* data;

public:
	// 이 생성자 호출시 컴파일 에러
	A(std::string str) = delete;

	A() {
		std::cout << "자원을 획득함!" << std::endl;
		data = new int[100];
	}

	~A() {
		std::cout << "자원을 해제함!" << std::endl;
		delete[] data;
	}

	void some() { std::cout << "맴버함수 호출!" << std::endl; }
};

void wrong_something(std::unique_ptr<A>& ptr) {
	std::cout << "wrong : ";
	ptr->some();
}

void correct_something(A* ptr) {
	std::cout << "correct : ";
	ptr->some();
}

void do_something() {
	// 포인터가 소멸될때 소멸자가 호출됨
	std::unique_ptr<A> pa(new A());
	pa->some();

	// std::unique_ptr<A> pb = pa;	// 복사 생성자 불가능

	// 소유권 이전(이동 생성자)
	std::unique_ptr<A> pc = std::move(pa);
	wrong_something(pc); // 에러는 아니지만 한 대상에 대한 여러 별명 존재
	correct_something(pc.get()); // get은 unique_ptr의 실제주소 리턴
}


int main() {
	do_something();

	// 간편한 방법
	auto ptr = std::make_unique<A>();

	// unique_ptr를 이용한 vec사용
	std::vector<std::unique_ptr<A>> vec;

	// vec.push_back(ptr); // ERROR
	vec.push_back(std::move(ptr));

	// 좀더 효율적인 생성
	vec.emplace_back(new A());
}

