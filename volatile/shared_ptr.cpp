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
		// �ּҸ� �޾� �����ϹǷ� ��ü�� control block�� ���� => problem
		// return std::shared_ptr<A>(this);

		// std::enabled_shared_from_this�κ��� ���
		return shared_from_this();
	}
};

int main() {
	std::vector<std::shared_ptr<A>> vec;
	vec.push_back(std::shared_ptr<A>(new A()));
	vec.push_back(std::shared_ptr<A>(vec[0]));
	vec.push_back(std::shared_ptr<A>(vec[1]));

	// ������ ù��° ���Ҹ� �Ҹ� ��Ų��.
	std::cout << "ù ��° �Ҹ�!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	// �� ���� ���Ҹ� �Ҹ� ��Ų��.
	std::cout << "���� ���� �Ҹ�!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	// ������ ���� �Ҹ�
	std::cout << "������ ���� �Ҹ�!" << ", use_count(): " << vec[0].use_count() << std::endl;
	vec.erase(vec.begin());

	std::cout << "���α׷� ����!" << std::endl;

	std::cout << "=========================================" << std::endl;
	// �Ʒ� ������ ���� �Ҵ��� 2���ȴ�
	std::shared_ptr<A> ptr1(new A());

	// �̰� �ѹ��� ���� �Ҵ��� �� ó���ؼ� �����͸� �Ѱ��ش�
	std::shared_ptr<A> ptr2 = std::make_shared<A>();

	std::cout << "=========================================" << std::endl;
	// sharted_ptr�� �����ڰ� �ּҸ� ���ڷ� ������ control_block�� �����
	A* a = new A();

	// �Ʒ��� control_block�� ���� ����� => problem
	std::shared_ptr<A> pa1(a);
	std::shared_ptr<A> pa2(a);

	//std::cout << pa1.use_count() << std::endl;
	//std::cout << pa2.use_count() << std::endl;	// �ι� �Ҹ��ؼ� ERROR

	std::cout << "=========================================" << std::endl;
	std::shared_ptr<A> pptr1 = std::make_shared<A>();
	std::shared_ptr<A> pptr2 = pptr1->get_shared_ptr();

	std::cout << pptr1.use_count() << std::endl;
	std::cout << pptr2.use_count() << std::endl;

}