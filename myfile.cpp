#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void variableFunction()
{
    //Stores whole numbers without any decimals
    int whole_number = 15;
    
    //Stores numbers with decimals to 7 digits
    float float_number = 1.1234567;
    
    //Stores numbers with decimals to 15 digits
    double double_number = 1.123456789123456;
    
    //Stores a single character
    char single_character = 'A';
    
    //Stores text
    string hello = "Hello World! I am Justin McMullens";

    //Holds the value of true or false
    bool true_or_false = true;

    cout << "Variables" << endl
         << "Int: " << whole_number << endl
         << "Float: " << float_number << endl
         << "Double: " << double_number << endl
         << "Char: " << single_character << endl
         << "String: " << hello << endl;

}

void expressionsFunction()
{
    //Declare and set variables equal to something
    int a = 4;
    int b = 2;

    //Addition
    a + b;
    //Subtraction
    a - b;
    //Multiplication
    a * b;
    //Division(if solution is not a whole number, int's will be rounded down)
    a / b;
    
    //True if a is greater than b
    a > b;
    //True if a is greater than or equal to b
    a >= b;
    //True if a is less than b
    a < b;
    //True if a is less than or equal to b
    a <= b;
    
    //True if a is equal to b
    a == b;
    //True if a is not equal to b
    a != b;
    
    //Multiply 2 and a then add 1
    2 * a++;
    //Add 1 to a then multiply by 2
    2 * ++a;
    
    //True is c is false
    !a;
    //True is a does not equal b
    a != b;
    //True is a and b are true
    a && b;
    //True if a or b are true
    a || b;
    
    //Add 5 to variable a and set a equal to the new value
    a += 5;
    //Subtract 5 to variable a and set a equal to the new value
    a -= 5;
    //Multiple variable a by 5 and set a equal to the new value
    a *= 5;
    //Divide variable a by 5 and set a equal to the new value
    a /= 5;
}

void conditionalsFunction()
{
    cout << endl << "Conditionals";

    int a = 4;
    int b = 2;

    //if, else if, else statements
    cout << endl << "If, Else If and Else Conditional Statements" << endl;
    //Check if the code in the parentheses is true, if so execute the code in the brackets
    if (a < b)
    {
        //Tell it to do something
        cout << "a is less than b" << endl;
    }
    //If the first if was not true check if the code in these parentheses is true, if so execute the code in the brackets
    //*Note* you can have as many "else if" conditionals as you want
    else if (a > b)
    {
        //Tell it to do something
        cout << "a is greater than b" << endl;
    }
    //If none of the if or else if conditionals are true, it will automatically run the else statement
    else
    {
        //Tell it to do something
        cout << "a is equal to b" << endl;
    }

    int day = 3;

    cout << endl << "Switch Conditional Statement" << endl;
    //Use a switch statement to run a specific bolock of code baseedd of a variable or expression
    //Check what the value of the day is
    switch (day) 
    {
        //If the value is one, display Monday
        case 1:
            cout << "Monday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is two, display Tuesday
        case 2:
            cout << "Tuesday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is three, display Wednesday
        case 3:
            cout << "Wednesday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is four, display Thursday
        case 4:
            cout << "Thursday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is five, display Friday
        case 5:
            cout << "Friday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is six, display Saturday
        case 6:
            cout << "Saturday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //If the value is seven, display Sunday
        case 7:
            cout << "Sunday" << endl;
            break;  //Break tells the program to stop executing more code from this switch block of code
        //default will run if there is no other match from the cases above it
        default:
            cout << "Not a valid number" << endl;
    }
}

void loopFunction()
{
    int x = 5;

    cout << endl << "While Loop" << endl;
    while (x > 0)
    {
        cout << x << endl;
        x--;
    } 

    int y = 4;

    cout << endl << "Do While Loop" << endl;
    do
    {
        cout << y << endl;
        y--;
    } while (y > 0);
    
    cout << endl << "For Loop" << endl;
    for (int i = 5; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << endl;
}

void vectorFunction()
{
    //Create the initial vector
    vector<int> vec;
    
    //fill the vector with the numbers 1-5
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
 
    //Display the vector
    cout << "Output from beginning to end: ";
    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << " ";
    
    //Display the vector in reverse
    cout << "\nOutput from end to beginning: ";
    for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir)
        cout << *ir << " ";
}

int readWriteFunction()
{
    //Create a loop to allow the user to learn about multiple people
	while(1)
	{
		//Set a variable equal to the file name
		char *filename = "starwars.txt";
			//Open the file
			FILE *file = fopen(filename, "r");

			//If the file will not open, notify the user
			if (file == NULL)
			{
				//Display error message and stop program
				printf("Error: could not open file %s", filename);
				return 0;
			}
		//Create string for choice
		char choice[20];
		//Create string for user to quit
		char quit[20] = "Quit";

		//Display menu and get choice
		cout << "Main Menu:\n";
		cout << "  1. Anakin\n";
		cout << "  2. Dooku\n";
		cout << "  3. Ventress\n";
		cout << "  4. Obi-Wan\n";
		cout << "  5. Kanan Jarrus\n";
		cout << "  6. Yoda\n";
		cout << "  7. Darth Maul\n";
		cout << "  8. Mace Windu\n";
		cout << "  0. Quit\n";
		cout << "Enter the name of the person as it appears:";
        cin >> choice;

		//Check to see if user wants to stop the program
		if((strstr(choice, quit)) != NULL)
		{
			break;
		}

		//Create variables
		char current_line[100];
		int find_result = 0;
		int additional_info = 0;

		//Start searching the file line by line
		while(fgets(current_line, 100, file) != NULL)
		{
			//check to see if the current line being read matches the users choice
			if((strstr(current_line, choice)) != NULL)
			{
				//Print the current line being read, should be be the name
				printf("\n%s", current_line);
				//Continue reading the file line by line
				while(fgets(current_line, 100, file) != NULL)
				{
					//Display each line it reads
					printf("%s", current_line);
					//Keep count of lines displayed since displaying the name
					additional_info++;

					//Once 2 additional lines have been displayed, start the loop over
					if(additional_info == 2)
					{
						//Print a blank line a start the loop over
						cout << endl;
						break;
					}
				}
				//Increase find_result if a match for the user choice has been found
				find_result++;
			}
		}
		//If the choice was not a valid input, let user know
		if(find_result == 0)
		{
			//Display message that choice could not be found
			cout << "\nSorry, couldn't find a match.\n\n";
		}
		// close the file
		fclose(file);
    }
    return 0;
}

class Person
{
public:
    string full_Name;
    int age;
    string eye_Color;
};

int main() 
{
    variableFunction();
    conditionalsFunction();
    loopFunction();
    vectorFunction();

    Person person1;
    person1.full_Name = "Justin McMullens";
    person1.age = 23;
    person1.eye_Color = "Brown";

    Person person2;
    person2.full_Name = "Maddy Chavez";
    person2.age = 20;
    person2.eye_Color = "Hazel";

    cout << endl << endl << "Classes" << endl;
    cout << person1.full_Name << " " << person1.age << " " << person1.eye_Color << endl;
    cout << person2.full_Name << " " << person2.age << " " << person2.eye_Color << endl;

    cout << endl << "File" << endl;
    readWriteFunction();

//must use Ctrl+Shift+B to build before you can press Ctrl+F5 to run
}