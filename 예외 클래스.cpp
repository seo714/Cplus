#include <iostream> //오류남
using namespace std;
// 예외 클래스를 따로 만들어두면, 프로그램 내에서 특정 오류에 대한 사용처로 활용하기 용이
//연결에 관한 예외상황

class ConnectException
{
public:
	void NormalMessage()
	{
		cout << "연결 실패" << endl;
	}
	// 메소드(함수) 설계 시 이름이 같지만, 매개변수가 다르면
	// 코드로 취급 (메소드 오버로딩)
	string LoginFailMessage(string id) // 이거이거 void로 하면 값이 없어서 string으로 하고 값 전달해줌 그러면 thorw 사용 ㄱㄴ
	{
		cout << "아이디 존재 ㄴㄴ" << endl;
		return id;
	}
	int LoginFailMessage(int pw)
	{
		cout << "비번 오류 " << endl;
		return pw;
	}
};

class Server
{
private:
	void Login()
	{
		if (onoff == false)
			throw ConnectException();
		//if-else로 쓰지 않고 if문만 설계
		// throw에 의해 끊어지기 때문

		string input_id;
		int input_pw;

		cout << "아이디 입력 : " << endl;
		cin >> input_id;
		cout << "비밀번호 입력 : "<< endl;
		cin >> input_pw;

		if (id != input_id)
			throw ConnectException().LoginFailMessage(id); //이거이거
	
		if (pw != input_pw)
			throw ConnectException().LoginFailMessage(id); // 저거저거 void로 하면 throw 없이
		cout << "로그인 성공" << endl;
	}

	void OnOFF()
	{
		if (onoff == true)
		{
			onoff = false;
			cout << "로그인 상태 오프" << endl;
		}
		else {
			onoff = true;
			cout << "로그인 상태 온" << endl;
		}
	}

public:
	//클래스로 만들어서 has A로 처리하는걸 ㅊㅊ
	//테스트를 위해 고정값으로 설계, 이후 프로그램처럼 짜려면 계정에 대한 클래스 따로 설계
	string id = "zerobaseone";
	int pw = 0710;

	string id; // 서버에서 사용할 아이디
	int pw; // 서버에서 사용할 비번

	string server_name;
	bool onoff;
	Server(string s, bool o) :server_name(s), onoff(o) {}
	void Menu()
	{
		while (true)
		{
			int select;
			cout << "1. 로그인 진행 2. 서버 온/오프 설정 3. 종료>> ";
			cin >> select;

			switch (select)
			{
			case 1:
				Login(); break;
			case 2:
				OnOFF(); break;
			case 3:
				exit(0);
			}
		}
	}
};


//1.  로그인 기능 연출
// 2. 로그인 실패 상황에 따라 적절한 예외 catch 하기

// 필요하다면 클래스 추가
int main()
{
	Server server("zb1", false);
	try
	{
		server.Menu();
	}
	catch (ConnectException& e) //클래스에 대한 catch시에는 클래스명&으로 접근
	{
		e.NormalMessage();
	}
	catch (int i)
	{
		server.Menu();
	}
	catch (string s)
	{
		server.Menu();
	}
	return 0;
}