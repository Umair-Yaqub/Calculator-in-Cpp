#include <iostream>

double Number_1, Number_2 ;
char Operator ;

int main (){

    // It allow user to enter the operand
    std :: cout << "You'll need to enter the 1st number :: " ;
    std :: cin >> Number_1 ;

    // It allows user to enter operator i.e. +, -, *, /
    std :: cout << "You'll need to enter the operator :: " ;
    std :: cin >> Operator ;

    // It allow user to enter the operand
    std :: cout << "You'll need to enter the 2nd number :: " ;
    std :: cin >> Number_2 ;

    // Switch statement begins
    switch ( Operator ){

    // If user enter /
    case '/' :
        
        std :: cout << "Calculations :: " << Number_1 / Number_2 ;
        break ;

    // If user enter *
    case '*' :
        
        std :: cout << "Calculations :: " << Number_1 * Number_2 ;
        break ;

    // If user enter +
    case '+' :
        
        std :: cout << "Calculations :: " << Number_1 + Number_2 ;
        break ;

    // If user enter -
    case '-' :
        
        std :: cout << "Calculations :: " << Number_1 - Number_2 ;
        break ;
        
    // If the operator is other than +, -, * or /, 
    // error message will display
    default :
    
        std :: cout << "Error!\nIncorrect Input." ;
        break ;
    }
    // switch statement ends
    
}