#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Student
{
private:
	 string name;
	 string id;
	 string city;
public:
	 string GetID() const { return id; }
	 void print();
	 void input();
};

void Student::input()
{
	cout << "학번, 이름, 지역명 ?  ";
	cin >>id>> name>> city;
}

void Student::print()
{
	 cout << "학번: " << id <<", 이름: " << name <<", 지역: " << city ;
}

class University : public Student   //대학정보를 저장하는 클래스
{
private:
    string major;
	float grade ;
public:
	  void print();
	  void input();
};

void University::input()
{
	 
}

void University::print()
{    
	 

}

class PostGraduate : public Student   //대학원 정보를 저장하는 클래스
{
private:
    string degree;  //학위
public:
	  void print();
	  void input();
};

void PostGraduate::input()
{
	
}

void PostGraduate::print()
{ 
	 
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
		int Cnt, i;

	   srand(time(NULL));
	   cout << "\n입력할 건수 ? ";
	   cin>>Cnt;

	   





	}

	//학생정보 출력 메서드
	void ShowStudent()
	{
		cout<<"\n=============================================="<<endl;
		



		cout<<"=============================================="<<endl;
	}

	//학생정보 검색 메서드
	void StuFind()
    {
		 string inputID;
		 string _end="end";
		 int found;

		 while(1) 
		 { 
			 cout <<"\n검색할 ID ? (종료:end) ";
			 cin>>inputID;

			 found=1;
			 



		
		  } //while(1) end
    }

	//동적메모리 할당해제 
	void Stu_delete()
	{
		for(int i=0;i<stuNum;i++)
		    delete STU[i]; 
	}
};

//**************************************

int main()
{
	StudentHandler StuHandler;
	int select, stop=1;

	while(stop)
	{ 
		cout<<"\n1. 학생데이터 입력 "<<endl;
		cout<<"2. 학생데이터 출력 "<<endl;
		cout<<"3. 학생데이터 검색 "<<endl;
		cout<<"4. 프로그램 종료 "<<endl;
		cout<<"Select ? (1~4) ";
		cin>>select;

		switch(select)
		{
		case 1: StuHandler.AddStudent();
			break;
        case 2: StuHandler.ShowStudent();
			break;
		case 3: StuHandler.StuFind();
			break;
		case 4: StuHandler.Stu_delete();
				stop=0;
				break;
		}
	}

	 return 0 ;
}

