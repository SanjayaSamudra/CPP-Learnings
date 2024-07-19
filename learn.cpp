//#-------------------------------------------------C++ user output--------------------------------------------------------------#

// intstance - 01

/*#include <iostream>
using namespace std;

int main() {
	cout << "Hello World";
	return 0;
}*/

// Important facts regarding this simple code

// 1. #include <iostream> 
//			Refers to as Header file. 
//			This code gives the user to use input, output operations to carry out.
// 			Header consider as a not statement, so no semicolon(;) at the end.

// 2. using namespace std;
//			Use names for objects & variables from the standard library.
//			Basically that means 'namespace' provide scope for identifiers (like variables, objects etc).
//          Basically 'std' means standard, contains standard C++ library components.

// A free newline given there is to make our code clean & nice. No specific task there.

// 3. int main() {}
//			Here 'int' means, return type. In this case it says to return integers.
//			Here 'main()' refers to main function in the given code. Present of main function 'main()' is a must and you cannot change it.
//			Here function body start with the opening bracket of curly brackets ({) and ends with closing bracket of curly bracket (}).   

// 4. cout << "Hello World";
//			Here 'cout; refers to character output.
//			'<<' refers the insertion operator.
//			So all together cout with insertion operator (<<) followed with double quotes ("") end with semicolon (;) is the complete code.
//			Within the double quotes we are including what needs to be printed out.

// 5. return 0;
//			This confirms that main function executed successfully.
//			Though above line is a statement, we have to end that line with semicolon(;).

//===============================================================================================================================================

//---------------------------------------------namespace omitting-----------------------------------------------------

// intstance - 02

/*#include <iostream>
//using namespace std;  // commented out this line

int main() {
	std :: cout << "Hello";
	return 0;
}*/

// This code executes perfectly. Prints "Hello" on the console.
// Without using 'using namespace std;' through that method I can use the standard library.

//================================================================================================================================================

//---------------------------------Difference of executing above two instances ( 1 & 2 )--------------------------------

//When executing instance 1, it loads all the components in the 'std' namespace into our file.
//Seams to be convenience in a way but can cause conflicts in larger projects.

//When executing instance 2, it loads/brings only specific component/name what we are asking, in this case it is cout.
//More convenience when working on a large project to avoid conflicts.

//================================================================================================================================================

//------------------------------------------Moving to newline----------------------------------------------

/* #include <iostream>
using namespace std;

int main() {
	cout << "Hello\nWorld\n";  // 1 - blue color
	cout << "Hello World\n";   // 2 - orange color
	cout << "Hello" << "\n";   // 3 - purple color
	cout << "World";           // 4 - purple color
	return 0;
} */

// Output

// Hello 
// World
// Hello World
// Hello
// World

//================================================================================================================================================

//--------------------------------------Manipulator------------------------------------

// In here I'm gonna use 'endl' manipulator. Let's see how it works.

/* #include <iostream>
using namespace std;

int main() {
	cout << "Hello" << endl;		// 1 - color blue
	cout << "Hello World" << endl;	// 2 - color orange
	cout << "Hello";				// 3 - color purple
	cout << "World";				// 4 - color purple
	return 0;
} */

// Output

// Hello
// Hello World
// HelloWorld

// So basically what 'endl' do is, it is ending the line after the content has been printed out. So the next content always begin with new line.

//================================================================================================================================================

//-------------------------------C++ variables---------------------------

// There are different types of variables of different data types.

// 1. int - store integers without decimals
//				ex:- int x = 12;
// 2. double - stores floating point numbers with decimals
//				ex:- double y = 12.12;
// 3. char - stores single character
//				ex:- char z = 'a';
// 4. string - stores a text
//				ex:- string k = "Hello"; , string l = "1234";
// 5. bool - boolean ( stores true or false )
//				ex:- bool m = true; , bool n = false;

//----------------------------Creating Variables-----------------------

// Syntax used in when declaring a variable.
//		dataType variableName = value ;

// Ex:-

/* #include <iostream>
using namespace std;

int main() {
	
	// Variable initialization with values.
	int x = 12;
	double y = 12.12;
	string z = "Hello";
	bool k = true;
	bool m = false;
	char n = 'a';
	char p = 'A';
	
	// Print out the variables.
	cout << x << endl; // prints 12
	cout << y << endl; // prints 12.12
	cout << z << endl; // prints Hello
	cout << k << endl; // prints 1
	cout << m << endl; // prints 0
	cout << n << endl; // prints a
	cout << p << endl; // prints A
	
}  */

// Reminder
//		string values are mention within double quotes(" ").
//		character (char) values are stored within the single quotes(' ').
//		for true values 1 is printed. Not "true", remember it. Same goes for "false" as well.
//		When printing variables remember not to put double quotes, then it become just a string.

//-------------------------variable initialization------------------------

