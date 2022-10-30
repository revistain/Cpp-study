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
//	// ()�� override�ϸ� �Լ� ��ü ����
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
//	// print(vec.begin(). vec.end()); �ϸ� �����Ϸ��� �ڵ����� �����Ѵ�
//
//	std::sort(vec.begin(), vec.end());
//	print(vec.begin(), vec.end());
//
//	// predicate(������)�� �Ű����ڷ� �Ѱ���
//	// Generic �˰��򿡼� �̷��� ���
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
//// 1. predicate: bool�� �����ϴ� �Լ�
//// 2. function object(�Լ� ��ü): ��ȣ �����ڸ� ����Լ��� ������ Ŭ������ ��ü
////    �־��°�? 1. �ζ��� �Լ� ȣ��� �ӵ� ��
////			   2. �Լ� ��ü�� �Ͽ��� �������� ���� �� ����