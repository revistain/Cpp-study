//#include <iostream>
//
//class a {
//	int _data;
//
//public:
//	a(int data) : _data(data) {
//		std::cout << "�Ϲ� ������ ȣ�� ! " << std::endl;
//	}
//
//	a(const a& a) : _data(a._data) {
//		std::cout << "���� ������ ȣ�� ! " << std::endl;
//	}
//};
//
//std::string foo(const std::string& str) {
//	return str;
//}
//
//int main() {
//	a a(1);
//	a b(a);
//
//	// copy elision
//	// �����Ϸ��� �ȶ��ϰ� ���� ����
//	a c(a(2));
//
//
//	// lvalue(&�� ���Ҽ� �ִ�)�� �¿� ��� ����
//	// rvalue�� ���� �����ʸ�
//	int ac = 3; // ���⼭ ac�� lvalue, 3�� rvalue
//
//
//	// �и� foo�� lvalue reference�� �޴� �Լ��ε�
//	// rvalue�� "hello world"�� ���µ��� �����۵�
//	// => ���������� const t&�� �������� ���۷����� �޴´�
//	//	  const ���۷����̱� ������ �ӽ� ��ü�� read�� �ϱ⿡ ����
//	std::string str = foo("hello world");
//	std::cout << str << std::endl;
//
//
//	// rvalue reference
//	int x = 3;
//	int& y = x;
//	int&& z = 5;
//}