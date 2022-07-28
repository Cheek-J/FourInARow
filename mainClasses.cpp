/*Class Declarations and Definitions*/
class Board {
    private:
        char positionsSelected[16];
        char winner;
    public:
        Board();
        char* getPositions();
        int setPosition(int gridNumber, char user);
        char checkRows();
        char checkColumns();
        char checkDiag();
        char determineWinner();
};
Board::Board(){
    winner='z';
    for(int i=0;i<16;i++){
        positionsSelected[i]='-';
   }
}
char* Board::getPositions(){
    return positionsSelected;
}
int Board::setPosition(int gridNumber, char user){
    if(positionsSelected[gridNumber]== '-'){
        positionsSelected[gridNumber] = user; 
        return 0;
       } else{
            //std::cout<<"Position is taken..\n";
            return -1; 
        }
    
}
char Board::checkRows(){
    for(int i=0;i<16;i++){
        int sumx,sumo;
        char winner='z';
        positionsSelected[i];
        if(i==0||i%4==0) {
            sumx=0;
            sumo=0;
        } if(positionsSelected[i]=='x'){
            sumx++;
            if(sumx==4){
                //std::cout<<"\'x\' has won!\n";
                winner ='x';
                return winner;
            }
        } if(positionsSelected[i]=='o'){
            sumo++;
            if(sumo==4){
               // std::cout<<"\'o\' has won!\n";
                winner ='o';
                return winner;
            }
        }
    }
    return winner;
}
char Board::checkColumns(){
    char winner ='z';
    int columns =0;
    int sumx =0;
    int sumo=0;
    for(int columns =0;columns<4;columns++){
        for(int i=0;i<16;i=i+4) {
            if(positionsSelected[i+columns]=='x')
            sumx++;
            if(positionsSelected[i+columns]=='o')
            sumo++;
        }
    if(sumx ==4){
        winner ='x';
        return winner;
    }
    if(sumo==4){
        winner ='o';
        return winner;
    }
        sumx=0;
        sumo=0;
    }
    return winner;
}
char Board::checkDiag() {
    char winner ='z';
    //left to right
    int sumx=0;
    int sumo=0;
    for(int i=0;i<16;i=i+5){
        if(positionsSelected[i]=='x')
            sumx++;
        if(positionsSelected[i]=='o')
            sumo++;
        if(sumx==4){
            winner ='x';
            //std::cout<<"\nx won diag test\n";
            return 'x';
        }if(sumo==4){
            winner ='o';
            //std::cout<<"\no won diag test\n";
            return 'o';
        }

    }
    sumx=0;
    sumo=0;
    //right to left
    for(int i=3;i<16;i=i+3){
        if(positionsSelected[i]=='x')
            sumx++;
        if(positionsSelected[i]=='o')
            sumo++;
        if(sumx==4){
            winner ='x';
            //std::cout<<"\nx won diag test\n";
            return winner;
        }if(sumo==4){
            winner ='o';
            //std::cout<<"\no won diag test\n";
            return winner;
        }

    }
  return winner;  
}
char Board::determineWinner(){

    char winner ='z';
   
        winner=checkRows();
        if(winner=='z')
            winner=checkColumns();
        if(winner =='z')
            winner=checkDiag();
        return winner;
    };