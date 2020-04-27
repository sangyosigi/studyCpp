#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* name;
	int age;

public:
	Human(const char* aname, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
		printf("== <%s> ��ü ���� ==\n", name);
	}

	~Human() {
		printf("== <%s> ��ü�� �ı� ==\n", name);
		delete[] name;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	/*Human boy("����ѹ��ź��̿͵η��", 12);
	boy.intro();

	Human* leo;
	leo = new Human("���������� ��ī������", 47);
	leo->intro();
	delete leo;*/


}
