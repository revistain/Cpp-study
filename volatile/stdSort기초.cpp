//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		std::cout << *begin << " ";
//		begin++;
//	}
//	std::cout << std::endl;
//}
//
//template <typename T>
//struct int_compare {
//
//	// ()를 override하면 함수 객체 선언
//	bool operator()(const T& a, const T& b) const {
//		return a > b;
//	}
//};
//
//int main() {
//	std::vector<int> vec;
//
//	vec.push_back(3);
//	vec.push_back(5);
//	vec.push_back(1);
//	vec.push_back(7);
//	vec.push_back(9);
//	vec.push_back(6);
//	vec.push_back(2);
//	print<std::vector<int>::iterator>(vec.begin(), vec.end());
//	// print(vec.begin(). vec.end()); 하면 컴파일러가 자동으로 추정한다
//
//	std::sort(vec.begin(), vec.end());
//	print(vec.begin(), vec.end());
//
//	// predicate(조건자)를 매개인자로 넘겨줌
//	// Generic 알고리즘에서 이렇게 사용
//	std::sort(vec.begin(), vec.end(), int_compare<int>());
//	print(vec.begin(), vec.end());
//
//	// partial sort
//	std::vector<int> vec2;
//	vec2.push_back(5);
//	vec2.push_back(1);
//	vec2.push_back(9);
//	vec2.push_back(7);
//	vec2.push_back(3);
//	vec2.push_back(4);
//	vec2.push_back(2);
//	print(vec2.begin(), vec2.end());
//	std::partial_sort(vec2.begin(), vec2.begin() + 3, vec2.end());
//	print(vec2.begin(), vec2.end());
//}
//
//// 1. predicate: bool를 리턴하는 함수
//// 2. function object(함수 객체): 괄호 연산자를 멤버함수로 가지는 클래스의 객체
////    왜쓰는가? 1. 인라인 함수 호출로 속도 업
////			   2. 함수 객체로 하여금 상태정보 접근 및 갱신