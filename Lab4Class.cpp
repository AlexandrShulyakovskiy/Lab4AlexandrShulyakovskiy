#include <iostream>
#include <string>     //подключил библиотеку для стринга
#include "GasMeter.h"
using namespace std;

int main()
{
	GasMeter LichylnukSashyn("DotaLichilnyk",3,5,3,2,3), LichylnukNastyn, LichylnukVovyn;    //инициализация в main шести объектов("sasynlichilnyk" використовуе конструктор з параметрами) // використовуе стандартний конструктор("lychilnik nastin","lychilnik vovin")
	cout << "Name for Sasha = " << LichylnukSashyn.GetName() << endl;
	cout << "Qmax for Sasha = " << LichylnukSashyn.GetQmax() << endl;
	cout << "Distance for Sasha = " << LichylnukSashyn.GetDistance()  << endl;
	cout << "Width for Sasha = " << LichylnukSashyn.GetWidth() << endl;
	cout << "Length for Sasha = " << LichylnukSashyn.GetLength() << endl;
	cout << "Height for Sasha = " << LichylnukSashyn.GetHeight() << endl;
	cout << endl;
	cout << "Name for Nastya = " << LichylnukNastyn.GetName() << endl;
	cout << "Qmax for Nastya = " << LichylnukNastyn.GetQmax() << endl;
	cout << "Distance for Nastya = " << LichylnukNastyn.GetDistance() << endl;
	cout << "Width for Nastya = " << LichylnukNastyn.GetWidth() << endl;
	cout << "Length for Nastya = " << LichylnukNastyn.GetLength() << endl;
	cout << "Height for Nastya = " << LichylnukNastyn.GetHeight() << endl;
	cout << endl;
	cout << "Name for Vova = " << LichylnukVovyn.GetName() << endl;
	cout << "Qmax for Vova = " << LichylnukVovyn.GetQmax() << endl;
	cout << "Distance for Vova = " << LichylnukVovyn.GetDistance() << endl;
	cout << "Width for Vova = " << LichylnukVovyn.GetWidth() << endl;
	cout << "Length for Vova = " << LichylnukVovyn.GetLength() << endl;
	cout << "Height for Vova = " << LichylnukVovyn.GetHeight() << endl;

	getchar();
}