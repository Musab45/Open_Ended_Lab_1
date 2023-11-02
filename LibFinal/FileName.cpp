#include<iostream>
using namespace std;
int main()
{
	char main_selection;
	do
	{
		//Menu User-Interface
		int selection;
		bool isPaid = false;
		bool isIssued = false;
		cout << "\nVirtual Library" << endl;
		cout << "\n1. Borrow Book" << endl;
		cout << "2. Pay Fine" << endl;
		cout << "3. Return Book" << endl;
		cout << "\nEnter Selection: ";
		cin >> selection;
		if (selection == 1)
		{
			//Books Data
			string books[11] = { "LOL", "Silver Sky", "The Autumn Tree", "Cindrella", "The Dark Valley",
				"Catching Fire", "The Book Theif", "Paper Towns", "The Donut Trap", "The Hollow", "Second House" };

			//Interface
			cout << "\nSelect a Book:" << endl;
			cout << "1. " << books[1] << endl;
			cout << "2. " << books[2] << endl;
			cout << "3. " << books[3] << endl;
			cout << "4. " << books[4] << endl;
			cout << "5. " << books[5] << endl;
			cout << "6. " << books[6] << endl;
			cout << "7. " << books[7] << endl;
			cout << "8. " << books[8] << endl;
			cout << "9. " << books[9] << endl;
			cout << "10. " << books[10] << endl;

			//User-Input
			int n;
			cout << "\nEnter Book Index(1 - 10): ";
			cin >> n;
			cout << "You have borrowed the book: " << books[n] << endl;
			cout << "Please return the book within 7 days." << endl;
			isIssued = true;
			char selection_3;
			cout << "\nReturn Book?(y/n): ";
			cin >> selection_3;
			if (selection_3 == 'y')
			{
				int days, fine = 1;
				bool isPaid = false;
				cout << "\nEnter Days: ";
				cin >> days;
				fine = days * fine;
				if (fine <= 7)
				{
					cout << "No Fine!";
				}
				else
				{
					int over;
					char answer;
					over = fine - 7;
					cout << "Fine is " << over << "$" << endl;
					cout << "\n Pay Now?(y/n): ";
					cin >> answer;
					if (answer == 'y')
					{
						isPaid = true;
						cout << "Paid!" << endl;
						//Return inside Fine Payment
						char selection2;
						cout << "Return Book?(y/n): ";
						cin >> selection2;
						if (selection2 == 'y')
						{
							if (isPaid)
							{
								cout << "Book Returned";
							}
							else
							{
								cout << "Please pay Fine";
							}
						}
						else
						{
							cout << "Pay Fine! Please!";
						}
					}
					else
					{
						cout << "Please clear your due fine.";
					}
				}
			}
		}
		else if (selection == 2)
		{
			//FinePayment
			int days, fine = 1;
			bool isPaid = false;
			cout << "\nEnter Days: ";
			cin >> days;
			fine = days * fine;
			if (fine <= 7)
			{
				cout << "No Fine!";
			}
			else
			{
				int over;
				char answer;
				over = fine - 7;
				cout << "Fine is " << over << "$" << endl;
				cout << "\nPay Now?(y/n): ";
				cin >> answer;
				if (answer == 'y')
				{
					isPaid = true;
					cout << "Paid!" << endl;
					//Return inside Fine Payment
					char selection2;
					cout << "\nReturn Book?(y/n): ";
					cin >> selection2;
					if (selection2 == 'y')
					{
						if (isPaid)
						{
							cout << "Book Returned";
						}
						else
						{
							cout << "Please pay Fine";
						}
					}
					else
					{
						cout << "";
					}
				}
				else
				{
					cout << "Please clear your due fine.";
				}
			}
		}
		else if (selection == 3)
		{
			int days, fine = 1;
			bool isPaid = false;
			cout << "\nEnter Days: ";
			cin >> days;
			fine = days * fine;
			if (fine <= 7)
			{
				cout << "No Fine!";
			}
			else
			{
				int over;
				char answer;
				over = fine - 7;
				cout << "Fine is " << over << "$" << endl;
				cout << "\nPay Now?(y/n): ";
				cin >> answer;
				if (answer == 'y')
				{
					isPaid = true;
					cout << "Paid!" << endl;
					//Return inside Fine Payment
					char selection2;
					cout << "\nReturn Book?(y/n): ";
					cin >> selection2;
					if (selection2 == 'y')
					{
						if (isPaid)
						{
							cout << "Book Returned" << endl;;
						}
						else
						{
							cout << "Please pay Fine" << endl;
						}
					}
					else
					{
						cout << "" << endl;
					}
				}
				else
				{
					cout << "Please clear your due fine." << endl;
				}
			}
		}
		else
		{
			cout << "Wrong Entry!";
		}
		cout << "\nReturn to Menu?(y/n): ";
		cin >> main_selection;
	}while (main_selection == 'y');
}