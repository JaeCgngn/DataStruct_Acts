//#include <cstring>
//#include <iostream>
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//int main()
//{
//	char username[50];
//	char password[50];
//
//	char validUsername[] = "admin";
//	char validPassword[] = "12345";
//
//	string tryAgain;
//
//	cout << "Enter Username: ";
//	cin >> username;
//
//	cout << "Enter Password: ";
//	cin >> password;
//
//	if (strcmp(username, validUsername) == 0)
//	{
//		cout << "\nAccess Granted!";
//		return 0;
//	}
//
//	else
//	{
//		cout << "\nInvalid Username or Password.";
//		cout << "\nTry Again? (y/n): ";
//		cin >> tryAgain;
//		cout << endl;
//		if (tryAgain == "y")
//		{
//			main();
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}