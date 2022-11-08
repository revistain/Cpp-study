//#include <algorithm>
//#include <functional>
//#include <iostream>
//#include <string>
//#include <vector>
//
//// some arbitary class
//class SomeClass {
//    std::vector<int> vec;
//
//    int num_erased;
//
//public:
//    SomeClass() {
//        vec.push_back(5);
//        vec.push_back(3);
//        vec.push_back(1);
//        vec.push_back(2);
//        vec.push_back(3);
//        vec.push_back(4);
//
//        num_erased = 1;
//
//        vec.erase(std::remove_if(vec.begin(), vec.end(),
//            [this](int i) {
//                if (num_erased >= 2)
//                    return false;
//                else if (i % 2 == 1) {
//                    num_erased++;
//                    return true;
//                }
//                return false;
//            }),
//            vec.end());
//    }
//};
//
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//    while (begin != end) {
//        std::cout << "[" << *begin << "] ";
//        begin++;
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    std::vector<int> vec;
//    vec.push_back(5);
//    vec.push_back(3);
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(4);
//
//    std::cout << "처음 vec 상태 ------" << std::endl;
//    print(vec.begin(), vec.end());
//
//    std::cout << "벡터에서 홀수인 원소 제거 ------" << std::endl;
//    // lambda 표현식
//    // [capture list] (파라미터) -> return type { main }
//    // [capture list] (파라미터) {}    // return 추측 가능시 성립
//    // [](int i) -> bool { return i % 2 == 1; }
//    int num_erased = 0;
//    vec.erase(std::remove_if(vec.begin(), vec.end(),
//        [&num_erased](int i) {
//            if (num_erased >= 2)
//                return false;
//            else if (i % 2 == 1) {
//                num_erased++;
//                return true;
//            }
//            return false;
//        }),
//        vec.end());
//    print(vec.begin(), vec.end());
//}