//#include <iostream>
//#include <vector>
//
////template <typename T>
////void wrapper(const T& u) {
////	g(u);
////}
////template <typename T>
////void wrapper(T& u) {
////	g(u);
////}
//
//template <typename T>
//void wrapper(T&& u) {
//	// std::forward�� u�� rvalue�϶��� move����
//	g(std::forward<T>(u));
//}
//
//class A {};
//
//void g(A& a) { std::cout << "lvalue refȣ��!" << std::endl; }
//void g(const A& a) { std::cout << "lvalue ref constȣ��" << std::endl; }
//void g(A&& a) { std::cout << "rvalue refȣ��!" << std::endl; }
//
//int main() {
//	A a;
//	const A ca;
//
//	std::cout << "���� -------------" << std::endl;
//	g(a);
//	g(ca);
//	g(A());
//
//	std::cout << "wrapper -------------" << std::endl;
//	wrapper(a);
//	wrapper(ca);
//	wrapper(A()); // const T&�� ��
//
//	// universial reference
//	// 1.
//	auto&& b = a;	// a�� lvalue�̹Ƿ� b�� lvalue ref
//
//	// 2.
//	// ���ø������� ���(Ÿ�� �߷��� �ʿ��� ��쿡��, const ���̸� �ȵ�)
//	// &  &  => &
//	// && &  => &
//	// &  && => &
//	// && && => &&
//}