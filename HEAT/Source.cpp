#include <iostream>

class Heat {//source class
public:
	double num;//declearing num.
	void Kelvin() {//function for changing the haet from Celsius to Kelvin.
		std::cout << "Enter the value: ";
		std::cin >> num;//input from the user.
		std::cout << num + 273.15 << "K\n\a";// \a is for alarm sound.
	}
	void fahrenheit() {//function for changing the haet from Celsius to fahrenheit.
		std::cout << "Enter the value: ";
		std::cin >> num;//input from the user.
		std::cout << (num * 1.8) + 32 << "F\n\a";// \a is for alarm sound.
	}
	void CelsiusF() {//function for changing the haet from fahrenheit to Celsius.
		std::cout << "Enter the value: ";
		std::cin >> num;//input from the user.
		std::cout << (num - 32) / 1.8 << "C\n\a";// \a is for alarm sound.
	}
	void CelsiusK() {//function for changing the haet from Kelvin to Celsius.
		std::cout << "Enter the value: ";
		std::cin >> num;//input from the user.
		std::cout << num - 273.15 << "C\n\a";// \a is for alarm sound.
	}
};
void options() {//function for showing options on the console.
	std::cout << "\t>HEAT Measurement<\n";
	std::cout << "Press 1 to caculate Celsius to Kelvin\n";
	std::cout << "Press 2 to caculate Celsius to fahrenheit\n";
	std::cout << "Press 3 to caculate fahrenheit to Celsius\n";
	std::cout << "Press 4 to caculate Kelvin to Celsius\n";
	std::cout << "Press 0 to EXIT\n";
}
int main()
{
	system("color 4");//set screen colour to RED.
	Heat HEAT;//naming the class a unique name.
	int opt;
	do {
		options();
		std::cin >> opt;//input from the user.
		switch (opt) {//switching options.
		case 1:
			HEAT.Kelvin();//invoke the function.
			break;
		case 2:
			HEAT.fahrenheit();//invoke the function.
			break;
		case 3:
			HEAT.CelsiusF();//invoke the function.
			break;
		case 4:
			HEAT.CelsiusK();//invoke the function.
			break;
		case 0:
			std::cout << "GoodBye ^_^\a";//if the user chosen to EXIT.  // \a for alarm sound.
			break;
		default:
			std::cout << "invalid selection, please try again ^_^\n\a";
			break;
		}
	} while (opt != 0); //if the user entered 0 the program will EXIT.

	return 0;
}
