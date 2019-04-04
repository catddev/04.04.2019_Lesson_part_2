#include"Circle.h"
#include"menu.h"

int main() {
	srand(time(NULL));
	
	Circle c(3, 4, 10);
	c.print();

	menu(c);

	system("pause");
}
