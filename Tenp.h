#pragma once
template<typename Type1,typename Type2 >

class ClassTemp
{
public:
	

	Type1 a;
	Type2 b;

	ClassTemp(Type1 a, Type2 b) :a(a), b(b) {};

	Type1 Min() {
		if (a < b) {//aのほうが小さければaを返す
			return a;
		}
		else//そうじゃなければbを返す
		{
			return b;
		}
		
	}


};
