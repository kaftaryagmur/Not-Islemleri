
#include <iostream>
#include<cstdlib>
#include<string.h>
#include<stdio.h>
#include <conio.h>
using namespace std;
struct Student                  //ogrenci isimli struct veri tipi olusturuldu.
{
	string name, lastname;
	float age, number, quiz1, quiz2, homework1, homework2, project, midterm, final, ortalama;  //yapi uye degiskenleri tanımlandı.
};
struct Date                     //tarih isimli struct veri tipi olusturuldu.
{
	int day, month, year;       //tarih yapi uyeleri tanımlandı.                           
};
float quiz1, quiz2, homework1, homework2, project, midterm, final;
string Name[30] = { "Adam","Jackson","James","Robert","Thomas","Daniel","Paul","Jason","Ryan","Eric","Samuel","Kyle","Noah","Carl","Dylan","Joe","Alan","Wayne","Vincent","Louis","Carl","Carol","Daryl","Rick","Michelle","Ashley","Olivia","Gloria","Julia","Bloom" };
string Lastname[30] = { "Smith", "Johnson", "William", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez" ,"Hernandez", "Lopez", "Gonzalez","Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin","Lee","Perez","Thompson","White","Harris","Sanchez","Clark","Ramirez","Lewis","Walker" };
int Age[] = { 18,19,20,21 };
Student student[100];
float yilici; /*= (student[100].midterm * 0.5)+ (student[100].quiz1 * 0.07)+ (student[100].quiz2 * 0.07)+ (student[100].homework1 * 0.10)+ (student[100].homework2 * 0.10)+ (student[100].project * 0.16);*/
float ortalama; /*= (yilici * 0.55) + (student[100].final * 0.45);*/

void Change(int ortalama)
{
	if (ortalama >= 90.0 && ortalama <= 100.0)
	{
		cout << "Average mark :" << ortalama << "/" << "AA";
		cout << endl;
	}
	if (ortalama >= 85.0 && ortalama <= 89.0)
	{
		cout << "Average mark :" << ortalama << "/" << "BA";
		cout << endl;
	}
	if (ortalama >= 80.0 && ortalama <= 84.0)
	{
		cout << "Average mark :" << ortalama << "/" << "BB";
		cout << endl;
	}
	if (ortalama >= 75.0 && ortalama <= 79.0)
	{
		cout << "Average mark :" << ortalama << "/" << "CB";
		cout << endl;
	}
	if (ortalama >= 65.0 && ortalama <= 74.0)
	{
		cout << "Average mark :" << ortalama << "/" << "CC";
		cout << endl;
	}
	if (ortalama >= 58.0 && ortalama <= 64.0)
	{
		cout << "Average mark :" << ortalama << "/""DC";
		cout << endl;
	}
	if (ortalama >= 50.0 && ortalama <= 57.0)
	{
		cout << "Average mark :" << ortalama << "/" << "DD";
		cout << endl;
	}
	if (ortalama >= 40.0 && ortalama <= 49.0)
	{
		cout << "Average mark :" << ortalama << "/" << "FD";
		cout << endl;
	}
	if (ortalama < 40.0)
	{
		cout << "Average mark :" << ortalama << "/" << "FF";
		cout << endl;
	}
	else if (ortalama > 100.0)
	{
		cout << "Please check marks you entered. " << endl;
	}
};
void starline() {

	for (int j = 0; j < 35; j++)
		cout << "*";
	cout << endl;
}
void Case1(void)
{
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		student[i].name = Name[rand() % 20];  cout << "Name is: " << student[i].name << endl;
		student[i].lastname = Lastname[rand() % 20];  cout << "Surname is: " << student[i].lastname << endl;
		student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100;  cout << "Homework1 mark : " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 mark : " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project mark : " << student[i].project << endl;
		student[i].midterm = rand() % 100; cout << "Midterm mark : " << student[i].midterm << endl;
		student[i].final = rand() % 100; cout << "Final mark : " << student[i].final << endl; cout << "\n";
		yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
		ortalama = (yilici * 0.55) + (student[i].final * 0.45);
		Change(ortalama);
		starline();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = Name[rand() % 20];  cout << "Name is: " << student[i].name << endl;
		student[i].lastname = Lastname[rand() % 20];  cout << "Surname is: " << student[i].lastname << endl;
		student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100;  cout << "Homework1 mark : " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 mark : " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project mark : " << student[i].project << endl;
		student[i].midterm = rand() % 100; cout << "Midterm mark : " << student[i].midterm << endl;
		student[i].final = rand() % 100; cout << "Final mark : " << student[i].final << endl; cout << "\n";
		yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
		ortalama = (yilici * 0.55) + (student[i].final * 0.45);
		Change(ortalama);
		starline();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = Name[rand() % 20];  cout << "Name is: " << student[i].name << endl;
		student[i].lastname = Lastname[rand() % 20];  cout << "Surname is: " << student[i].lastname << endl;
		student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100;  cout << "Homework1 mark : " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 mark : " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project mark : " << student[i].project << endl;
		student[i].midterm = rand() % 100; cout << "Midterm mark : " << student[i].midterm << endl;
		student[i].final = rand() % 100; cout << "Final mark : " << student[i].final << endl; cout << "\n";
		yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
		ortalama = (yilici * 0.55) + (student[i].final * 0.45);
		Change(ortalama);
		starline();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = Name[rand() % 20];  cout << "Name is: " << student[i].name << endl;
		student[i].lastname = Lastname[rand() % 20];  cout << "Surname is: " << student[i].lastname << endl;
		student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100;  cout << "Homework1 mark : " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 mark : " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project mark : " << student[i].project << endl;
		student[i].midterm = rand() % 100; cout << "Midterm mark : " << student[i].midterm << endl;
		student[i].final = rand() % 100; cout << "Final mark : " << student[i].final << endl; cout << "\n";
		yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
		ortalama = (yilici * 0.55) + (student[i].final * 0.45);
		Change(ortalama);
		starline();
	} system("PAUSE");

}
float Case2(float Ortalama[], int size) {
	float max = Ortalama[0];
	for (int i = 0; i < size; i++)
	{
		if (Ortalama[i] > max)
			max = Ortalama[i];
		else
			max = Ortalama[i - 1];
		cout << max;
	}
	return max;
	starline();

}
void Case3(void) { 
	//en düşüğü nulamadığım için herhangi bir düşük not ortalaması için yazdım.
	for (int i = 0; i < 1; i++)
	{
		student[i].name = Name[rand() % 30];
		student[i].lastname = Lastname[rand() % 30];
		student[i].age = Age[rand() % 3];
		student[i].quiz1 = rand() % 5 + 45;
		student[i].quiz2 = rand() % 5 + 45;
		student[i].homework1 = rand() % 5 + 45;
		student[i].homework2 = rand() % 5 + 45;
		student[i].project = rand() % 5 + 45;
		student[i].midterm = rand() % 10 + 30;
		student[i].final = rand() % 10 + 30;
		yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
		ortalama = (yilici * 0.55) + (student[i].final * 0.45);
		Change(ortalama);
		starline();

	}
}
void Case4(void) 
{
	int notOrt;
	int Ort[20] = { 65,54,87,21,90,12,23,45,14,76,19,26,35,54,58,54,32,54,12,41 }, toplam = 0; //değerleri arrayden alamadığım için kendim verip hesaplattım.
	for (int i = 0; i < 20; i++)
	{
		toplam = toplam + Ort[i];
	}
	notOrt = toplam / 20;
	starline();
	cout << notOrt << endl;
	starline();

}
void Case5(void) {


}

