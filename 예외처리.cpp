#include <iostream>
using namespace std;

int main()
{
	int a, b;

	//���� �� �ڵ� : �����⸦ �����ϴ� ���α׷�
	// �߻��� �� �ִ� ���� ��Ȳ : 0���� ������ ���
	//							a�� 0�̸� ��� �����Ⱑ 0�̶� ���ʿ�
	//							b�� 0�̸�, �и� 0�̱� ������ ������ �Ұ���
	 
	
//1. try�� �ۼ� 
	try
	{
		cout << "������ ����. ���� a, b ������� �Է� : ";
		cin >> a >> b;

//2. throw �� �ۼ� : ������ ���ܸ� �߻���Ű�� �ڵ�
		if (a == 0) throw a; // thorw ���� ���;�� ������ catch�� �ν�
		
		if (b == 0) throw "[Excception] Division Zero";
		
		cout << "��� ��� : " << a / b << endl;
	}
//3. catch�� �ۼ�
//catch���� ������ �ۼ� ����
	catch (int a)// ((a�� ����� ���))
	{
		cout << "a�� 0�̴� ������ �ʰ�����" << endl;
	}
	catch (const char* message) // string���� �ϸ� ������ ���� ����, ���� ���� ���� �� const char* ��
		//catch�� ���� ��,  throw�� Ȱ���ϰ� �ִٸ� ���� ���� ���콺�� 
		// ������ ��� � ���������� Ȯ���� �� �ְ�, �ű⿡ �°� �־��ָ� ��
		
	{
		cout << message << endl;
	}

	return 0;
}