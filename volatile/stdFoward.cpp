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
//	// std::forward는 u가 rvalue일때만 move해줌
//	g(std::forward<T>(u));
//}
//
//class A {};
//
//void g(A& a) { std::cout << "lvalue ref호출!" << std::endl; }
//void g(const A& a) { std::cout << "lvalue ref const호출" << std::endl; }
//void g(A&& a) { std::cout << "rvalue ref호출!" << std::endl; }
//
//int main() {
//	A a;
//	const A ca;
//
//	std::cout << "원본 -------------" << std::endl;
//	g(a);
//	g(ca);
//	g(A());
//
//	std::cout << "wrapper -------------" << std::endl;
//	wrapper(a);
//	wrapper(ca);
//	wrapper(A()); // const T&로 들어감
//
//	// universial reference
//	// 1.
//	auto&& b = a;	// a는 lvalue이므로 b는 lvalue ref
//
//	// 2.
//	// 템플릿에서의 사용(타입 추론이 필요한 경우에만, const 붙이면 안됨)
//	// &  &  => &
//	// && &  => &
//	// &  && => &
//	// && && => &&
//}