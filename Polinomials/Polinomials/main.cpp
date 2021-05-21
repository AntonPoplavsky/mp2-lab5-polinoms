#include "List.h"

#include "Monom.h"

int main()
{
	Polinom<float> A, B, C, D, E;
	bool decision = 1;

	while (decision)
	{
		Polinom<float> A, B, C, D, E;
		cout << "Set polinom A:  ";
		A.Input(); 
		cout << endl << "A = " << A << endl << endl;

		cout << "Set polinom B:  ";
		B.Input(); 
		cout << endl << "B =" << B << endl << endl;

		C = A + B;
		cout << "Add: A + B: " << C << endl << endl;

		D = A - B;
		cout << "Minus: A - B: " << D << endl << endl;

		E = A * B;
		cout << "Multi: ";
		if (E.Get_max_index() < 999)
		{
		cout << "A * B = " << E << endl << endl;
		}
		else
		{			
			cout << "E.max_index() > 999" << endl;
		}

		cout << "To do it again, push 1:" << endl;
		cout << "To exit the program, push 0:";
		cin >> decision;
		cout << "U have tapped: " << decision << endl << endl;
	}
}