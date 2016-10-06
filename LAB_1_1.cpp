#include <iostream>
#include <math.h>
#include <stdlib.h>
//Îïðåäåëèòü çíà÷åíèå y ïðè ââîäèìîì x äëÿ óðàâíåíèÿ y = sqrt(x^2 - 2*x-7) / ((x-15)*(x^3 - 1)).
void main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");
	int x;
	double y;
	cout << "Ââåäèòå õ=";
	cin >> x;
	if ((x >= -2) && (x <= 4) || (x == 15))
		printf_s("Ââåä¸ííûé õ íå ïðèíàäëåæèò ÎÄÇ!\n");
	else
	{
		y = sqrt(pow(x, 2) - 2*x-7) / ((x-15)*(pow(x, 3) - 1));
		printf("\ny=%f",y);
	}
	system("pause");
}
