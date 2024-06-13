#pragma once
template<typename Type1,typename Type2 >

class ClassTemp
{
public:
	

	Type1 a;
	Type2 b;

	ClassTemp(Type1 a, Type2 b) :a(a), b(b) {};

	Type1 Min() {
		if (a < b) {//a‚Ì‚Ù‚¤‚ª¬‚³‚¯‚ê‚Îa‚ð•Ô‚·
			return a;
		}
		else//‚»‚¤‚¶‚á‚È‚¯‚ê‚Îb‚ð•Ô‚·
		{
			return b;
		}
		
	}


};
