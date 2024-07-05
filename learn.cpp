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

#include <iostream>
using namespace std;

int main() {
	cout << "Hello\nWorld\n";  // 1 - blue color
	cout << "Hello World\n";   // 2 - orange color
	cout << "Hello" << "\n";   // 3 - purple color
	cout << "World";           // 4 - purple color
	return 0;
}

// Output

// Hello 
// World
// Hello World
// Hello
// World
