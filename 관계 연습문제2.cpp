#include <iostream>
using namespace std;
//å Ŭ������ ������� Ebook Ŭ���� ����
// å���� �⺻������ å�� �����, å�� ������ �־�����,
// Ebook������ �߰������� ���� Ű�� �־���
//
// å�� ������ Ȯ���� �� �ִ� �޼ҵ� bookInfo�� �����,
// Ebook�� ������ Ȯ���� �� �ִ� �޼ҵ� ebookInfo ����


class Book
{
public:
	string name;
	int price;
	void bookInfo()
	{
		cout << name << ", " << price << endl;
	}
};
class Ebook : public Book
{
private:
	string key;
public:
	Ebook(string name, int price, string key)
	{
		this->name = name;
		this->price = price;
		this->key = key;
	}
	void ebookInfo()
	{
		cout << name<<", " << price<<", " << key << endl;
	}
};

int main()
{
	Ebook ebook("Welcome to C++", 17900, "adsx0icfe");
	ebook.ebookInfo();

	return 0;
}