/* #include <iostream>
using namespace std;

int main() {
	
	// This is variable initialization
	int x;
	int num;
	
	double y;
	double salary;
	
	string z;
	string name;
	
	bool k;
	bool isTrue;
	
	char m;
	char character;
	
	// Assigning values to above variables.
	x = 12;
	num = 21;
	
	y = 12.12;
	salary = 21.21;
	
	z = "Hello";
	name = "Kamal";
	
	k = true;
	isTrue = false;
	
	m = 'a'
	character = 'A';
} */

//--------------------------Methods of declaring variables-------------------

/* #include <iostream>
using namespace std;

int main() {
	
	// Method - 1
	int x = 5;
	int y = 6;
	int z = 7;
	
	// Method - 2 (comma seperated can be use to declare variables of same dataType)
	int x  = 5, y = 6, z = 7;
} */

//-------------Assigning same value to the multiple variables---------------

/* #include <iostream>
using namespace std;

int main() {
	
	// Method of initialization same dataType variables.
	int x, y, z;
	
	x = y = z = 5; // Means x = 5, y = 5, z = 5.
} */

//--------------------Changing the value of the varaible---------------------

/* #include <iostream>
using namespace std;

int main() {
	
	int x = 1, y = 2, z = 3;
	
	cout << x << endl;  // prints 1
	cout << y << endl;	// prints 2
	cout << z << endl;	// prints 3
	
	x = 21; // Assigning 21 to the varaiable x by replacing it's previous value.
	y = 22;	// Assigning 22 to the varaiable y by replacing it's previous value.
	z = 23;	// Assigning 23 to the varaiable z by replacing it's previous value.
	
	cout << x << endl;	// prints 21
	cout << y << endl;	// prints 22
	cout << z << endl;	// prints 23
	
} */

//-------------------------Constant variables--------------------------------

// Here constant means value of that specific variable cannot be change later while we move on. ( like value of "pi", which cannot be change )

/* #include <iostream>
using namespace std;

int main() {
	
	const double pi = 3.14;	// compiler this refered to as a 'read-only-varaiable'
	cout << pi << endl;	// prints 3.14
	
	//pi = 3.15;	// compiler gives an error mentioning that this is a 'read-only-varaiable'
	cout << pi << endl; // prints 3.14
	
	// In this case you can't complile the file the with this error. Need to remove it or make sure to comment it out.
	
} */

//==============================================================================================================================================

//#-----------------------------------------------------C++ user input--------------------------------------------------------------#

// cin - to get user input 
//	   - reads data from the keyboard

/* #include <iostream>
using namespace std;

int main() {
	
	int x;
/* 	cin >> x; // Gives you a chance to input a value from keyboard.
	
	// Instance - 1
	int num;
	cout << "Enter a number : " << endl;
	cin >> x;
	
	// Instance - 2
	cout << "Enter a number : ";
	cin >> x;*/
	
} */

// Outputs

// Instance - 1
// Enter a number :
// "Key board input" <- we get chance to input value for x after the cout.

// Instance - 2
// Enter a number : "Key board input" <- Here we get the chance to input the value of x in same line.

//===================================================================================================

//-------------------------------C++ Functions----------------------------

/* #include <iostream>
using namespace std;

int main(){
	int x = 5;
	cout << "The size of the integer " << x << " is, " << sizeof(x) << endl; // prints -> The size of the integer 5 is, 4
	
	double y = 5.75;
	cout << "The size of double " << y << " is, " << sizeof(y) << endl; 	 // prints -> The size of the double 5.75 is, 8
	
	float z = 5.75;
	cout << "The size of float " << z << " is, " << sizeof(z) << endl; 		 // prints -> The size of the float 5.75 is, 4
} */

// Here, size of an integer given with bytes, that means 4 bytes which is 32 bits.( 1 byte = 8 bits ) 
// Here, size of a double given with bytes, that means 8 bytes which is 64 bits.( 1 byte = 8 bits ) 
// Here, size of a float given with bytes, that means 4 bytes which is 32 bits.( 1 byte = 8 bits ) 

//=========================================================================================================================================

//-----------------------------C++ Operators------------------------------

//Types of operators
//		1. Arithmetic Operators
//		2. Assignment Operators
//		3. Comparison Operators
//		4. Logical Operators
//		5. Bitwise Operators

//------------Arithmetic Operators----------

//	+	-> Arithmetic Addition
//	-	-> Arithmetic Subtraction
//	*	-> Arithmetic Multiplication
//	/	-> Arithmetic Division
//	%	-> Arithmetic Modulus
//	++	-> Increment
//	--	-> Decrement

#include <iostream>
using namespace std;

int main(){
	int x = 15;
	
	cout << x++ << endl; // prints 15
	cout << x-- << endl; // prints 16
	
	cout << ++x << endl; // prints 16
	cout << --x << endl; // prints 15
	return 0;
}

// Let's walk through each of line one by one.
//			x++	-> value got incremented but prints old value
//						Ex:- x = 15, in this case x got incremented but prints 15.
//								But if we again print x it will give 16. 

// 			++x -> value got incremented and prints the incremented value at the same time.
//						Ex:- x = 15, here if we give ++x. Then it will print out 16.
//							In this case if we print out x again it will give the same result that is 16. Because it already got incremented.









