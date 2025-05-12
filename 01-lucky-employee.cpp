#include <iostream>
using namespace std;

void getInput(double salareis[][2], int numEmp);
void calcNetSalary(double salaries[][2], int numEmps);
void calcNetSalary(double salaries[][2], int numEmps);
void findUnlucky(double salaries[][2], int lucky[], int numEmps);
void printUluckPersons(int lucky[], int numEmps);
void markIfUnlucky(double salaries[][2], int lucky[], int numEmps, int empNumber, int upperBound);

int main(){
    // Find the number of employees
    // Store the number of employee

    // Find the salary of each employee
    // store the salay of each employee

    // Calaculate the tax for each employee according to the tax slabs
    // Find the unlocky individual who get less take home than other with lower income tax

    // Display the unlocky individuals

    //TAX SLABS
        // if salay is between 0 and 500 then 0% tax deducted
        // if salay is greater than 500 and less then or equal to 10,000 than 5% tax will be deducted
        // if salay is greater than 10,000 and less then or equal to 20,000 than 10% tax will be deducted
        // if salay is greater than 20,000 than 20% tax will be deducted

    //============================
    // START
    // Declare variable to store arraySize
    // Declare a constant variable to store number of employee
    // Declare two-diamentional array to store each employee salary
    // Declare an arry to store lucky and unlocky individuals

    // Prompt the user to enter the number of employee
    

    // call getInput function
        // declare getInput function 
        // In Parameters
            // it will receive salarie array and number of employee
        // In body
            // prompt the user and take each employee salary and store it in salaries array

    const int arraySize = 100;
    int numEmps = 0;

    double salaries[arraySize][2] =  {0};
    int lucky[arraySize] = {0};

    cout << "How many empolyees you have in your company? : ";
    cin >> numEmps;

    getInput(salaries, numEmps);

    calcNetSalary(salaries, numEmps);


    findUnlucky(salaries, lucky, numEmps);

    printUluckPersons(lucky, numEmps);




}

void getInput(double salareis[][2], int numEmps){
    for(int i = 0; i < numEmps; i++){
        cout << "Please enter the salary of employee no ( " << i + 1 << " ) : ";
        cin >> salareis[i][0];
    }
}

void calcNetSalary(double salaries[][2], int numEmps){
    for(int i = 0; i < numEmps; i++){
        if(salaries[i][0] < 5000){
            salaries[i][1]  = salaries[i][0]; 
        }
        else if(salaries[i][0] > 5000 && salaries[i][0] <= 10000){
            salaries[i][1] = salaries[i][0] - (salaries[i][0] * 0.05);
        }
        else if(salaries[i][0] > 10000 && salaries[i][0] <= 20000){
            salaries[i][1] = salaries[i][0] - (salaries[i][0] * 0.10);
        } else {
            salaries[i][1] = salaries[i][0] - (salaries[i][0] * 0.20);
        }
    }
}


void findUnlucky(double salaries[][2], int lucky[], int numEmps){
    for(int i = 0; i<numEmps; i++){
        if(salaries[i][0] >= 5001 && salaries[i][0] <= 1000){
            markIfUnlucky(salaries, lucky, numEmps, i, 50001);
        }
        else if(salaries[i][0] >= 10001 && salaries[i][0] <= 20000){
            markIfUnlucky(salaries, lucky, numEmps, i, 10001);
            
        }
        else if(salaries[i][0] >= 20001) {
            markIfUnlucky(salaries, lucky, numEmps, i, 20001);
        }
    }    
}

void markIfUnlucky(double salaries[][2], int lucky[], int numEmps, int empNumber, int upperBound){
    for(int i = 0; i < numEmps; i++){
        if(salaries[i][0] < upperBound && salaries[i][1] >= salaries[empNumber][1]){
            lucky[i] = 1;
            break;
        }
    }
}

void printUluckPersons(int lucky[], int numEmps){
    cout << "Lucky Employees!" << endl;

    for(int i = 0; i<numEmps; i++){
        if(lucky[i] == 1){
            cout << "Employee number "<< i+1 << " is lucky." << endl;
        }
    }
}

// calcNetSalary
    // In Parameters
        // salaries array and number of employee
    // In body
        // reapeat number of employees time
            // if employee salary is less the 5000
                  //then
                    // calculate 0% Tax and store net salary in salaries array
            // otherwise if employee salary is greater than 5,000 and less than or equal to 10,000
              // Then
              // Calaculate 5% Tax and store net salary in salaries array
            // otherwise if emaployee salary is greater than 10,000 and less the or eqal to 20,000
                // Then
                // Calaculate 10% Tax and store net salary in salaries array
             // otherwise
                // Calaculate 20% Tax and store net salary in salaries array


// Find unlockies function
    // In Paramenter 
        //lucky array and salaries array and number of employees
    // In Body
        // reapeate number of employees time
      
