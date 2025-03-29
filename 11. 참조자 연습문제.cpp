//#include <iostream>
//using namespace std;
//// 풀이 요약
//// 1. Swap이 다른 변수 등에 대입되지 않고 호출만 하면 값이 변경됨 -> void
//// 2. 값 변경을 위해 임시 값 사용 (int temp)
//// 3. 실제의 값이 변경되어야 하기에 매개변수로 참조자 활용
//
////전달한 a 와 b의 값을 서로 바꾸는 함수
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 7;
//
//	cout << a << b << endl; //107
//	Swap(a, b);
//	cout << a << b << endl; //710
//	return 0;
//}
