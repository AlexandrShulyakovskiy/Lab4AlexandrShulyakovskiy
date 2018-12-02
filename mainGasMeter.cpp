#include "GasMeter.h"	 // в ".h" ми оголосили, а в "cpp" ми зробили реализацию
GasMeter::GasMeter()     // конструктор по замовчуванню((это реализация методов класса))
{
	name = "CyberPunkLichilnyk";  //стандартний конструктор
	Qmax = 2.5;
	distance = 3;
	width = 2;
	length = 3;
	height = 2.5;
	releaseDay = 17;
	releaseMonth = 4;
	releaseYear = 2018;
	producerName = "Alex&Co";
}

GasMeter::GasMeter(string name, float Qmax, int distance, float width, float length, float height)  // конструктор з параметрами(это реализация методов лкасса)
{
	this->name = name;					//this - це посилання на поточний объект
	this->Qmax = Qmax;
	this->distance = distance;
	this->width = width;
	this->length = length;
	this->height = height;
}


GasMeter::~GasMeter()
{
}

string GasMeter::GetName()  //name,qmax,distance это приватные функции, я не могу достать их для вывода, поэтому делаются такие функции. То же самое и с width,length, height, которые protected
{
	return name;
}

float GasMeter::GetQmax()
{
	return Qmax;
}

int GasMeter::GetDistance()
{
	return distance;
}

float GasMeter::GetWidth()
{
	return width;
}

float GasMeter::GetLength()
{
	return length;
}

float GasMeter::GetHeight()
{
	return height;
}
