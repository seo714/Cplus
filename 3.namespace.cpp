//#include <iostream>
//using namespace std;
//// 해당 코드에서는 std 네임스페이스를 사용하겠다
//// 이 코드를 사용할 경우 std::cout를 cout만 써도 작동
//
////using을 통해 코드 내에서 해당 네임스페이스를 포함시키는게 ㄱㄴ
//
////namespace 만들기
//// namespace 네임스페이스명
////{
////   변수;
////   함수;
////   구조체;
////   클래스;
//// }
//
//// 완성된 값을 기준으로 네임스페이스명 :: 변수;, 네임스페이스명 :: 함수(); 처럼 사용할 수 ㅇㅇ
//// ex) std:: string, std::cout
//
//
//namespace Server
//{
//	void run()
//	{
//		cout << "서버 접속 연결 진행" << endl;
//	}
//}
//
//namespace Client
//{
//	void run()
//	{
//		cout << "클라이언트 연결 진행" << endl;
//	}
//}
//
//
//int main()
//{
//	cout << "xofodi" << endl;
//	std::cout << "tkfkdgo" << endl;
//
//
//	//네임스페이스명::함수명();
//	Server::run();
//	Client::run();
//		
//	// main에서 네임스페이스 접근 허용
//	using namespace Server;
//
//	run();// 이때의 run()은 Server의 run
//
//	return 0;
//}