//#include <algorithm>
//#include <functional>
//#include <iostream>
//#include <string>
//#include <vector>
//
//template <typename ITER>
//void print(ITER begin, ITER end) {
//	std::cout << "( ";
//	while (begin != end) {
//		std::cout << *begin << " ";
//		begin++;
//	}
//	std::cout << ")" << std::endl;
//}
//
//// 함수 객체
//struct is_odd {
//	bool operator()(const int& a) {
//		return a % 2 != 0;
//	}
//};
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(7);
//	vec.push_back(2);
//	vec.push_back(4);
//	vec.push_back(6);
//	vec.push_back(1);
//
//	std::cout << "처음 vec의 상태" << std::endl;
//	print(vec.begin(), vec.end());
//
//	std::cout << "원소 2 제거" << std::endl;
//	// remove 함수: vector의 크기를 바꾸지 않고, 원소를 << 하고 마지막 iterator위치 return
//	// erase(begin, end): begin부터 end까지 삭제
//	vec.erase(std::remove(vec.begin(), vec.end(), 2), vec.end());
//	print(vec.begin(), vec.end());
//
//	// 홀수 제거
//	vec.erase(std::remove_if(vec.begin(), vec.end(), is_odd()), vec.end());
//	print(vec.begin(), vec.end());
//}