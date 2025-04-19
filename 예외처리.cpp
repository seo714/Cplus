#include <iostream>
using namespace std;

int main()
{
	int a, b;

	//수정 전 코드 : 나누기를 진행하는 프로그램
	// 발생할 수 있는 예외 상황 : 0으로 나누는 경우
	//							a가 0이면 모든 나누기가 0이라 불필요
	//							b가 0이면, 분모가 0이기 때문에 나누기 불가능
	 
	
//1. try문 작성 
	try
	{
		cout << "나누기 진행. 정수 a, b 순서대로 입력 : ";
		cin >> a >> b;

//2. throw 문 작성 : 강제로 예외를 발생시키는 코드
		if (a == 0) throw a; // thorw 던질 대상;을 적으면 catch가 인식
		
		if (b == 0) throw "[Excception] Division Zero";
		
		cout << "계산 결과 : " << a / b << endl;
	}
//3. catch문 작성
//catch문은 여러개 작성 ㄱㄴ
	catch (int a)// ((a를 잡았을 경우))
	{
		cout << "a가 0이니 나누지 않겠음ㅋ" << endl;
	}
	catch (const char* message) // string으로 하면 안잡힐 수도 있음, 보통 문자 잡을 때 const char* 씀
		//catch를 잡을 때,  throw를 활용하고 있다면 적은 값에 마우스를 
		// 가져다 대면 어떤 데이터인지 확인할 수 있고, 거기에 맞게 넣어주면 됨
		
	{
		cout << message << endl;
	}

	return 0;
}