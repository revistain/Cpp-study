#include <iostream>
#include <vector>

// �޸𸮰� ���������� ������ ����� ���
// ����ó���� ���� ����
// ���������� => Resource Acquisition is Initialization(RAII)

class A {
	int* data;

public:
	// �� ������ ȣ��� ������ ����
	A(std::string str) = delete;

	A() {
		std::cout << "�ڿ��� ȹ����!" << std::endl;
		data = new int[100];
	}

	~A() {
		std::cout << "�ڿ��� ������!" << std::endl;
		delete[] data;
	}

	void some() { std::cout << "�ɹ��Լ� ȣ��!" << std::endl; }
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
	// �����Ͱ� �Ҹ�ɶ� �Ҹ��ڰ� ȣ���
	std::unique_ptr<A> pa(new A());
	pa->some();

	// std::unique_ptr<A> pb = pa;	// ���� ������ �Ұ���

	// ������ ����(�̵� ������)
	std::unique_ptr<A> pc = std::move(pa);
	wrong_something(pc); // ������ �ƴ����� �� ��� ���� ���� ���� ����
	correct_something(pc.get()); // get�� unique_ptr�� �����ּ� ����
}


int main() {
	do_something();

	// ������ ���
	auto ptr = std::make_unique<A>();

	// unique_ptr�� �̿��� vec���
	std::vector<std::unique_ptr<A>> vec;

	// vec.push_back(ptr); // ERROR
	vec.push_back(std::move(ptr));

	// ���� ȿ������ ����
	vec.emplace_back(new A());
}

