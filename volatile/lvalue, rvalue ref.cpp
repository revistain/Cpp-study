//#include <iostream>
//
//class a {
//	int _data;
//
//public:
//	a(int data) : _data(data) {
//		std::cout << "일반 생성자 호출 ! " << std::endl;
//	}
//
//	a(const a& a) : _data(a._data) {
//		std::cout << "복사 생성자 호출 ! " << std::endl;
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
//	// 컴파일러가 똑똑하게 복사 생략
//	a c(a(2));
//
//
//	// lvalue(&를 취할수 있는)은 좌우 모두 가능
//	// rvalue은 오직 오른쪽만
//	int ac = 3; // 여기서 ac가 lvalue, 3이 rvalue
//
//
//	// 분명 foo는 lvalue reference를 받는 함수인데
//	// rvalue인 "hello world"가 들어갔는데도 정상작동
//	// => 예외적으로 const t&은 우측값도 레퍼런스로 받는다
//	//	  const 레퍼런스이기 떄문에 임시 객체를 read만 하기에 ㄱㅊ
//	std::string str = foo("hello world");
//	std::cout << str << std::endl;
//
//
//	// rvalue reference
//	int x = 3;
//	int& y = x;
//	int&& z = 5;
//}