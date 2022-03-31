#include <iostream>
#include <string>

using namespace std;

class Math1
{
		public:
			bool isEven(int number)
			{
				bool result = false;
				if(number %2 == 0)
				{
					result = true;
				}
				return result;
			}
			
		int factorial(int n)
		{
			int result = 1;
			for(int i = 1; i<=n; i++)
			{
				result = result*i;
			}
			return result;
		}

		double estimateEulerNumber(int numLoops)
		{
			double result =1.0;
			for(int i=1; i<=numLoops; i++)
			{
				result = result + 1.0/factorial(i);
			}
			return result;
		}

};
int main()
{
	Math1 m1;
	cout << "Factorial(4) is " << m1.factorial(4) << endl;
	cout << "is EvenNumber(4) is " << 	m1.isEven(4) << endl;
	cout << "Euler Number is " << m1.estimateEulerNumber(10) << endl;
	return 0;
}
