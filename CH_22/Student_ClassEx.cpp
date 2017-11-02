#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define END_OF_SEARCHING 0
#define MATCHING_ID_FOUND 0

using namespace std;

class Student
{
private:
	string name;
	string id;
	string city;
public:
	virtual ~Student()
	{
		//cout << "Student obj destroyed." << endl;
	}
	string GetID() const { return id; }
	virtual void print();
	virtual void input();
};

void Student::input()
{
	cout << "학번, 이름, 지역명 ?  ";
	cin >> id;
	cin >> name >> city;

	cin.clear();
	cin.ignore(100, '\n');
}

void Student::print()
{
	cout << "학번: " << id << ", 이름: " << name << ", 지역: " << city;
}

class University : public Student   //대학정보를 저장하는 클래스
{
private:
	string major;
	float grade;
public:
	~University()
	{
		//cout << "University obj destroyed." << endl;
	}
	void print();
	void input();
};

void University::input()
{
	Student::input();
	cout << "전공, 학점 ? ";
	cin >> major >> grade;

	cin.clear();
	cin.ignore(100, '\n');
}

void University::print()
{
	Student::print();
	cout << ", 전공:" << major << ", 학점: " << grade << endl;
}

class PostGraduate : public Student   //대학원 정보를 저장하는 클래스
{
private:
	string degree;  //학위
public:
	~PostGraduate()
	{
		//cout << "PostGraduate obj destroyed." << endl;
	}
	void print();
	void input();
};

void PostGraduate::input()
{
	Student::input();
	cout << "학위 입력 ";
	cin >> degree;

	cin.clear();
	cin.ignore(100, '\n');
}

void PostGraduate::print()
{
	Student::print();
	cout << ", 학위:" << degree << endl;
}

//**************************************

#define  ArrSize 50

class StudentHandler
{
private:
	Student *STU[ArrSize];
	int stuNum;
public:
	StudentHandler() :stuNum(0)
	{	}

	//학생정보 입력 메서드
	void AddStudent()
	{
		int Cnt, i, type;

		srand(time(NULL));
		cout << "\n입력할 건수 ? ";
		cin >> Cnt;
		if (cin.fail()){
			cout << "=======숫자를 입력해주세요.=======" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			AddStudent();
			return;
		}
		for (i = 0; i < Cnt; i++)
		{
			type = rand() % 2;
			if (type){
				STU[stuNum] = new PostGraduate();
				STU[stuNum]->input();
			}
			else {
				STU[stuNum] = new University();
				STU[stuNum]->input();
			}
			stuNum++;
		}
	}

	//학생정보 출력 메서드
	void ShowStudent()
	{
		int i;
		cout << "\n==============================================" << endl;
		for (i = 0; i < stuNum; i++)
		{
			STU[i]->print();
		}
		cout << "==============================================" << endl;
	}

	//학생정보 검색 메서드
	void StuFind()
	{
		string inputID;
		string _end = "end";
		int found;
		
		while (1)
		{
			int i;
			cout << "\n검색할 ID ? (종료:end) ";
			cin >> inputID;

			found = 0;

			if (inputID.compare(_end) == END_OF_SEARCHING){
				return;
			}

			for (i = 0; i < stuNum; i++){
				if (STU[i]->GetID().compare(inputID) == MATCHING_ID_FOUND){
					STU[i]->print();
					found = 1;
					break;
				}
			}

			if (!found){
				cout << inputID << " Not found!!!" << endl;
			}

		} 
	}

	//동적메모리 할당해제 
	void Stu_delete()
	{
		for (int i = 0; i < stuNum; i++)
			delete STU[i];
	}
};

//**************************************

int main()
{
	StudentHandler StuHandler;
	int select, stop = 1;

	while (stop)
	{
		cout << "\n1. 학생데이터 입력 " << endl;
		cout << "2. 학생데이터 출력 " << endl;
		cout << "3. 학생데이터 검색 " << endl;
		cout << "4. 프로그램 종료 " << endl;
		cout << "Select ? (1~4) ";
		cin >> select;
		if (cin.fail()){
			cout << "=======숫자를 입력해주세요.=======" << endl;
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}
		switch (select)
		{
		case 1: StuHandler.AddStudent();
			break;
		case 2: StuHandler.ShowStudent();
			break;
		case 3: StuHandler.StuFind();
			break;
		case 4: StuHandler.Stu_delete();
			stop = 0;
			break;
		}
	}

	return 0;
}