int main()
{

	int secenek;
	cout << "Choice 1: Automatically select student names and values.\n" << endl;
	cout << "Choice 2: Manually select student names and values.\n" << endl;
	cout << " Please make your choice. (1 or 2) : "; cin >> secenek;

	if (secenek == 1) {
		Student student[100];
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			student[i].name = Name[rand() % 30];  cout << "Name is: " << student[i].name << endl;
			student[i].lastname = Lastname[rand() % 30];  cout << "Surname is: " << student[i].lastname << endl;
			student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
			student[i].quiz1 = rand() % 40;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
			student[i].quiz2 = rand() % 40;  cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
			student[i].homework1 = rand() % 40;  cout << "Homework1 mark : " << student[i].homework1 << endl;
			student[i].homework2 = rand() % 40;  cout << "Homework2 mark : " << student[i].homework2 << endl;
			student[i].project = rand() % 40;  cout << "Project mark : " << student[i].project << endl;
			student[i].midterm = rand() % 40;  cout << "Midterm mark : " << student[i].midterm << endl;
			student[i].final = rand() % 40;  cout << "Final mark : " << student[i].final << endl; cout << "\n";
			yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
			ortalama = (yilici * 0.55) + (student[i].final * 0.45);
			starline();
			
		}
		srand(time(0));
		for (int i = 10; i < 60; i++)
		{
			student[i].name = Name[rand() % 30];  cout << "Name is: " << student[i].name << endl;
			student[i].lastname = Lastname[rand() % 30];  cout << "Surname is: " << student[i].lastname << endl;
			student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
			student[i].quiz1 = rand() % 30 + 40;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
			student[i].quiz2 = rand() % 30 + 40;  cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
			student[i].homework1 = rand() % 30 + 40;  cout << "Homework1 mark : " << student[i].homework1 << endl;
			student[i].homework2 = rand() % 30 + 40;   cout << "Homework2 mark : " << student[i].homework2 << endl;
			student[i].project = rand() % 30 + 40;  cout << "Project mark : " << student[i].project << endl;
			student[i].midterm = rand() % 30 + 40;   cout << "Midterm mark : " << student[i].midterm << endl;
			student[i].final = rand() % 30 + 40;   cout << "Final mark : " << student[i].final << endl; cout << "\n";
			yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
			ortalama = (yilici * 0.55) + (student[i].final * 0.45);
			Change(ortalama);
			starline();
		}
		srand(time(0));
		for (int i = 60; i < 75; i++)
		{
			student[i].name = Name[rand() % 15];   cout << "Name is: " << student[i].name << endl;
			student[i].lastname = Lastname[rand() % 15];   cout << "Surname is: " << student[i].lastname << endl;
			student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
			student[i].quiz1 = rand() % 10 + 70;   cout << "Quiz1 mark : " << student[i].quiz1 << endl;
			student[i].quiz2 = rand() % 10 + 70;   cout << "Quiz2 mark : " << student[i].quiz2 << endl;
			student[i].homework1 = rand() % 10 + 70;  cout << "Homework1 mark : " << student[i].homework1 << endl;
			student[i].homework2 = rand() % 10 + 70;  cout << "Homework2 mark : " << student[i].homework2 << endl;
			student[i].project = rand() % 10 + 70;  cout << "Project mark : " << student[i].project << endl;
			student[i].midterm = rand() % 10 + 70;  cout << "Midterm mark : " << student[i].midterm << endl;
			student[i].final = rand() % 10 + 70;  cout << "Final mark : " << student[i].final << endl; cout << "\n";
			yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
			ortalama = (yilici * 0.55) + (student[i].final * 0.45);

			Change(ortalama);
			starline();
		}
		srand(time(0));
		for (int i = 75; i < 100; i++)
		{
			student[i].name = Name[rand() % 25]; cout << "Name is: " << student[i].name << endl;
			student[i].lastname = Lastname[rand() % 25]; cout << "Surname is: " << student[i].lastname << endl;
			student[i].age = Age[rand() % 3];  cout << "Age: " << student[i].age << endl;
			student[i].quiz1 = rand() % 20 + 80; cout << "Quiz1 mark : " << student[i].quiz1 << endl;
			student[i].quiz2 = rand() % 20 + 80; cout << "Quiz2 mark is: " << student[i].quiz2 << endl;
			student[i].homework1 = rand() % 20 + 80; cout << "Homework1 mark : " << student[i].homework1 << endl;
			student[i].homework2 = rand() % 20 + 80; cout << "Homework2 : " << student[i].homework2 << endl;
			student[i].project = rand() % 20 + 80; cout << "Project mark : " << student[i].project << endl;
			student[i].midterm = rand() % 20 + 80; cout << "Midterm mark : " << student[i].midterm << endl;
			student[i].final = rand() % 20 + 80; cout << "Final mark : " << student[i].final << endl; cout << "\n";
			yilici = (student[i].midterm * 0.5) + (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16);
			ortalama = (yilici * 0.55) + (student[i].final * 0.45);
			Change(ortalama);
			starline();
		}
		system("pause");
	}
	if (secenek == 2) {
		char ch = 'y';

		do {
			cout << "Quiz 1(0-100)= "; cin >> quiz1;
			cout << "Quiz 2(0-100)= "; cin >> quiz2;
			cout << "Homework 1(0-100)= "; cin >> homework1;
			cout << "Homework 2(0-100)= "; cin >> homework2;
			cout << "project(0-100)= "; cin >> project;
			cout << "Midterm(0-100)= "; cin >> midterm;
			cout << "Final(0-100)= "; cin >> final; cout << "\n";

			yilici = (quiz1 * 0.07) + (quiz2 * 0.07) + (homework1 * 0.1) + (homework2 * 0.1) + (project * 0.16) + (midterm * 0.5);
			cout << "End of year mark :" << yilici << "\n" << endl;
			ortalama = (yilici * 0.55) + (final * 0.45);
			Change(ortalama);
			cout << "\nDo you want to continue? (y/n) ?"; cin >> ch;
		} while (ch != 'n');
		EXIT_SUCCESS;
	}

	int choice;
	cout << "Please choose one of them..\n";
	starline(); cout << "\n";
	cout << "If you want to print list of class partly press '1'. \n";
	cout << "If you want to print the max mark in the class press '2'\n";
	cout << "If you want to find the lowest mark in the class press '3'\n";
	cout << "If you want to see the average of class press '4'\n";
	cout << "If you want to find the standard deviation of class press '5'\n";
	cout << "If you want to see the students who's mark between 50 to 80 press '6'\n";
	cout << "If you want to see the students who's mark under for example 50 '7'\n";
	cout << "If you want to see the students who's mark high from 40 '8'\n";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Partly class list: \n";
		Case1();
		break;
	case 2:
		cout << "The highest mark in the class :\n";
		break;
	case 3:
		cout << "The lowest mark in the class:\n";
		Case3();
		break;
	case 4:
		 cout << "Class avegare mark is : \n";
		Case4();
		break;
	case 5:
		cout << "The standard deviation of class is :";
		Case5();
		break;

	}
	

}

