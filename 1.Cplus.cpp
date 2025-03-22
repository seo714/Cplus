#include <iostream>

#pragma region 필기1
//1. C++는 C언어의 대부분을 포함하고 있는 확장 언어
//   기존의 C언어 스타일로 코드를 작성해도 ㄱㅊ
//   C++에서 추가적으로 제공하는 기능을 상황에 맞게 사용

//2. C언어에서 제공하는 함수 대신 C++에서 제공하는 기능을 사용해도 됨
//   단, C언어에서 제공 함수가 C++ 제공 함수보다 작업 처리속도가 빠른 경우가 존재
//   상황에 맞게 두 언어 활용

//3. C++는 객체지향 기능을 지원하는 언어
//   기존의 C언어는 호출 순서에 따라 설계를 하는 절차지향식 언어
//   C++를 통해 객체 지향식 설계 학습
#pragma endregion

#pragma region 필기2
//1. 해더 파일
// C언어에서 사용하던 방식
// #include <stdio.h>와 같이 .h가 명시

// C++에서 사용하는 방식
// #include <iostream>


//해더 파일 구분하기 
// 1. #include <해더파일명>은 라이브러리에서 제공하는 해더 파일 (Windows Kits에서 검색)
// 2. #include "해더파일명"은 사용자가 정의한 해더 파일 (본인 프로젝트 내부에서 검색)


// C++에서 자주 사용할 해더(라이브러리) 파일
// iostream은 C언어의 stdio.h를 대신해 사용(stdio.h의 기능에 추가적으로 기능 더 제공)
// algorithm은 특정 알고리즘 구현 시 필요한 기능을 모아놓은 파일
// container는 C++에서 특정 데이터를 표현할 때 사용하는 라이브러리에 대한 명칭 의미
// ex) vector, list, map...

// C++의 기본 자료형
// bool, char, int, double

// C++에서 사용할 자료형
// string, container(vector, list, map...)

// C++에서의 사용자 정의 자료형
// struct, class

// C++ 주소를 다루는 데이터
// 배열 int arr[5] = {1, 2, 3, 4, 5}; (같은 형태으 데이터를 묶음으로 순서대로 표현)
// 포인터 int* ptr = arr; (주소 값을 가리키는 변수)
// 참조자  int& ref_arr = arr[0]; (특정 값을 참조하는 기능)
#pragma endregion

//int main()
//{
//	return 0;
//}