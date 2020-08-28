#include <iostream.h>
struct fractie
{
	int nu, nm;
} a, b, c;
void afisare(fractie e)
{
	cout << " " << e.nu << "\n----\n " << e.nm << "\n\n";
}
void main()
{
	int ok, aux;
	cout << "Numitorul fractiei 1 : ";
	cin >> a.nu;
	cout << "Numaratorul fractiei 1 : ";
	cin >> a.nm;
	cout << "Numitorul fractiei 2 : ";
	cin >> b.nu;
	cout << "Numaratorul fractiei 2 : ";
	cin >> b.nm;
	cout << "\n\nINMULTIRE : \n";
	c.nu = a.nu * b.nu;
	c.nm = a.nm * b.nm;
	afisare(c);
	cout << "IMPARTIRE : \n";
	c.nu = a.nu * b.nm;
	c.nm = a.nm * b.nu;
	afisare(c);
	cout << "ADUNARE : \n";
	do
	{
		ok = 1;
		if (a.nm == b.nm)
		{
			c.nu = a.nu + b.nu;
			c.nm = a.nm;
			afisare(c);
		}
		else
		{
			ok = 0;
			aux = a.nm;
			b.nu = b.nu * a.nm;
			a.nu = a.nu * b.nm;
			a.nm = a.nm * b.nm;
			b.nm = b.nm * aux;
		}
	} while (ok == 0);
	cout << "SCADERE : \n";
	do
	{
		ok = 1;
		if (a.nm == b.nm)
		{
			c.nu = a.nu - b.nu;
			c.nm = a.nm;
			afisare(c);
		}
		else
		{
			ok = 0;
			aux = a.nm;
			b.nu = b.nu * a.nm;
			a.nu = a.nu * b.nm;
			a.nm = a.nm * b.nm;
			b.nm = b.nm * aux;
		}
	} while (ok == 0);
}
