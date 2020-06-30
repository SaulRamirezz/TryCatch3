#include <iostream>
using namespace std;

int main()
{
	try
	{
		int a = 4;
		a = 'e';
		if (a != 4) {
			throw "Si lo declaraste int no puedes asignarle un caracter como valor";
		}
	}
	catch (const char* exception)
	{
		cout << exception << endl;
	}

	return 0;
}
