#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

// 1. getCount
//실행 결과 : 1 2 3 4 5 6 7 8 9 10
void getCount()
{
	static int count = 1;
	cout << count << " ";
	count++;
}

// 2. 두 개의 정수를 매개변수로 받아 두 정수 사이에 있는 모든 정수의 구해 return 하는 함수 정의,. main에서 호출
// 5와 9 사이 : 21
int getTotal(int a, int b)
{
	int result = 0;
	for (int i = a + 1; i < b; i++)
	{
		result += i;
	}
	return result;
}

// 3. 사용자로부터 초(second)를 입력 받아 시/분/초의 형태로 출력하는 함수
// 3615초 -> 1시간 0분 15초
void getTime(int time) 
{ 
	
	int h = time / 3600;
	time %= 3600;
	int m = time / 60;
	time %= 60;
	int s = time;
	cout << h <<"시간 "<< m<<"분 " << s <<"초" << endl;
}

//4. 사용자로부터 키를 cm단위로 입력 받아m단위로 환산하여 출력
// 해당 함수는 키를 함수의 인자로 전달받아 m 단위의 값으로 return 
float getM(int cm) 
{
	float M = float(cm);
	return M / 100;

	//return (float)cm / 100
}

int main()
{
	// 문제 1
	for (int i = 0; i < 10; i++)
	{
		getCount();
	}
	cout << endl << endl;

	// 문제 2
	int first = 5;
	int second = 9;
	cout << first << " 와 " << second << " 사이의 정수의 총 합은 " << getTotal(first, second) << endl;
	cout << endl << endl;

	// 문제 3
	int sec;
	cout << "초 : ";
	cin >> second;
	getTime(second);
	cout << endl << endl;

	// 문제4
	int height;
	cout << "키(cm) : ";
	cin >> height;
	cout.precision(3); //정수 + 소수를 포함한 전체 출력 범위 설정(정수 1자리, 소수 2자리)
	cout << getM(height)<<"m" << endl;
	cout << endl << endl;


	// cout으로 자리수 표현하기
	// 1. cout.precision(숫자); 정수 +소수를 포함한 출력 범위 설정
	// ex) 17.367을 표현할거면 precision(5)
	
	// 2. cout<<fixed; 해당 명령어는 소수점을 고정해서 표현
	//	  cout.precison(숫자); 소수점에 대한 범위만 작성
	// ex) 17.367을 표현하면
	//     cout<<fixed;
	//     cout<<precision(3);
	//유의사항 : 소수점이 버려질 경우에는 반올림 처리

	// 3. fixed를 사용했을 경우 설정이 유지되기 때문에 사용이 끝나면 설정을 해제해야 함
	// cout.setf(ios::fixed);
	return 0;
}