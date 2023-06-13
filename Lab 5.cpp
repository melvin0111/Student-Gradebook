
#include <iostream>
#include <vector>
#include <iomanip> 
#include <string>


using namespace std;

int main()
{
	vector <string> names; 
	vector <vector<double>> grades;
	vector <double> temp;
	double num;
	string name[5];
	double rowtotal = 0;


	for (int r = 0; r < 5; r++)
	{
		cout << "\nEnter Student # " << r + 1 << " Name: ";
		getline(cin, name[r]);
		for (int c = 0; c < 5; c++)
		{
			cout << "\nEnter Student Grade " << (c+1) << " === > ";
			cin >> num;
			temp.push_back(num);
			cin.ignore();
		}
		grades.push_back(temp);
		temp.clear();
	}
	cout << setw(20) << "\t" << "Grade 1" << "\t" << "Grade 2" << "\t" << "Grade 3" << "\t" << "Grade 4" << "\t" << "Grade 5" << "\t" << "Average" << endl;
	cout << fixed << setprecision(2);
	for (int r = 0; r < 5; r++) {
		cout << left << setw(20) << name[r] << "\t";
		for (int c = 0; c < 5; c++) {
			cout << grades[r][c] << "\t";
			rowtotal += grades[r][c];

		}
		rowtotal = rowtotal / 5;
		cout << rowtotal;
		rowtotal = 0;
		cout << endl;
	}
}
