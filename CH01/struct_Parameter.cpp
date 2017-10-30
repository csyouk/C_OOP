#include <iostream>
using namespace std;

 //사각형 정보를 저장할 구조체
struct Rectangle
{
	int x, y; 
	int width, height;
}; 

Rectangle RectValue(Rectangle rc){
	rc.x += 50;
	rc.y += 50;
	rc.height += 100;
	rc.width += 100;
	return rc;
}

void RectRef(Rectangle & rc){
	rc.x -= 50;
	rc.y -= 50;
	rc.height -= 100;
	rc.width -= 100;
}

int main()
{
	Rectangle rc1 = { 10, 10, 10, 10 };
	Rectangle rc2 = { 10, 10, 10, 10 };

	cout << "rc = ( " << rc1.x << ", " << rc1.y << ", ";
	cout << rc1.width << ", " << rc1.height << ")\n";

	rc1 = RectValue(rc1);

	cout << "rc = ( " << rc1.x << ", " << rc1.y << ", ";
	cout << rc1.width << ", " << rc1.height << ")\n";

	RectRef(rc2);

	cout << "rc = ( " << rc2.x << ", " << rc2.y << ", ";
	cout << rc2.width << ", " << rc2.height << ")\n";


	return 0;
}