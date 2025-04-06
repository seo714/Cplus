#include <iostream>
using namespace std;
//책 클래스를 기반으로 Ebook 클래스 정의
// 책에는 기본적으로 책의 제목과, 책의 가격이 주어지며,
// Ebook에서는 추가적으로 보안 키를 넣어줌
//
// 책의 정보를 확인할 수 있는 메소드 bookInfo를 만들고,
// Ebook의 정보를 확인할 수 있는 메소드 ebookInfo 구현


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