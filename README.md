# oop-exercise
virtual functions, pure virtual functions, abstract base classes.
Create an Add base class from which the Sub, Mult, and Divis classes that perform the corresponding arithmetic operations inherit with the public attribute. 
In the Add class, open variables x and y of double type, corresponding constructor, two virtual functions are declared: void show() – displaying the type of action
performed on the screen and void func() – performing the required action and not virtual: void inp() - x and y importing variable values. 
In inherited classes, virtual functions void show() and void func() are redefined, a constructor corresponding to that class is declared, which passes the necessary
arguments to the base class. Develop a main() function, where you declare a pointer to the base class, respectively an object of each class, and generally check the
operation of the program. As a result, you can get:
Execution of add operation:
Input x & y -> 5,25   8,23
	5,25 + 8,23 = 13,48
Execution of division operation:
Input x & y -> 5,25   0
Division by zero it is impossible.
9.2. Develop a project to calculate the areas of various geometric figures. The corresponding attribute class, which inherits from the Shape abstract base class,
is responsible for calculating the area of each shape. The open members of the Shape class are the double area() virtual function that calculates the area and the
void inp() pure virtual function that imports different image sizes. The rectangle (rectangular surface), circle (circular surface) and triangle (triangular surface
determined by Heron's formula) classes are inherited from the base class with the public attribute. In the main main() function, an array of class object pointers 
is declared (the size of the array is a preinterpreter constant). In the general cycle, the corresponding dimensions of the images are entered, the corresponding 
surfaces and the total surface of all images of the project are calculated.
