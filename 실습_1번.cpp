#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();             // �⺻ ������ ����
	Tower(int h);        // �Ű������� �ִ� ������ ����
	int getHeight();     // ���̸� ��ȯ�ϴ� �Լ� ����
};

Tower::Tower() {         // �⺻ ������ ���� (Tower Ŭ���� ������ Tower() �Լ��� ����)
	height = 1;          // ���̸� 1�� �ʱ�ȭ
}

Tower::Tower(int h) {    // �Ű������� �ִ� ������ ����
	height = h;          // �־��� ���̷� �ʱ�ȭ
}

int Tower::getHeight() { // ���̸� ��ȯ�ϴ� �Լ� ����
	return height;       // ���� ��ȯ
}

int main() {
	Tower myTower;            // �⺻ �����ڸ� ����Ͽ� ��ü ����  
	Tower seoulTower(100);    // �Ű������� �ִ� �����ڸ� ����Ͽ� ��ü ����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}