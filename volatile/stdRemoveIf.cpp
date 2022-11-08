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
//// �Լ� ��ü
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
//	std::cout << "ó�� vec�� ����" << std::endl;
//	print(vec.begin(), vec.end());
//
//	std::cout << "���� 2 ����" << std::endl;
//	// remove �Լ�: vector�� ũ�⸦ �ٲ��� �ʰ�, ���Ҹ� << �ϰ� ������ iterator��ġ return
//	// erase(begin, end): begin���� end���� ����
//	vec.erase(std::remove(vec.begin(), vec.end(), 2), vec.end());
//	print(vec.begin(), vec.end());
//
//	// Ȧ�� ����
//	vec.erase(std::remove_if(vec.begin(), vec.end(), is_odd()), vec.end());
//	print(vec.begin(), vec.end());
//}