#include <stdio.h>

//checking if someone has won
int has_won(int board[][7]){
     // Check horizontal and vertical lines
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            // Check horizontal (i, j) to (i, j+3)
            if (board[i][j] == 1 && board[i][j+1] == 1 && board[i][j+2] == 1 && board[i][j+3] == 1) {
                return 1;
            }
            if (board[i][j] == -1 && board[i][j+1] == -1 && board[i][j+2] == -1 && board[i][j+3] == -1) {
                return -1;
            }

            // Check vertical (j, i) to (j+3, i)
            if (board[j][i] == 1 && board[j+1][i] == 1 && board[j+2][i] == 1 && board[j+3][i] == 1) {
                return 1;
            }
            if (board[j][i] == -1 && board[j+1][i] == -1 && board[j+2][i] == -1 && board[j+3][i] == -1) {
                return -1;
            }
        }
    }
}
//Printing board after every move
void print_board(int board[][7]) {
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            if(board[i][j] == 1) {
                printf("x");
            }else if (board[i][j] == -1) {
                printf("o");
            }else{
                printf("_");
            }
        }
        printf("\n");
    }
}

int main()
{
    //Creating an empty board
    int board[6][7] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};
    print_board(board);
    int turn = 1;
    int draw_check = 0;
    char replay = '\0';
    //Looping turns
    for(int i = 0; i < 100; i++){
        
        
        printf("Please enter a move:\n");
        printf(">>> ");
        int column;
        scanf("%i", &column);
        column--;
        //Checking Validity of input
        if(column < 0 || column > 6){
            printf("Invalid input.\n");
            while (getchar() != '\n'); 
            continue;
            }
        if(board[5][column] == 0){
            board[5][column] = turn;
        }
        else if(board[4][column] == 0){
            board[4][column] = turn;
        }
        else if(board[3][column] == 0){
            board[3][column] = turn;
        }
        else if(board[2][column] == 0){
            board[2][column] = turn;
        }
        else if(board[1][column] == 0){
            board[1][column] = turn;
        }
        else if(board[0][column] == 0){
            board[0][column] = turn;
        }else{
            printf("Invalid input.\n");
            continue;
        }
        print_board(board);
        //Checking for winner
        int result = has_won(board);
        if(result == 1){
            printf("Player 1 has won!\n");
        }
        if(result == -1){
            printf("Player 2 has won!\n");
        }
        //switching turns
        turn *= -1;
        //Draw check
        draw_check++;
        if(draw_check == 42){
            printf("The game was a draw!\n");
        }
        //Checking if players want to play again
        if(result == 1 || result == -1 || draw_check == 42){
            printf("Would you like to play again? y/n\n");
            scanf("%s", &replay);
            while(replay != 'y' && replay != 'n'){
                printf("Invalid input.\n");
                printf("Would you like to play again? y/n\n");
                scanf("%s", &replay);
            }
            if(replay == 'y'){
                i = 0;
                draw_check = 0;
                //reset board here
                for(int i = 0; i < 6; i++){
                    for(int j = 0; j < 7; j++){
                        board[i][j] = 0;
                    }
                }
                print_board(board);
                turn = 1;
                draw_check = 0;
                replay = '\0';
                continue;
            }else if(replay == 'n'){
                break;
            }
        }
    }
    return 0;
}
