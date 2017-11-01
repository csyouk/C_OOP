#include <iostream>
#include <cassert>
using namespace std;

class DynamicArray{
private:
	int *arr;
	int len;
public:
	DynamicArray(int);
	DynamicArray(DynamicArray&);
	bool SanityCheck();
	void DynamicArrayInput();
	void DynamicArrayOutput();
	~DynamicArray();
};

DynamicArray::DynamicArray(int _len){
	len = _len;
	cout << "this" << endl;
	arr = new int[len];
}

DynamicArray::~DynamicArray(){
	cout << "Dynamic Array with size "<< len << " destroyed" << endl;
	if (len < 0){ return; }
	delete[] arr;
}

DynamicArray::DynamicArray(DynamicArray& ref){
	len = ref.len;
	arr = new int[len];
	for (int i = 0; i < len; i++)
		arr[i] = ref.arr[i];
}

bool DynamicArray::SanityCheck(){
	if (len < 0){
		delete this;
	}
}

void DynamicArray::DynamicArrayInput(){
	for (int i = 0; i < len; i++) 
		cin >> arr[i];
}

void DynamicArray::DynamicArrayOutput(){
	for (int i = 0; i < len; i++)
		cout << arr[i] << ",";
	cout << endl;
}


int main(void){

	int size;
	cout << "배열의 크기 ? ";
	cin >> size;

	DynamicArray dArray1(size);
	//dArray1.DynamicArrayInput();
	//dArray1.DynamicArrayOutput();

	cout << endl;
	//DynamicArray dArray2 = dArray1;
	//dArray2.DynamicArrayOutput();

	return 0;
}