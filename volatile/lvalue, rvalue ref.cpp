//#include <iostream>
//
//class A {
//	int _data;
//
//public:
//	A(int data) : _data(data) {
//		std::cout << "�Ϲ� ������ ȣ�� ! " << std::endl;
//	}
//
//	A(const A& a) : _data(a._data) {
//		std::cout << "���� ������ ȣ�� ! " << std::endl;
//	}
//};
//
//std::string foo(const std::string& str) {
//	return str;
//}
//
//int main() {
//	A a(1);
//	A b(a);
//
//	// copy elision
//	// �����Ϸ��� �ȶ��ϰ� ���� ����
//	A c(A(2));
//
//
//	// lvalue(&�� ���Ҽ� �ִ�)�� �¿� ��� ����
//	// rvalue�� ���� �����ʸ�
//	int ac = 3; // ���⼭ ac�� lvalue, 3�� rvalue
//
//
//	// �и� foo�� lvalue reference�� �޴� �Լ��ε�
//	// rvalue�� "Hello world"�� ���µ��� �����۵�
//	// => ���������� const T&�� �������� ���۷����� �޴´�
//	//	  const ���۷����̱� ������ �ӽ� ��ü�� read�� �ϱ⿡ ����
//	std::string str = foo("Hello world");
//	std::cout << str << std::endl;
//
//
//	// rvalue reference
//	int x = 3;
//	int& y = x;
//	int&& z = 5;
//}