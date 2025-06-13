
//=============================
// Psuedocode START
//=============================

    // Declare a constant variable to store divisor1
    // Declare a constant variable to store divisor2
    // Declare a constant variable to store divisor3 

    // Declare a variable to store the VU ID "VUID"
    // Delcare a varibale to store the extractedID

    // Declare a variable to store burgerPrice
    // Declare a variable to store burgerNum

    // Declare a variable to store pizzaPrice
    // Declare a variable to store pizzaNum

    // Declare a variable to store friesPrice
    // Declare a variable to store friesNum

    // Declare a variable to store sandwichPrice
    // Declare a variable to store sandwichNum

    // Declare a variable to store coolDrinkPrice
    // Declare a variable to store coolDrinkNum

    // declare a varible to store totalBill
    /// declare a variable to store discount

    // Display the your name
    // Display the VU ID 

    // Prompt the user to enter your numaric part of your VU ID
    // Store the numaric part of your VU ID in "VUID"


    // repeat 4 time  
        // switch statement
            // case 1 :
                // remove left first number
                // calculate the reminder (VUID % 100000000) and store
                //  in extracted variable
                //break;
                
                // case 2:
                    // remove left second number 
                    // calculate the reminder (extractedID % 10000000) and store
                    //  in extracted variable
                    //break;
                    
                // case 3: 
                    // remove right first number
                    // calculate the reminder (extractedID / 10) and stor it in extracted
                    // variable
                    //break;

                // case 3: 
                    // remove right first number
                    // calculate the reminder (extractedID / 10) and stor it in extracted
                    // variable
                    //break;
                
                // default
                    // store zero in extracted variable
                    // show Error message 
                
    // Display extracted ID

    // declare a variable to store currentExtractedNum
    
    // repeat 5 times
        // use switch
            //  case 1: 
                // take VUID variable and divide by 10 and store reminder in coolDrinkNum variable
                // take VUID variable and divide by 10 and also store it in currentExtractedNum Variable
                // break
            
            // case 2:
                  // take currentExtractedNum variable and divide by 10 and store reminder it in sandwitchNum variable (currentExtractedNum % 10)
                // take currentExtracted variable and divide by 10 and again store it in currentExtractedNum Variable (currentExtractedNum / 10)
                // Break
            
            // case 3:
                 // take currentExtractedNum variable and divide by 10 and  store reminder in FriesNum variable
                // take currentExtracted variable and divide by 10 and again store it in currentExtractedNum Variable
                // Break

            // case 4:
                 // take currentExtractedNum variable and divide by 10 and  store reminder in pizzaNum variable
                // take currentExtracted variable and divide by 10 and again store it in currentExtractedNum Variable
                // Break

            // case 5:
                 // take currentExtractedNum variable and divide by 10 and  store reminder in burgerNum variable
                // take currentExtracted variable and divide by 10 and again store it in currentExtractedNum Variable
                // Break

// calculate and display billing details

//====================================
// Psuedocode END
//====================================


#include <iostream>
#include <iomanip>
using namespace std;

