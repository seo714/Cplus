//#include <iostream>
//using namespace std;
//// 포인터는 변수의 주소를 저장하는 특별한 타입의 변수
//// 참조자는 연결한 변수의 또다른 이름
//// 함수의 매개변수(parameter)는 함수를 호출할 때, 전달받을 '값'에 대한 표현((선언안해도됨나만알아보면ㄱㅊ))
//// 함수의 인자(argument)는 함수를 호출할 때 전달해줄 '값'에 대한 표현
//
//// 1. 함수의 매개변수 전달 방법을 통한 포인터와 레퍼런스 이해
//void Function1(int* ptr)
//{
//	*ptr *= 3;
//	// 전달받은 포인터 변수 ptr가 가리키고 있는 실제 '값'을 3만큼 곱함
//}
//
//void Function2(int& ref)
//{
//	ref *= 4;
//	// 전달받은 참조자 ref의 값을 4만큼 곱함 ((원본))
//}
//
//
//int main()
//{
//	int a = 5;
//	// 1. 포인터를 매개변수로 하는  Function1을 호출
//	Function1(&a);
//	cout << a << endl;
//
//	//2. 참조자를 매개변수로 하는 함수 Function2를 호출
//	Function2(a);  // 문법 (( & 필요ㄴㄴ))
//	cout << a << endl;
//	return 0;
//}