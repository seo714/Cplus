#include <iostream>
#include <random> // 이거 쓰셈
//C++에서 제공하는 랜덤

// C언어 방식으로 사용하는 랜덤
// C언어의 rand()함수를 이용해 랜덤 값을 처리
#include <cstdlib> //((== <<ctdlib.h>))
#include <ctime>
//차이점 : C++에서 제공하는 랜덤의 구성요소(알고리즘)의 품질이 C언어에선 쓰던 랜덤보다 좋음


using namespace std;
int main()
{
	//1. 랜덤 장치(디바이스)를 생성
	random_device rd;
	
	//2. 장치에 대한 초기화
	mt19937 gen(rd());

	//3. 1~5 사이의 랜덤을 뽑
	// uniform_int<int>는 범위 값을 뽑음
	// dis(시작, 끝) 범위 작성 영역
	uniform_int<int> dis(1, 5);
	
	int result = dis(gen);
	cout << "결과 : " << result << endl;

	//switch문(조건보다는 값 그 자체를 고르는 경우에 많이 사용)
	//switch(변수)
	// {
	// case 값 :
	//       변수가 해당 값을 가지고 있을 때 실행할 명령문;
	//}

	switch (result)
	{
		case 1:
			cout << "100포인트" << endl;
			break;
		case 2:
			cout << "200포인트" << endl;
			break;
		case 3:
			cout << "300포인트" << endl;
			break;
		case 4:
			cout << "400포인트" << endl;
			break;
		case 5:
			cout << "500포인트" << endl;
			break;
	}

	return 0;
}