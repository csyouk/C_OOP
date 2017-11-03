#include <iostream>
#include <cstring>
using namespace std;

 //클래스 템플릿을 통해서 만들어진 클래스를 
 //템플릿 클래스라고 한다.
 //클래스 템플릿 -> 템플릿 클래스
 //클래스 템플릿이 작성되면 다양한 데이터를 대상으로 클래스가 생성된다.

template<typename T>
class Data
{
private:
	T value;
public:
	Data(T val);
	void SetData(T _x);
	T GetData();
};

// 메소드를 빼냈을때는 반드시 템플릿이라는 것을 
// 컴파일러에게 알려야 한다.
template<typename T>
Data<T>::Data(T val) 
// T타입이 템플릿으로 정의된 DATA클래스 템플릿이다.
{
	value = val;
}
template<typename T>
void Data<T>::SetData(T _x)
{
	value = _x;
}
template<typename T>
T Data<T>::GetData()
{
	return value;
}


int main(void){

	Data<int> d1(0);
	d1.SetData(100);
	cout << "value : " << d1.GetData() << endl;

	Data<char> d2('Z');
	d2.SetData('A');
	cout << "value : " << d2.GetData() << endl;

	Data<double> d3(2.0);
	d3.SetData(1.5);
	cout << "value : " << d3.GetData() << endl;
	return 0;
}