int main(){


            


//==========================
// Program START
//==========================
            
    const long divisor1 = 100000000;
    const long divisor2 = 10000000;
    const int divisor3 = 10;

    long VUID = 0;
    long extractedID = 0;

    int burgerPrice = 250;
    int burgerNum = 0;

    int pizzaPrice = 500;
    int pizzaNum = 0;

    int friesPrice = 150;
    int friesNum = 0;

    int sandwichPrice = 200;
    int sandwichNum = 0;

    int coolDrinkPrice = 100;
    int coolDrinkNum = 0;

    double totalBill = 0;
    double discount = 0;

    cout << "Name: MUHAMMAD ZOHAIB KHAN" << endl;
    cout << "VU-ID: BC240400055" << endl; 

    cout << "\nPlease enter numeric part of your VU-ID : ";
    cin >> VUID;
    
    //Optional
    
    // while(!(VUID / divisor1)){
    //     cout << "\nInvalid number. Number should be 9 digits." << endl;
    //     cout << "\nPlease enter numeric part of your VU-ID : ";
    //     cin >> VUID;
    // }

    for(int i = 1; i <= 4; i++ ){
        switch(i){
            case 1:
            extractedID = VUID % divisor1;
            break;
            
            case 2: 
            extractedID = extractedID % divisor2;
            break;

            case 3:
            extractedID = extractedID / divisor3;
            break;

            case 4:
            extractedID = extractedID / divisor3;
            break;

            default:
                extractedID = 0;
                cout << "\nError in extracting ID" << endl;
        }
    }

    cout << "\nExtracted Middle Five Digits: " << extractedID;

    int currentExtractedID = 0;

    for(int i = 1; i <= 5; i++){
        switch(i){
            case 1:
                coolDrinkNum = extractedID % 10;
                currentExtractedID = extractedID / 10;
                break;
            case 2:
                sandwichNum = currentExtractedID % 10;
                currentExtractedID = currentExtractedID / 10;
                break;
            
            case 3:
                friesNum = currentExtractedID % 10;
                currentExtractedID = currentExtractedID / 10;
                break;
            case 4:
                pizzaNum = currentExtractedID % 10;
                currentExtractedID = currentExtractedID / 10;
                break;
            case 5:
                burgerNum = currentExtractedID % 10;
                currentExtractedID = currentExtractedID / 10;
                break;
            
            default: 
                cout << "\nError in number assigning. << endl";
        }
    }

 

    cout << "\n=== Welcome to C++ Cafe ===" << endl;
    cout << "----- MENU -----" << endl;
    cout << "1. Burger"<< setw(12) << "- Rs. " << burgerPrice << endl;
    cout << "2. Pizza" << setw(13) << "- Rs. " << pizzaPrice << endl;
    cout << "3. Fries" << setw(13) << "- Rs. " << friesPrice << endl;
    cout << "4. Sandwich" << setw(10)  << "- Rs. " << sandwichPrice << endl;
    cout << "5. Cold Drink"<< setw(8) << "- Rs. " << coolDrinkPrice << endl;

    
    // Burger
    cout << "\nBarger ("  << (burgerNum ? burgerNum : 1 )  << " x Rs. " << burgerPrice << ") = Rs. " << (burgerNum ? burgerNum : 1 )* burgerPrice << endl;

    burgerPrice *= (burgerNum ? burgerNum : 1 );

    // Pizza
    cout << "\nPizza ("  << (pizzaNum ? pizzaNum : 1 )  << " x Rs. " << pizzaPrice << ") = Rs. " << (pizzaNum ? pizzaNum : 1 )* pizzaPrice << endl;

    pizzaPrice *= (pizzaNum ? pizzaNum : 1 );

    //3. Fries
    cout << "\nFries ("  << (friesNum ? friesNum : 1 )  << " x Rs. " << friesPrice << ") = Rs. " << (friesNum ? friesNum : 1 )* friesPrice << endl;

    friesPrice *= (friesNum ? friesNum : 1 );

    //4. sandwich
    cout << "\nSandwich ("  << (sandwichNum ? sandwichNum : 1 )  << " x Rs. " << sandwichPrice << ") = Rs. " << (sandwichNum ? sandwichNum : 1 )* sandwichPrice << endl;

    sandwichPrice *= (sandwichNum ? sandwichNum : 1 );

    //5. Cool Drink
    cout << "\nCool Drink ("  << (coolDrinkNum ? coolDrinkNum : 1 )  << " x Rs. " << coolDrinkPrice << ") = Rs. " << (coolDrinkNum ? coolDrinkNum : 1 )* coolDrinkPrice << endl;

    coolDrinkPrice *= (coolDrinkNum ? coolDrinkNum : 1 );


    // take all the variable to calculate the total bill
    totalBill = pizzaPrice + burgerPrice + friesPrice + sandwichPrice + coolDrinkPrice;
  
    // if price is greater then 5000 the give 10% discount
        // give 10% discount
        // Display the user to that he has unlocked 10% discount
    if(totalBill > 5000){
        discount = totalBill * 0.10;

        cout << "\nSurprise! You've unlocked a 10% disocunt " << endl;
    }

    // Display user fill bill message
    cout << "\n==== Final Bill ====" << endl;

    // Display user total money before discount applied
    cout << "Total before discount: Rs. " << totalBill << endl;

    // Display user to show applied discount
    cout << "Discount: Rs. " << discount << endl;

    // Display net payable amount totalBill - discount
    cout << "Net Payable Amount: Rs. " << totalBill - discount << endl;

    // Display Success message
    cout << "\nThank you for visiting C++ Cafe!" << endl;



    //==========================
    // Program END
    //==========================

   






}