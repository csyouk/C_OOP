#include <iostream>
#include <map>
#include <string>
using namespace std;

class Student
{
private:
	 string name;
	 string id;
	 string city;
public:
	 string GetID() const { return id; }
	 virtual void print();
	 virtual void input() = 0;
};

void Student::print()
{
	 cout << "이름 : " << name << ", 학번 : " << id <<" , 지역 : " << city ;
}

void Student::input()
{
	cout << "학번, 이름, 지역명 ?  ";
	cin >>id>> name>> city;
}


class University : public Student   //대학정보를 저장하는 클래스
{
private:
    string major;
	float grade ;

public:
	 virtual void print();
	 virtual void input();
};

void University::print()
{    
	 Student::print();
	 cout << " , 전공 : " << major << ", 학점 : "<< grade<<endl;
}

void University::input()
{
	 Student::input();
	 cout << "전공, 학점 ? "; 
	 cin >> major>>grade;
}

class PostGraduate : public Student   //대학원 정보를 저장하는 클래스
{
private:
    string degree;  //학위
public:
	 void SetDegree(const string & degree);
	 virtual void print();
	 virtual void input();
};

void PostGraduate::SetDegree(const string & degree)
{
    this->degree = degree;
}

void PostGraduate::print()
{ 
	 Student::print();
	 cout << " , 학위 : " << degree << endl;
	
}

void PostGraduate::input()
{
	 Student::input();
	 cout << "학위 입력 : "; cin >> degree;
}

#define  ArrSize 2

int main()
{
	 map<string, Student *> mapStudent;

	 University univ[ArrSize];
	 PostGraduate post[ArrSize];
	 string inputID;
	 
	 for(int i=0;i<ArrSize;i++)
	 {
		 univ[i].input();
		 post[i].input(); 
	 }

	 //mapStudent.insert(map<string, Student *>::value_type(i.GetID(), (Student*)&i));

	 for(int i=0;i<ArrSize;i++)
	 {
		 mapStudent.insert(make_pair(univ[i].GetID(), (Student*)&univ[i])); 
		 mapStudent.insert(make_pair(post[i].GetID(), (Student*)&post[i]));
	 }

	 map<string, Student *>::iterator itr = mapStudent.begin(); 

	 cout<<endl;
	 while(itr != mapStudent.end())
	 {
		  itr->second->print();  
		  ++itr;
	 }
   cout<<endl;


	 while(1) 
     { 
		 cout<<endl;
		 cout << "\n검색할 ID ? (종료:end) "; 
         cin >> inputID; 
         if(inputID == "end") 
			  break; 
         itr = mapStudent.find(inputID);  //키를 찾는다
         if(itr == mapStudent.end()) 
             cout << "검색한 ID가  없습니다." << endl; 
         else 
             itr->second->print(); 
       }

	 return 0 ;
}