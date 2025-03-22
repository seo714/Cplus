//#include <iostream>
//#include <string>
//using namespace std;  
//
// //1. 문자열 출력 코드
//
//int main()
//{
//	string str;// string은 C++의 문자열을 사용할 때 쓸 데이터(클래스)
//	cin >> str;// cin은 입력을 위한 객체(도구), >> 로 입력한 값을 저장할 대상 표현
//	cout << str << endl;// cout은 출력을 위한 객체
//	                    //<< 로 cout이 출력할 대상 표현
//	                    // 작성 순서대로 처리
//	                    // endl은 버퍼(임시 저장소)를 비우고 enter작업을 진행하라는 명령어 
//						   
//	// 입력을 실행할 경우 개행문자(띄어쓰기, enter 등) 전까지의 입력 값을 전달
//	// >> 띄어쓰기했을 경우 잘릴 수 ㅇㅇ
//
//	cin.ignore(); //C 언어의 getchar()처럼 문장에 대한 연속 입력 시 발생하는 문제 해결하는 코드
//		          // C++의 ingore()을 사용하면, cin의 버퍼 비울 수 ㅇㅇ ((cin의 공백 무시))
//
//	string str2;
//	getline(cin,str2); // getline은 <string>에서 제공하는 기능
//	                   // 공백이 포함된 문자열을 입력 받을 때 사용
//	                   // 사용 코드 : getline(cin,문자열);
//	cout << str2 << endl;
//
//	//2. 문자 입력 후 데이터 변경
//	// 문자를 숫자로 변경하는 기능
//	// 사용 이유 : 구현을 진행할 때, 문자로 작업하고, 숫자로 바꾸는게 편한 상황 등이 존재함
//
//	string str3;
//	cout << str3 << "숫자 입력 : ";
//	cin >> str3;
//
//	int number = stoi(str3); // stoi는 string to integer (문장 -> 정수)
//	//관련 문법
//	// stoi = string to int
//	// stof = string to float
//	// stol = string to long
//	// stod = string to double
//
//	string str4 = to_string(number);
//	//to_string(값)은 해당 값을 문장의 형태로 바꿔주는 문법
//	cout << number << endl;
//
//	// 연습 문제) 숫자를 입력했을 경우, 그 숫자의 자리를 각각 출력해주는 프로그램 구현
//	// 조건) 숫자 자리수의 최대는 4자리까지로 작업
//	// ex) 1234
//	// 1 : 4번째 자리
//	// 2 : 3번째 자리
//	// 3 : 2번째 자리
//	// 4 : 1번째 자리
//	
//
//	string number2;
//	cin >> number2;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << number2[i] << ":" << i + 1 << "번째 자리" << endl;
//
//	}
//
//	return 0;
//}