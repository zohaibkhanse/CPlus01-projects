#include <iostream>
#include <cstring>

using namespace std;
// Suppose we have ten students in a class. The attributes of student are name, course,
// age and GPA. Get the data input from the user to populate the array. Calculate the
// average age, average GPA of the class. Find out the grade of the class and student
// with max GPA.


//////////////////////////
 // START

 // 1. Define structure of Student with attributes -> name, course, GPA, age
 
    // Declare a variable to store Total GPA of the claas
    // Declare a variable to store Total AGE of the class
    // Declare a variable to store Average GPA of the class
    // Declare a variable to store Average AGE of the class
    // Declare a variable to store Maximum GPA of the class
    // Declare a variable to store the name of person who has max GPA in the class

    
    // 2. Declare array of structure to store 10 students data

    // 3. Repeat the proceess 10 times
        // prompt the user to enter name
        // store the name in the structure

        // prompt the user to enter course
        // store the name in the structure

        
        // prompt the user to enter GPA
        // store the name in the structure 

        // prompt the user to enter AGE
        // store the name in the structure 

    // 4. repeat the process 10 times
        // To Find Total Age, Total GPA 

        // 1. take age store and add in totalAge variable
        // 2. take GPA store and add in totalGPA variable
        // 3. If current GPA is greater the MaxGPA
            // Then
            // store the current GPA in MaxGPA
            // store the the name of the student the maxGPAHolder

    
    // 5. Find Average Age and Average GPA
        // 1. take total Ages and divide total number of students
        // 2. Then store it in the averageAge variable 
        // 3. take total GPA and divide total number of students
        // 4. Then store it in the averageGPA variable 
    
    // 6. Display Average Age
    // 7. Display Average GPA
    // 8. Display the student name with max GPA

    
    // END
////////////////////////////////////


struct Student {
    string name;
    string course;
    float GPA;
    int age;
};



int main(){
    const int NUMBER_OF_STUDENTS = 5;

    double totalGPA = 0;
    double averageGPA = 0;
    int totalAge = 0;
    int averageAge = 0;
    double maxGPA = 0;
    string maxGPAHolder;


    // Student students[NUMBER_OF_STUDENTS] = {{"Ahmad Ali", "Sotware Engineering", 3.15, 20}, {"ZOHAIB KAHN", "Software Engineering", 3.80, 24}, {"Kamran", "Linguistics", 2.90, 22}, {"Mansoor", "Linguistics", 4.0, 25}, {"Anware", "Linguistics", 2.30, 27}};
    Student students[NUMBER_OF_STUDENTS];

    for(int i = 0; i < NUMBER_OF_STUDENTS; i++){
        cout << "---------------------------------------\n";
        cout << "Please enter your name:";
        cin >> students[i].name;
        
        cout << "Please enter your course:";
        cin >> students[i].course;

        cout << "Please enter your GPA :";
        cin >> students[i].GPA;

        cout << "Please enter your AGE :";
        cin >> students[i].age;

    }

    for(int i = 0; i < NUMBER_OF_STUDENTS; i++){
        totalAge += students[i].age;
        totalGPA += students[i].GPA;
        
        if(students[i].GPA > maxGPA){
            maxGPA = students[i].GPA;
            maxGPAHolder = students[i].name;
        }

    }

    averageAge = totalAge / NUMBER_OF_STUDENTS;
    averageGPA = totalGPA / NUMBER_OF_STUDENTS;

    cout << "-------------------------------------\n";
    cout << "Congratulation! " << maxGPAHolder << " is the hight GPA (" << maxGPA << ") holder in the class." << endl;
    cout << "The maximum GPA of the class is " << maxGPA << endl;
    cout << "The average GPA of the class is " << averageGPA << endl;
    cout << "The average age of the class is " << averageAge << endl;
    cout << "-------------------------------------\n";



    











}