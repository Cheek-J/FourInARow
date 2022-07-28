/**For this programming quiz, I would like you to create a game called TicTacToe.
 *  In this version of the game you will need to:

    Create a 4x4 game board

    Prompt the first user (the 'x' user) to enter their name
    Prompt the second user (the 'o' user) to enter their name

    Prompt the 'x' user to select a grid position where they would like to place an 'x'.
    Prompt the 'o' user to select a grid position where they would like to place an 'o'.

    After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.

    If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
    If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.

    End the game and declare the winner.

    If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
    with 4 of the same symbol, the game is tied. Declare a tie game/
    */
  #include "mainFunctions.cpp"

  int main() {
   Board test;
   std::string namex,nameo;
   int turns =0;
   char gameWinner ='z';

   getName(namex,nameo);
   while(turns <8) {
      printBlankBoard();
      writeTheBoard(test);

      printUserPrompt(namex,'x');
      checkResponse(test,'x');
      gameWinner=test.determineWinner();

      if(gameWinner != 'z') {
         writeTheBoard(test);
         printGameWinner(test, namex,nameo);
         break;
      }
      
      //printBlankBoard();
      writeTheBoard(test);

      printUserPrompt(nameo,'o');
      checkResponse(test,'o');
      gameWinner=test.determineWinner();

      if(gameWinner != 'z') {
         writeTheBoard(test);
         printGameWinner(test, namex,nameo);
         break;
      }
      turns++;
    } if(turns>=8){
      std::cout<<"Tie game..\n\n";
      writeTheBoard(test);
    }
   return 0;
  }
    
   // int main() {
   //    Board test;
   //    std::string namex,nameo;
   //    int turns =0;
   //    char gameWinner ='z';

   //    //getName(namex,nameo);

   //       // //COLUMNS
   //          // test.setPosition(0,'x');
   //          // test.setPosition(4,'x');
   //          // test.setPosition(8,'x');
   //          // test.setPosition(12,'x');
            
   //          // test.setPosition(1,'o');
   //          // test.setPosition(5,'o');
   //          // test.setPosition(9,'o');
   //          // test.setPosition(13,'o');

   //          // test.setPosition(2,'x');
   //          // test.setPosition(6,'x');
   //          // test.setPosition(10,'x');
   //          // test.setPosition(14,'x');
            
   //          // test.setPosition(3,'o');
   //          // test.setPosition(7,'o');
   //          // test.setPosition(11,'o');
   //          // test.setPosition(15,'o');

   //    // //ROWS
   //       //    test.setPosition(3,'x');
   //       //    test.setPosition(0,'x');
   //       //    test.setPosition(1,'x');
   //       //    test.setPosition(2,'x');
        
            
   //       //    test.setPosition(4,'o');
   //       //    test.setPosition(5,'o');
   //       //    test.setPosition(6,'o');
   //       //    test.setPosition(7,'o');
         
   //       //    test.setPosition(8,'o');
   //       //    test.setPosition(9,'x');
   //       //    test.setPosition(10,'o');
   //       //    test.setPosition(11,'o');
            
   //       //  test.setPosition(12,'o');
   //       //  test.setPosition(13,'o');
   //       //  test.setPosition(14,'o');
   //       //  test.setPosition(15,'o');
   //     // //DIAGONALS
   //          //left to right
   //          test.setPosition(0,'o');
   //          test.setPosition(5,'o');
   //          test.setPosition(10,'o');
   //          test.setPosition(15,'o');
   //          //right to left
   //          // test.setPosition(3,'o');
   //          // test.setPosition(6,'o');
   //          // test.setPosition(9,'o');
   //          // test.setPosition(12,'o');
   //       // //Tie Test
   //          // test.setPosition(0,'x');
   //          // test.setPosition(4,'x');
   //          // test.setPosition(8,'x');
   //          // test.setPosition(12,'x');
            
   //          // test.setPosition(1,'o');
   //          // test.setPosition(5,'o');
   //          // test.setPosition(9,'o');
   //          // test.setPosition(13,'o');

   //          // test.setPosition(2,'x');
   //          // test.setPosition(6,'x');
   //          // test.setPosition(10,'x');
   //          // test.setPosition(14,'x');
            
   //          // test.setPosition(3,'o');
   //          // test.setPosition(7,'o');
   //          // test.setPosition(11,'o');
   //          // test.setPosition(15,'o');

   //       //printGameWinner(test,namex,nameo);

         
   
   // //****FunctionTESTS*****//
   // // std::cout<<"\ncolumns.."<<test.checkColumns();
   // // std::cout<<"\nrows.."<<test.checkRows();
   // // std::cout<<"\ndiag.."<<test.checkDiag();
   
   //  std::cout<<"\n\n test.determineWeiner..."<<test.determineWinner();
   // //  std::cout<<"\n\n test.checkCocks..."<<test.checkColumns();
   //   std::cout<<"\n\n test.checkDicks..."<<test.checkDiag();
   //  //std::cout<<"\n\n test.checkRaws..."<<test.checkRows();
   //  std::cout<<std::endl;
    
   // //  printActiveBoard(test);
   // writeTheBoard(test);
   
   // std::cout<<"\n\nPositions: "<< test.getPositions();
   

   //    return 0;
   // }
   

    