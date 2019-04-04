#include "Circle.h"
#include"menu.h"

void menu(Circle c)
{
	double x, y, value;
	Circle c1(c);//copy for test (case 4)
	Circle a(3, 4, 20);

	while (true) {
		int choice;
		cout << " Enter 1 to move the circle" << endl;
		cout << " Enter 2 to change size of the circle " << endl;
		cout << " Enter 3 to define length of the circle" << endl;
		cout << " Enter 4 to compare 2 circles" << endl;
		cout << " Enter 5 to print out information" << endl;
		cout << " Enter 0 exit" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			cout << "Enter x and y: ";
			cin >> x >> y;
			c.move(x, y);
			c.print();
			break;
		case 2:
			cout << "Enter value to change radius: ";
			cin >> value;
			c.changeRadius(value);
			c.print();
			break;
		case 3:
			cout << "the length is: ";
			cout << c.len() << endl;
			break;
		case 4:
			c1.print();
			c.isEqual(c1);

			cout << endl;
			a.print();
			c.isEqual(a);
			break;
		case 5:
			c.print();
			break;
		}
	}
}