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
//	// �̰͸����δ� rvalue �̵��� ���� �ʴ´�
//	// = �����ڸ� �������������
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
//	// move semantics�� operator=�� �ϼ��ؾ߸� �ǹ̸� ������
//	// int�� �����ϴ°�(���� ������)�� �ǹ̰� ����
//	my_swap(vec.at(0), vec.at(1));
//	printvec(vec.begin(), vec.end());
//
//}
