#include <iostream> //������
using namespace std;
// ���� Ŭ������ ���� �����θ�, ���α׷� ������ Ư�� ������ ���� ���ó�� Ȱ���ϱ� ����
//���ῡ ���� ���ܻ�Ȳ

class ConnectException
{
public:
	void NormalMessage()
	{
		cout << "���� ����" << endl;
	}
	// �޼ҵ�(�Լ�) ���� �� �̸��� ������, �Ű������� �ٸ���
	// �ڵ�� ��� (�޼ҵ� �����ε�)
	string LoginFailMessage(string id) // �̰��̰� void�� �ϸ� ���� ��� string���� �ϰ� �� �������� �׷��� thorw ��� ����
	{
		cout << "���̵� ���� ����" << endl;
		return id;
	}
	int LoginFailMessage(int pw)
	{
		cout << "��� ���� " << endl;
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
		//if-else�� ���� �ʰ� if���� ����
		// throw�� ���� �������� ����

		string input_id;
		int input_pw;

		cout << "���̵� �Է� : " << endl;
		cin >> input_id;
		cout << "��й�ȣ �Է� : "<< endl;
		cin >> input_pw;

		if (id != input_id)
			throw ConnectException().LoginFailMessage(id); //�̰��̰�
	
		if (pw != input_pw)
			throw ConnectException().LoginFailMessage(id); // �������� void�� �ϸ� throw ����
		cout << "�α��� ����" << endl;
	}

	void OnOFF()
	{
		if (onoff == true)
		{
			onoff = false;
			cout << "�α��� ���� ����" << endl;
		}
		else {
			onoff = true;
			cout << "�α��� ���� ��" << endl;
		}
	}

public:
	//Ŭ������ ���� has A�� ó���ϴ°� ����
	//�׽�Ʈ�� ���� ���������� ����, ���� ���α׷�ó�� ¥���� ������ ���� Ŭ���� ���� ����
	string id = "zerobaseone";
	int pw = 0710;

	string id; // �������� ����� ���̵�
	int pw; // �������� ����� ���

	string server_name;
	bool onoff;
	Server(string s, bool o) :server_name(s), onoff(o) {}
	void Menu()
	{
		while (true)
		{
			int select;
			cout << "1. �α��� ���� 2. ���� ��/���� ���� 3. ����>> ";
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


//1.  �α��� ��� ����
// 2. �α��� ���� ��Ȳ�� ���� ������ ���� catch �ϱ�

// �ʿ��ϴٸ� Ŭ���� �߰�
int main()
{
	Server server("zb1", false);
	try
	{
		server.Menu();
	}
	catch (ConnectException& e) //Ŭ������ ���� catch�ÿ��� Ŭ������&���� ����
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