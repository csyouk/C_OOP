//Employee_ClassEX.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(char * name)
	{strcpy(this->name, name);}
	void ShowYourName() const { cout << "name: " << name;}

	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(char* name, int money) : Employee(name), salary(money) {}

	int GetPay() const {return salary;}
	
	void ShowSalaryInfo() const
	{
		cout << "PermanentWorker  -> ";
		ShowYourName();
		cout << ", salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;      //월 판매실적
	double bonusRatio;    //상여금 비율 
public:
	SalesWorker(char * name, int money, double ratio, int val)
		: PermanentWorker(name, money), salesResult(val), bonusRatio(ratio)
	{  }

	int GetPay() const
	{ return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio); }

	void ShowSalaryInfo() const
	{
		cout << "SalesWorker  -> ";
		ShowYourName();
		cout << " , salary: " << PermanentWorker::GetPay() << " ,판매상여금: " << (int)(salesResult*bonusRatio) << ", 합계 : " << GetPay() << endl << endl;
	}
};


//***** 핸들러
class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(Employee* emp)
	{ empList[empNum++] = emp; }

	void ShowAllSalaryInfo() const
	{
		int i;
		for ( i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "=============================" << endl;
		cout << "이번 달 급여의 총합 : " << sum << endl;
		cout << "=============================" << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i<empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직  등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// 영업직 등록                              //월급,상여금비율,영업실적
	handler.AddEmployee(new SalesWorker("Hong", 1000, 0.1, 7000));
	handler.AddEmployee(new SalesWorker("Moon", 2000, 0.1, 5000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}