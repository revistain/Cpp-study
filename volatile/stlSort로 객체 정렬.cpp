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
//	// std::cout이라는 객체의 operator<<를 오버라이딩해야함
//	// 따라서 User이라는 객체(인스턴스화 된 이후에)의 <<를 오버라이딩하는게 아님
//	// 따라서 전역함수로 선언해야함, friend 사용
//	friend std::ostream& operator<<(std::ostream& input, const User& user) {
//		std::cout << "(" << user.name << ", " << user.age << ")" << std::endl;
//
//		return input;
//	}
//
//	// 객체를 넘기므로 <를 오버라이딩하면 적용됨(규칙임)
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
//	// sort가 vec의 타입이 User이니까 User의 <를 이용하여 sorting
//	// 그래서 User의 <를 오버로드해서 사용
//	std::sort(vec.begin(), vec.end());
//	print(vec.begin(), vec.end());
//
//	// 최대한 원소의 원래 상태를 보존
//	std::cout << "----- stable_sort 사용 -----" << std::endl;
//	std::stable_sort(vec2.begin(), vec2.end());
//	print(vec2.begin(), vec2.end());
//}
