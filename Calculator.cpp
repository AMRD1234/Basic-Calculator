#include <iostream>
#include <cmath>

// Varibles
double Input1, Input2, Mix;
char Action;
bool isValid = true;

// Functions
double Calculate(double _Input1, char _Action, double _Input2)
{
	switch(Action)
	{
		case '+':{ return(Input1 + Input2); break; }
		case '-':{ return(Input1 - Input2); break; }
		case '*':{ return(Input1 * Input2); break; }
		case '.':{ return(Input1 * Input2); break; }
		case '/':{ return(Input1 / Input2); break; }
		case '^':{ return(pow(Input1, Input2)); break; }
		default:{ std::cout << "Unidentified Action { " << Action << " }" << std::endl; isValid = false; break; }
		break;
	}
}

int main()
{
	std::cout << "Calculator" << "    V0.1\n";
	while(true)
	{
		isValid = true;
		std::cout << "Action : ";
		std::cin >> Input1 >> Action >> Input2;
		Mix = Calculate(Input1, Action, Input2);
		if(isValid)
		{
			std::cout << "Result : " << Input1 << Action << Input2 << "=" << Mix << std::endl;
		}
		std::cout << "------------ Restarting ------------\n";
	}
	return 0;
}
