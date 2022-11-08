//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <time.h>
//
//struct User {
//	std::string name;
//	int age;
//
//	User(std::string name, int age) : name(name), age(age) {}
//
//	// std::cout�̶�� ��ü�� operator<<�� �������̵��ؾ���
//	// ���� User�̶�� ��ü(�ν��Ͻ�ȭ �� ���Ŀ�)�� <<�� �������̵��ϴ°� �ƴ�
//	// ���� �����Լ��� �����ؾ���, friend ���
//	friend std::ostream& operator<<(std::ostream& input, const User& user) {
//		std::cout << "(" << user.name << ", " << user.age << ")" << std::endl;
//
//		return input;
//	}
//
//	// ��ü�� �ѱ�Ƿ� <�� �������̵��ϸ� �����(��Ģ��)
//	bool operator<(const User& user) const {
//		return user.age > age;
//	}
//};
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	Iter iterator = begin;
//	while (iterator != end) {
//		std::cout << *iterator;
//		iterator++;
//	}
//	std::cout << std::endl;
//}
//
//
//int main() {
//	srand(time(NULL));
//
//	std::vector<User> vec;
//	for (int i = 0; i < 100; i++) {
//		std::string name = "";
//		name.push_back('a' + i / 26);
//		name.push_back('a' + i % 26);
//		vec.push_back(User(name, static_cast<int>(rand() % 10 + 10)));
//	}
//
//	std::vector<User> vec2 = vec;
//
//	// sort�� vec�� Ÿ���� User�̴ϱ� User�� <�� �̿��Ͽ� sorting
//	// �׷��� User�� <�� �����ε��ؼ� ���
//	std::sort(vec.begin(), vec.end());
//	print(vec.begin(), vec.end());
//
//	// �ִ��� ������ ���� ���¸� ����
//	std::cout << "----- stable_sort ��� -----" << std::endl;
//	std::stable_sort(vec2.begin(), vec2.end());
//	print(vec2.begin(), vec2.end());
//}
