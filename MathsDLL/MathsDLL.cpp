
#include "stdafx.h"
#include "iostream"
#include "string"
#include <stdio.h>
#include <cmath>
#include "MathsDll.h"
#include <windows.h>

using namespace std;

namespace MathFuncs
{

 double MyMathFuncs::eval(char *str)
{
	unsigned i = 0;

	return expr(str, &i);
}

double MyMathFuncs::number(char *str, unsigned *idx)
		 {
			 double result = 0.0;
			 double div = 10.0;
			 int sign = 1;

			 if (str[*idx] == '-')
			 {
				 sign = -1;
				 ++*idx;
			 }

			 while (str[*idx] >= '0' && str[*idx] <= '9')
			 {
				 result = result * 10.0 + (str[*idx] - '0');

				 ++*idx;
			 }

			 if (str[*idx] == '.')
			 {
				 ++*idx;

				 while (str[*idx] >= '0' && str[*idx] <= '9')
				 {
					 result = result + (str[*idx] - '0') / div;
					 div *= 10.0;

					 ++*idx;
				 }
			 }
			 return sign * result;
		 }

double MyMathFuncs::expr(char *str, unsigned *idx)
		 {
			 double result = expr1(str, idx);

			 while (str[*idx] == '+' || str[*idx] == '-')
			 {
				 switch (str[*idx])
				 {
				 case '+':
					 ++*idx;

					 result += expr1(str, idx);

					 break;
				 case '-':
					 ++*idx;

					 result -= expr1(str, idx);

					 break;
				 }
			 }

			 return result;
		 }

double MyMathFuncs::expr1(char *str, unsigned *idx)
		 {
			 double result = term(str, idx);

			 while (str[*idx] == '^' || str[*idx] == '√' || (str[*idx] == 'E'))
			 {
				 switch (str[*idx])
				 {
				 case '^':
					 ++*idx;

					 result = pow(result, term(str, idx));

					 break;
				 case '√':
					 ++*idx;

					 result = result + sqrt(term(str, idx));

					 break;
				  case 'E':
					  ++*idx;

					  result = result * pow(10, term(str, idx));

					
				 }
			 }
			 return result;
		 }

double MyMathFuncs::term(char *str, unsigned *idx)
		 {
			 double result = factor(str, idx);
			 double div;

			 while (str[*idx] == '*' || str[*idx] == '/')
			 {
				 switch (str[*idx])
				 {
				 case '*':
					 ++*idx;

					 result *= factor(str, idx);

					 break;
				 case '/':
					 ++*idx;

					 div = factor(str, idx);


					 if (div == 0.0) {
						 throw std::overflow_error("Divide by zero exception!");
					 }
					 else result /= div;
					
					 break;
				 }
			 }
			 return result;
		 }

double MyMathFuncs::factor(char *str, unsigned *idx)
		 {
			 double result;
			 int sign = 1;

			 if (str[*idx] == '-')
			 {
				 sign = -1;

				 ++*idx;
			 }



			 if (str[*idx] == '(')
			 {
				 ++*idx;

				 result = expr(str, idx);

				 ++*idx;
			 }
			 else
				 result = number(str, idx);

			 if (str[*idx] == '^')
			 {
				 ++*idx;

				 result = pow(result, factor(str, idx));
			 }

			 if (str[*idx] == '√')
			 {
				 ++*idx;

				 result = result + sqrt(factor(str, idx));
			 }

			 if (str[*idx] == 'E')
			 {
			 ++*idx;
				 if (str[*idx] == '+')
				 {
					 ++*idx;
					 result = result * pow(10, term(str, idx));
				 }
				 if (str[*idx] == '-')
				 {
					 ++*idx;
					 result = result / pow(10, term(str, idx));
				 }
				 

				

				
			 }

			 return sign * result;
		 }

}