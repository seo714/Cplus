#include <iostream>
using namespace std;

#pragma region 배열
// 배열(array)
// "같은" 형태의 "여러 개의 데이터"를 "연속적으로" 저장하고 처리하는 데이터 타입
// 사용 목적 : 연관되어 있는 데이터를 모아서 관리하기 위해 사용

// 배열 만드는 방법
// 자료형 배열명[데이터의 개수	];

// 배열을 만드는 방법(선언 및 초기화)
// 자료형 배열명[] = {값1, 값2, 값3 ...};

// 배열에서 알아둘 내용
//1. 배열의 길이(length) = 데이터의 개수
//					    = sizeof(배열명)/sizeof(자료형);

//2. 배열의 요소(element) = 베열 안에 들어있는 값을 의미
//						 ex) int array1[] = {1, 2, 3, 4, 5}라고 한다면 배열의 요소는 5개이며, 각각 1, 2, 3, 4, 5

//3. 배열의 인덱스(index) = 배열 안에 있는 값에 대한 위치 표현
//						   인덱스 번호는 배열 생성 후, 정해짐, 인덱스 범위는 0부터 배열의 길이 -1까지
//						   ex)위의 배열 array1[]의 인덱스는 0 ~ 4까지 제공

//4. 인덱스를 이용해 요소에 접근하는 방법
// 배열명[인덱스번호]= 해당 위치에 있는 요소
//					 ex) array1[2]는 array1의 인덱스 두 번째 데이터 -> 3

//5. N차원 배열 만들기
//	 int array1[5]; 과 같은 배열은 1차원 배열
//	 배열을 요소로 가지는 배열 => 2차원 배열
//	 int array2[3][5]; 3행 5열  3*5 2차원 배열
//   2차원 배열을 요소로 가지는 배열 => 3차원
//   int array3[3][3][5]; 3*3*5 배열

//6. 2차원 배열에서 요소 접근하는 방법
// int arr[3][4]=
// {
// {1,2,3,4}
// ,
// {5,6,7,8}
// ,
// {9,10,11,12}
// };
// 이 값 중 6에 접근 : [1][1]
// => 2차원 배열을 보면 4칸짜리 배열이 3개 배치, 그 중에서 6은 2번째 위치의 배열에 존재하며 내부 배열의 2번째 데이터 ㄸㄹㅅ arr[1][1]
// 11 : [2][2]

//7. 2차원 배열에서 행과 열의 크기 분석
// 행 : 세로, 열 : 가로(내부 배열)

// 행의 크기 = sizeof(배열명)/sizeof(배열명[0]);
// 전체의 배열 크기에서 한 열에 있는 크기를 빼면 행의 크기가 나옴

// 열의 크기 = sizeof(배열명[0])/ sizeof(int)
//한 열로부터 데이터 크기만큼 나누면 열의 크기가 나옴

#pragma endregion
int main()
{
	//1. 배열 생성
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	string arr2[] = { "tae","sung","gun" };
	char arr3[] = { 't','s','g' };
	bool arr4[] = { true, false, true, false };
	float arr5[] = { 1.1f, 1.2f, 1.3f };

	//2. 배열 요소 출력
	cout << "arr1의 4번째 데이터 : " << arr1[3] << endl;
	cout << "arr2의 3번째 데이터 : " << arr2[2] << endl;
	cout << "arr3의 3번째 데이터 : " << arr3[2] << endl;
	cout << "arr4의 2번째 데이터 : " << arr4[1] << endl;
	cout << "arr5의 1번째 데이터 : " << arr5[0] << endl;
	cout << endl << endl;
	//3. 배열 선언 후 데이터 추가
	//주로 int 형태의 배열에서 해당 작업을 많이 함
	// 일일히 데이털르 직접 넣어주는 것보다, 반복적인 패턴으로 빠르게 만드는 것이 더 편함
	int arr6[100];
	int value = 1;

	for (int i = 0; i < 100; i++)
	{
		arr6[i] = value++;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << arr6[i] << " ";
	}
	cout << endl << endl;


	//이차원배열을 활용해 표현한 파스칼 삼각형
	int paskal[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				paskal[i][j] = 1;
			}
			else
			{
				paskal[i][j] = paskal[i - 1][j - 1] + paskal[i - 1][j];
			}
			cout << paskal[i][j] << " ";
		}
		cout << endl;
	}

	string menu[3][2] = {
		{"기본김밥","3000원"},
		{"참치김밥","4000원"},
		{"모둠김밥","4000원"}
	};
	cout << endl << endl;
	int row = sizeof(menu) / sizeof(menu[0]);
	int column = sizeof(menu[0]) / sizeof(string);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << menu[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}