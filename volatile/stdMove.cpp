//#include <iostream>
//#include <vector>
//
//template<typename iter>
//void printvec(iter begin, iter end) {
//	while (begin < end) {
//		std::cout << *begin << " ";
//		begin++;
//	}
//	std::cout << std::endl;
//}
//
//template <typename t>
//void my_swap(t& a, t& b) {
//	// 이것만으로는 rvalue 이동이 되지 않는다
//	// = 연산자를 재정의해줘야함
//	t tmp(std::move(a));
//	a = std::move(b);
//	b = std::move(tmp);
//}
//
//int main() {
//	std::vector<test> vec;
//	vec.push_back(test("abc"));
//	vec.push_back(test("bcd"));
//	vec.push_back(test("cde"));
//
//	// move semantics은 operator=를 완성해야만 의미를 가진다
//	// int를 복사하는건(기초 단위들)은 의미가 없음
//	my_swap(vec.at(0), vec.at(1));
//	printvec(vec.begin(), vec.end());
//
//}
