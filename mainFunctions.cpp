#include <iostream>
#include <string>
#include "mainClasses.cpp"

void getName(std::string &user1, std::string &user2){
    std::cout<<"Player 'x' enter name: ";
    std::cin>>user1;
    std::cout<<"Player 'o' enter name: ";
    std::cin>>user2;
    std::cout<<"\n\n";  
}
void printBlankBoard(){
    std::cout<<"\nThis is the Board:\n";
     for(int i=0;i<16;i++){
        std::cout<<"|"<<i<<":";
        if(i<=9)
            std::cout<<" ";
        if(i%4==3){
            std::cout<<"|\n";
        }
     }std::cout<<"The numbers correspond to the grid location.\n";
}
void writeTheBoard(Board boardIn) {
    std::cout<<"\nThis is the current Board:\n";
     for(int i=0;i<16;i++){
        std::cout<<"|"<<boardIn.getPositions()[i];
        std::cout<<" ";
        if(i%4==3){
            std::cout<<"|\n";
        }
     }
}
void printUserPrompt(std::string nameIn, char letter){
    std::cout<<nameIn<<" where would you like to place an "<<letter <<"?";
    std::cout<<"\n\n";
}
int getUserResponse(){
    int position =-1;
    std::cout<<"Enter an integer between 0 and 15: ";
    std::cin>>position;

    while(position<0 || position>15 ||!std::cin) {
        std::cin.clear(); 
        std::cout<<"That is not a valid position.\n";
        std::cout<<"Enter an integer between 0 and 15: ";
        std::cin.clear();
        std::cin>>position;
    }
    return position;
}
void checkResponse(Board &boardIn, char input){
    int position, userInput;
    do { 
        position=getUserResponse();
        userInput=boardIn.setPosition(position,input);

        if(userInput ==-1){
            std::cout<<"That positions is taken.\n";
        }
    }while(userInput==-1);
}
void printGameWinner(Board boardIn, std::string namex, std::string nameo){
    char winner;
    winner = boardIn.determineWinner();
    if(winner== 'x'){
        std::cout<<"Congrats, " << namex<<" you won!\n\n";
    }if(winner== 'o'){
        std::cout<<"Congrats, " << nameo<<" you won!\n\n";
    }
}   

