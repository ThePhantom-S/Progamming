#include<iostream>
#include<string>
using namespace std;

int main(){
	int a = 10;		//integer datatype size - 4 byte (Primitive Datatype)
	short b = 5;		//short size - 2 byte (Primitive Datatype)
	double c = 15;		//double size - 8 byte (Primitive Datatype)
	float d = 10.1234f;	//float size - 4 byte (Primitive Datatype)
	bool e = true;		//boolean size - 1 byte (Primitive Datatype)
	char f = 'a';		//character size - 1 byte (Primitive Datatype)
	string str =  "Hari";
	
	auto g = 100;		//auto keyword will automatically initialize variable to the datatype of its value.

	cout << "Integer : " << a << '\n';
	cout << "Short : " << b << '\n';
	cout << "Double : " << c << '\n';
	cout << "Float : " << d << '\n';
	cout << "Boolean : " << e << '\n';
	cout << "Character : " << f << '\n';
	cout << "String : " << str << '\n';


	return 0;
}

