#include <string>


#pragma once
#ifdef MATHSDLL_EXPORTS
#define MATHSDLL_API __declspec(dllexport) 
#else
#define MATHSDLL_API __declspec(dllimport) 
#endif


using namespace std;

namespace MathFuncs{
		class MyMathFuncs {
		public:
			static MATHSDLL_API double eval(char *str);
			static MATHSDLL_API double number(char *str, unsigned *idx);
			static MATHSDLL_API double expr(char *str, unsigned *idx);
			static MATHSDLL_API double expr1(char *str, unsigned *idx);
			static MATHSDLL_API double term(char *str, unsigned *idx);
			static MATHSDLL_API double factor(char *str, unsigned *idx);
		};
}