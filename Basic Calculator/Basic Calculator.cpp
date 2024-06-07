#include <iostream.h>
double add(double a, double b) {
	return a + b;
}
double subtract(double a, double b) {
	return a - b;
}
double multiply(double a, double b) {
	return a * b;
}
double divide(double a, double b) {
	if (b != 0) {
			return a / b;
		} else {
			cout << "Error: Division by zero!" <<endl;
			return 0;
		}
}
int Factorial(int a) {
	if ( a == 0 || a == 1){
			return 1;
		}else{
			return a * Factorial(a - 1);
		}
}
bool primenum(int a) {
	if (a <= 1){
			return false;
		}
	for (int i=2; i*i <= a; ++i){
			if (a % i == 0){
					return false;
				}
		}
	return true;
}
int main() {
	char operation,Achk,Bchk;
	double operand1, operand2,Fact,prime;
	cout<< "==============================\n";
	cout<< "   WELCOME TO MY CALCULATOR\n";
	cout<< "==============================";
	do {
			Achk='n';
			Bchk='n';
			cout<< "\nFor Addition press 'a'\n";
			cout<< "For Subtraction press 's'\n";
			cout<< "For Multiplication press 'm'\n";
			cout<< "For Division press 'd'\n";
			cout<< "For Factorial press 'f'\n";
			cout<< "To check if a number is prime number press 'p'\n";
			cout<< "================================================\n";
			cin >> operation;
			switch (operation) {
				case 'a':
					cout << "You have choosed Addition\n";
					cout<<"===========================\n";
					while (Achk == 'n'){
							cout << "\nEnter the first operands: ";
							cin >> operand1;
							cout << "Enter the second operands: ";
							cin >> operand2;
							cout << "The Result is: " << add(operand1, operand2) << endl;
							cout << "\npress 'y' to return to main menu or press any key to continue in Addition: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
				case 's':
					cout << "You have choosed Subtraction\n";
					cout<<"==============================\n";
					while (Achk == 'n'){
							cout << "\nEnter the first operands: ";
							cin >> operand1;
							cout << "Enter the second operands: ";
							cin >> operand2;
							cout << "The Result is: " << subtract(operand1, operand2) << endl;
							cout << "\npress 'y' to return to main menu or press any key to continue in Subtraction: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
				case 'm':
					cout << "You have choosed Multiplication\n";
					cout<<"=================================\n";
					while (Achk == 'n'){
							cout << "\nEnter the first operands: ";
							cin >> operand1;
							cout << "Enter the second operands: ";
							cin >> operand2;
							cout << "The Result is: " << multiply(operand1, operand2) << endl;
							cout << "\npress 'y' to return to main menu or press any key to continue in Multiplication: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
				case 'd':
					cout << "You have choosed Division\n";
					cout<<"===========================\n";
					while (Achk == 'n'){
							cout << "\nEnter the first operands: ";
							cin >> operand1;
							cout << "Enter the second operands: ";
							cin >> operand2;
							cout << "The Result is: " << divide(operand1, operand2) << endl;
							cout << "\npress 'y' to return to main menu or press any key to continue in Division: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
					\
				case 'f':
					cout << "You have choosed Factorial\n";
					cout<<"============================\n";
					while (Achk == 'n'){
							cout << "Enter the number: ";
							cin >> Fact;
							cout << "Factorial of "<< Fact <<" is: " << Factorial(Fact) << endl;
							cout << "\npress 'y' to return to main menu or press any key to continue in Factorial: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
				case 'p':
					cout << "You have choosed check for prime number \n";
					cout<<"==========================================\n";
					while (Achk == 'n'){
							cout << "Enter the number: ";
							cin >> prime;
							if (primenum(prime)){
									cout << prime << " is a prime number." << endl;
								}else{
									cout << prime << " is not a prime number." << endl;
								}
							cout << "\npress 'y' to return to main menu or press any key to continue in Factorial: ";
							cin >> Bchk;
							cout << "------------------------------------------------------------------------------\n";
							if (Bchk == 'y'){
									Achk='y';
								}
						}
					break;
				default:
					cout << "Error: Invalid operation!" << endl;
					break;
				}
		}while (Achk=='y');
	return 0;
}

