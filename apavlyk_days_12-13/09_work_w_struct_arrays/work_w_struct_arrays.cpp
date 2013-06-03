#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cin.get();
	cout << "Done!" << endl;
	return EXIT_SUCCESS;
}

int getinfo(student pa[], int n)
{
	unsigned int actual_size = 0;
	for (int i = 0; i < n; i++) {
		cout << "Enter student fullname: ";
		cin.getline((pa + i)->fullname, SLEN);
		 if ((pa + i)->fullname[0] == '\0') {
			 break; }
		cout << "Enter student hobby: ";
		cin.getline((pa + i)->hobby, SLEN);
		cout << "Enter student oop level: ";
		(cin >> (pa + i)->ooplevel).get();
		++actual_size;
	}
	return actual_size;
}

		

void display1(student st)
{
	cout << "Student fullname is " << st.fullname << endl;
	cout << "Student hobby is " << st.hobby << endl;
	cout << "Student oop level is " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << "Student fullname is " << ps->fullname << endl;
	cout << "Student hobby is " << ps->hobby << endl;
	cout << "Student oop level is " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Student " << i + 1 << " fullname is " << (pa + i)->fullname << endl;
		cout << "Student " << i + 1 << " hobby is " << (pa + i)->hobby << endl;
		cout << "Student " << i + 1 << " oop leve is " << (pa + i)->ooplevel << endl; }
}