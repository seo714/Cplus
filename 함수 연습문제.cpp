#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

// 1. getCount
//���� ��� : 1 2 3 4 5 6 7 8 9 10
void getCount()
{
	static int count = 1;
	cout << count << " ";
	count++;
}

// 2. �� ���� ������ �Ű������� �޾� �� ���� ���̿� �ִ� ��� ������ ���� return �ϴ� �Լ� ����,. main���� ȣ��
// 5�� 9 ���� : 21
int getTotal(int a, int b)
{
	int result = 0;
	for (int i = a + 1; i < b; i++)
	{
		result += i;
	}
	return result;
}

// 3. ����ڷκ��� ��(second)�� �Է� �޾� ��/��/���� ���·� ����ϴ� �Լ�
// 3615�� -> 1�ð� 0�� 15��
void getTime(int time) 
{ 
	
	int h = time / 3600;
	time %= 3600;
	int m = time / 60;
	time %= 60;
	int s = time;
	cout << h <<"�ð� "<< m<<"�� " << s <<"��" << endl;
}

//4. ����ڷκ��� Ű�� cm������ �Է� �޾�m������ ȯ���Ͽ� ���
// �ش� �Լ��� Ű�� �Լ��� ���ڷ� ���޹޾� m ������ ������ return 
float getM(int cm) 
{
	float M = float(cm);
	return M / 100;

	//return (float)cm / 100
}

int main()
{
	// ���� 1
	for (int i = 0; i < 10; i++)
	{
		getCount();
	}
	cout << endl << endl;

	// ���� 2
	int first = 5;
	int second = 9;
	cout << first << " �� " << second << " ������ ������ �� ���� " << getTotal(first, second) << endl;
	cout << endl << endl;

	// ���� 3
	int sec;
	cout << "�� : ";
	cin >> second;
	getTime(second);
	cout << endl << endl;

	// ����4
	int height;
	cout << "Ű(cm) : ";
	cin >> height;
	cout.precision(3); //���� + �Ҽ��� ������ ��ü ��� ���� ����(���� 1�ڸ�, �Ҽ� 2�ڸ�)
	cout << getM(height)<<"m" << endl;
	cout << endl << endl;


	// cout���� �ڸ��� ǥ���ϱ�
	// 1. cout.precision(����); ���� +�Ҽ��� ������ ��� ���� ����
	// ex) 17.367�� ǥ���ҰŸ� precision(5)
	
	// 2. cout<<fixed; �ش� ��ɾ�� �Ҽ����� �����ؼ� ǥ��
	//	  cout.precison(����); �Ҽ����� ���� ������ �ۼ�
	// ex) 17.367�� ǥ���ϸ�
	//     cout<<fixed;
	//     cout<<precision(3);
	//���ǻ��� : �Ҽ����� ������ ��쿡�� �ݿø� ó��

	// 3. fixed�� ������� ��� ������ �����Ǳ� ������ ����� ������ ������ �����ؾ� ��
	// cout.setf(ios::fixed);
	return 0;
}