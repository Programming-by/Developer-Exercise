#include <iostream>
using namespace std;

class clsPerson {

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:


	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int ID() {
		return _ID;
	}
	void setFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	string FirstName() {
		return _FirstName;
	}

	void setLastName(string LastName) {
		_LastName = LastName;
	}

	string LastName() {
		return _LastName;
	}
	void setEmail(string Email)
	{
		_Email = Email;
	}

	string Email() {
		return _Email;
	}

	void setPhone(string Phone) {
		_Phone = Phone;
	}

	string Phone() {
		return _Phone;
	}

	string FullName() {
		return _FirstName + " " + _LastName;
	}

	void Print() {
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID       : " << _ID;
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _LastName;
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail    : " << _Email;
		cout << "\nPhone    : " << _Phone;
		cout << "\n___________________\n";
	}

	void SendEmail(string Subject, string Body) {
		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;
	}

	void SendSMS(string TextMessage) {
		cout << "\nThe following SMS sent successfully to phone: " << _Phone;
		cout << "\n" << TextMessage << endl;
	}
};

class clsEmployee : public clsPerson {

private:
	string _Title;
	string _Department;
	float _Salary;

public:

	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)

		: clsPerson(ID, FirstName, LastName, Email, Phone)
	{

		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	void setTitle(string Title) {
		_Title = Title;
	}

	string Title() {
		return _Title;
	}

	void setDepartment(string Department) {
		_Department = Department;
	}

	string Department() {
		return _Department;
	}

	void setSalary(float Salary) {
		_Salary = Salary;
	}

	float Salary() {
		return _Salary;
	}

	void Print() {

		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID        : " << ID();
		cout << "\nFirstName : " << FirstName();
		cout << "\nLastName  : " << LastName();
		cout << "\nFull Name : " << FullName();
		cout << "\nEmail     : " << Email();
		cout << "\nPhone     : " << Phone();

		cout << "\nTitle     :" << _Title;
		cout << "\nDepartment: " << _Department;
		cout << "\nSalary    :" << _Salary;
		cout << "\n___________________\n";

	}

};

class clsDeveloper : public clsEmployee {

private:
	string _MainProgrammingLanguage;

public:

	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone , string Title , string Department , float Salary , string MainProgrammingLanguage)

		: clsEmployee(ID, FirstName, LastName, Email, Phone , Title , Department , Salary)
	{

		_MainProgrammingLanguage = MainProgrammingLanguage;

	}


	void setMainProgrammingLanguage(string MainProgrammingLanguage) {


		_MainProgrammingLanguage = MainProgrammingLanguage;
	}


	string MainProgrammingLanguag() {
		return _MainProgrammingLanguage;
	}

	void Print() {

		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID        : " << ID();
		cout << "\nFirstName : " << FirstName();
		cout << "\nLastName  : " << LastName();
		cout << "\nFull Name : " << FullName();
		cout << "\nEmail     : " << Email();
		cout << "\nPhone     : " << Phone();

		cout << "\nTitle     :" << Title();
		cout << "\nDepartment: " << Department();
		cout << "\nSalary    :" << Salary();

		cout << "\n___________________\n";
		cout << "\nMain Programming Language:" << _MainProgrammingLanguage;

	}

};


int main()
{
	clsDeveloper Developer1(10,"Anas" ,"Naamneh","a@gmail.com","07999999","CEO","IT",4000,"C++");

	Developer1.Print();

	return 0;
}