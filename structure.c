#include <stdio.h>
#include <string.h>
// create struct with person1 variable
struct Person {
 char name[50];
 int age;
 float salary;
} person1;
int main()
{
	// assign value to name of person1
 strcpy(person1.name, "roshan patil");
 // assign values to other person1 variables
 person1.age= 42;
 person1. salary = 500000;
 // print struct variables
 printf("Name: %s\n", person1.name);
 printf("age: %d\n", person1.age);
 printf("Salary: %.2f", person1.salary);
 return 0;
}
