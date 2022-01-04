#include <iostream>

double Number_1, Number_2 ;
char Operator ;

int main (){

    std :: cout << "You'll need to enter the 1st number :: " ;
    std :: cin >> Number_1 ;

    std :: cout << "You'll need to enter the operator :: " ;
    std :: cin >> Operator ;

    std :: cout << "You'll need to enter the 2nd number :: " ;
    std :: cin >> Number_2 ;

    switch (Operator){
        
    case '/':
        
        std :: cout << "Calculations :: " << Number_1 / Number_2 ;
        break;

    case '*':
        
        std :: cout << "Calculations :: " << Number_1 * Number_2 ;
        break;

    case '+':
        
        std :: cout << "Calculations :: " << Number_1 + Number_2 ;
        break;

    case '-':
        
        std :: cout << "Calculations :: " << Number_1 - Number_2 ;
        break;
    
    default:
    
        std :: cout << "Error!\nIncorrect Input." ;
        break;
    }
}