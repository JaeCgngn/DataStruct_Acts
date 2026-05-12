//#include <iostream>
//using namespace std;


//int main()
//{
//	int loop_index, Scores[5];
//	Scores[0] = 92;
//	Scores[1] = 73;
//	Scores[2] = 57;
//	Scores[3] = 98;
//	Scores[4] = 89;
//	for (loop_index = 0; loop_index < 5; loop_index++)
//		cout << "Student's score: " << Scores[loop_index] << "\n";
//}


//int main()
//{
//	int i, sum, Scores[5], input[3];
//	Scores[0] = 92;
//	Scores[1] = 73;
//	Scores[2] = 57;
//	Scores[3] = 98;
//	Scores[4] = 89;
//	for (i = 0, sum = 0; i < 5; i++) {
//		sum = sum + Scores[i];
//	}
//	// sum += Scores[i];
//	cout << "Average test score: " << (float)sum / 5 << "\n";
//
//	cout << 
//}


//int main()
//{
//	int temper[7]; int day, sum;
//	for (day = 0; day < 7; day++)
//	{
//		cout << "Enter temperature for day: ";
//		cin >> temper[day];
//	}
//	sum = 0;
//	for (day = 0; day < 7; day++)
//		sum += temper[day]; 
// 
//  cout << "Average is" << sum / 7 << endl;
//}


//int main() 
//{
//	int value[3], sum, order;
//
//	for (order = 0; order < 3; order++) 
//	{
//		cout << "Enter a Value: ";
//		cin >> value[order];
//	}
//
//	sum = 0;
//
//	for (order = 0; order < 3; order++)
//	{
//		sum += value[order]; 
//	}
//
//	cout << "The sum is " << sum << endl;
//		
//}


//int main() 
//{
//	int arr[3][3] = { {2, 4, 5}, { 1, 8, 6}, {1, 1, 9} };
//
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j) 
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//int arr[] = { 1, 2, 3, 4, 5 };
//int length = sizeof(arr) / sizeof(int);
//
//int main()
//{
//	cout << "The size of the array is " << length << "\n";
//	cout << "The number of bytes in the array is " << sizeof(arr) << "\n";
//}




//
//int main()
//{
//	int studentsNum, subjectsNum, grade;
//
//	cout << "Enter the number of students: ";
//	cin >> studentsNum;
//
//	cout << "Enter the number of subjects: ";
//	cin >> subjectsNum;
//
//	string name[5], subjects[4];
//	int grades[5][4];
//	int total[5] = { 0 };
//	float average[5];
//
//
//	for (int i = 0; i < studentsNum; i++)
//	{
//		cout << "\nEnter name of student: ";
//		cin >> name[i];
//
//		for (int j = 0; j < subjectsNum; j++)
//		{
//			cout << "\nEnter name of subject: ";
//			cin >> subjects[j];
//
//			cout << "Enter grade of this subject: ";
//			cin >> grades[i][j];
//			total[i] += grades[i][j];
//		}
//		average[i] = (float)total[i] / subjectsNum;
//	}
//
//	//display
//	cout << "\n!Student Grades!" << endl;
//
//	for (int i = 0; i < studentsNum; i++)
//	{
//		cout << "\nStudent " << name[i] << " ";
//
//		for (int j = 0; j < subjectsNum; j++)
//		{
//			cout << grades[i][j] << " ";
//		}
//
//		cout << "total: " << total[i] << " ";
//		cout << "Average: " << average[i] << " ";
//	}
//
//	//highest
//	int topAverage = 0;
//	for (int i = 1; 1 < studentsNum; i++)
//	{
//		if (average[i] > average[topAverage])
//		{
//			topAverage = i;
//		}
//	}
//	cout << "\nTOP STUDENT: " << name[topAverage] << endl;
//
//
//}



