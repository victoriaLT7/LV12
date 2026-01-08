// Victoria Levacic Tkalec, 1.RM

#include <iostream>
using namespace std;

void zA();
void zB();
void zC();
void zD();
void zE();  

int main()
{
	/*zA();*/
	/*zB();*/
	/*zC();*/
	/*zD();*/
	/*zE();*/
	return 0;
}

void zA()
{
	int g, bg; cin >> g >> bg;
	for(int i = 0; i < bg; i++)
	{
			cout << "\n" << g + i << ".\tgodina\n";
			for (int k = 1; k <= 12; k++) cout << " " << k << ". mjesec\n";
	}
}

void zB()
{
	int b, n, bv; cin >> b >> n >> bv;
	for (int i = b ; i <= n; i++)
	{ 
		cout << "\nVisekratnici broja " << i << " su: ";
		for (int j = 1; j <= bv; j++) cout << j * i << ", ";
	}
}

void zC()
{
	int x1, y1, x2, y2, x3, y3; 
	cin >> x1 >> y1;
	cin >> x2 >> y2; 
	cin >> x3 >> y3;
	for (int x = 1; x <= 15; x++) 
	{
		for (int y = 1; y <= 15; y++)
		{
			if (x1 == x && y1 == y || x2 == x && y2 == y || x3 == x && y3 == y) cout << "* ";
			else cout << ". ";
		}
		cout << endl;
	}
}

void zD()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) cout << 1;
			else cout << 0;
		}
		cout << endl;
	}
}

void zE()
{
	int n;
	do 
	{
		int b = -1;
		cin >> n;
	} while (n % 2 != 1 && n < 3);
	char a = 'o';
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		a = 'o';
		for (int j = 1; j <= (n + 1) / 2; j++) 
		{
			cout << a << " ";
			if (j < i)
			{
				if (a == 'x') a = 'o';
				else a = 'x';
			}
		}
		if (i == (n + 1) / 2)
		{
			if (a == 'x') a = 'o';
			else a = 'x';
		}
		for (int j = (n - 1) / 2; j >= 1; j--)
		{
			cout << a << " ";

			if (j <= i)
			{
				if (a == 'x') a = 'o';
				else a = 'x';
			}
		}
		cout << endl;
	}
	for (int i = (n - 1) / 2; i >= 1; i--)
	{
		a = 'o';
		for (int j = 1; j <= (n + 1) / 2; j++)
		{
			cout << a << " ";
			if (j < i)
			{
				if (a == 'x') a = 'o';
				else a = 'x';
			}
		}
		for (int j = (n - 1) / 2; j >= 1; j--)
		{
			cout << a << " ";
			if (j <= i)
			{
				if (a == 'x') a = 'o';
				else a = 'x';
			}
		}
		cout << endl;
	}
}


