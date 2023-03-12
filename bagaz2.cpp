/* Program prosi o podanie 3 liczb: wymiarów bagażu w cm.
   I na podstawie tych wymiarów ocenia czy bagaż spełnia normę.

   * żaden z wymiarów nie może przekraczać 50 cm
   * objętość nie może przekraczać 50 tys cm³
*/

#include <iostream>

int main()
{
	unsigned int a, b, c;
	std::cout << "Podaj trzy wymiary bagażu (długość, szerokość, wysokość):\n";
	std::cin >> a >> b >> c;
	
	// Zapiszemy wszystko w jednym warunku i będzie to warunek "negatywny" (spr. czy jest źle)
	
	if(a >= 50 || b >= 50 || c >= 50 || a*b*c >= 50000) {
		std::cout << "Bagaż nie spełnia normy\n";
	} else {
		std::cout << "Bagaż spełnia normę\n";
	}
	
	return 0;
}

