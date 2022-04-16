#include <iostream>
#include <string>
using namespace std;
class student {
private:
	static int count;
	string name_ID;
public:
	student()
	{
		name_ID = "";
		count++;
		cout << "Person No. " << count << endl;





	}
	friend istream& operator>>(istream& input, student& s) {
		input >> s.name_ID;
		cout << endl;
		return input;
	}
	friend class Date;
};
int student::count = 0;





class Date
{
private:
	int year;
	int month;
	int day;
	student s;
public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;



		cout << " Enter Name and ID : ";
		cin >> s;
	}
	//overload to cin
	friend istream& operator>>(istream& input, Date& d)
	{
		input >> d.year >> d.month >> d.day;
		return input;
	}
	//overload to cout
	friend ostream& operator<<(ostream& output, const Date& d)
	{
		output << "(" << d.year << "-" << ((d.month > 0 && d.month <= 12) ? d.month : d.month % 12) << "-" << ((d.day > 0 && d.day <= 30) ? d.day : 0) << ")" << endl;
		return output;
	}
	//overload to compare
	bool operator>(Date& d)
	{
		if (year < d.year) {

			//cout << "Second Student is senior than First Student !! as " << d.year << "-" << d.month << "-" << d.day << " is earlier than " << year << "-" << month << "-" << day << endl;
			cout << s.name_ID << " is senior than " << d.s.name_ID << "!! as " << year << "-" << month << "-" << day << "is earlier than " << d.year << "-" << d.month << "-" << d.day << endl;

			return true;
		}
		else {

			cout << d.s.name_ID << " is senior than " << s.name_ID << "!! as " << year << "-" << month << "-" << day << "is earlier than " << d.year << "-" << d.month << "-" << d.day << endl;

			return false;
		}
	}
};
int main()
{
	Date d1;
	cout << " Enter joining date : ";
	cin >> d1;
	cout << d1;
	Date d2;
	cout << " Enter joining date : ";
	cin >> d2;
	cout << d2;
	(d1 > d2);




}