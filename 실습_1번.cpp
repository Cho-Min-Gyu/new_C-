#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();             // 기본 생성자 선언
	Tower(int h);        // 매개변수가 있는 생성자 선언
	int getHeight();     // 높이를 반환하는 함수 선언
};

Tower::Tower() {         // 기본 생성자 정의 (Tower 클래스 내부의 Tower() 함수에 접근)
	height = 1;          // 높이를 1로 초기화
}

Tower::Tower(int h) {    // 매개변수가 있는 생성자 정의
	height = h;          // 주어진 높이로 초기화
}

int Tower::getHeight() { // 높이를 반환하는 함수 정의
	return height;       // 높이 반환
}

int main() {
	Tower myTower;            // 기본 생성자를 사용하여 객체 생성  
	Tower seoulTower(100);    // 매개변수가 있는 생성자를 사용하여 객체 생성
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}