#include <iostream>
#include <random> // �̰� ����
//C++���� �����ϴ� ����

// C��� ������� ����ϴ� ����
// C����� rand()�Լ��� �̿��� ���� ���� ó��
#include <cstdlib> //((== <<ctdlib.h>))
#include <ctime>
//������ : C++���� �����ϴ� ������ �������(�˰���)�� ǰ���� C���� ���� �������� ����


using namespace std;
int main()
{
	//1. ���� ��ġ(����̽�)�� ����
	random_device rd;
	
	//2. ��ġ�� ���� �ʱ�ȭ
	mt19937 gen(rd());

	//3. 1~5 ������ ������ ��
	// uniform_int<int>�� ���� ���� ����
	// dis(����, ��) ���� �ۼ� ����
	uniform_int<int> dis(1, 5);
	
	int result = dis(gen);
	cout << "��� : " << result << endl;

	//switch��(���Ǻ��ٴ� �� �� ��ü�� ���� ��쿡 ���� ���)
	//switch(����)
	// {
	// case �� :
	//       ������ �ش� ���� ������ ���� �� ������ ��ɹ�;
	//}

	switch (result)
	{
		case 1:
			cout << "100����Ʈ" << endl;
			break;
		case 2:
			cout << "200����Ʈ" << endl;
			break;
		case 3:
			cout << "300����Ʈ" << endl;
			break;
		case 4:
			cout << "400����Ʈ" << endl;
			break;
		case 5:
			cout << "500����Ʈ" << endl;
			break;
	}

	return 0;
}