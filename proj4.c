#include <stdio.h>

//checking if someone has won
int has_won(int board[][7]){
    for(int i = 0; i < 7; i++){
        if(board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1 && board [i][3] == 1){
            return 1;
        }
        if(board[i][1] == 1 && board[i][2] == 1 && board[i][3] == 1 && board [i][4] == 1){
            return 1;
        }
        if(board[i][2] == 1 && board[i][3] == 1 && board[i][4] == 1 && board [i][5] == 1){
            return 1;
        }
        if(board[i][3] == 1 && board[i][4] == 1 && board[i][5] == 1 && board [i][6] == 1){
            return 1;
        }
        if(board[i][0] == -1 && board[i][1] == -1 && board[i][2] == -1 && board [i][3] == -1){
            return -1;
        }
        if(board[i][1] == -1 && board[i][2] == -1 && board[i][3] == -1 && board [i][4] == -1){
            return -1;
        }
        if(board[i][2] == -1 && board[i][3] == -1 && board[i][4] == -1 && board [i][5] == -1){
            return -1;
        }
        if(board[i][3] == -1 && board[i][4] == -1 && board[i][5] == -1 && board [i][6] == -1){
            return -1;
        }
        if(board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1 && board [3][i] == 1){
            return 1;
        }
        if(board[1][i] == 1 && board[2][i] == 1 && board[3][i] == 1 && board [4][i] == 1){
            return 1;
        }
        if(board[2][i] == 1 && board[3][i] == 1 && board[4][i] == 1 && board [5][i] == 1){
            return 1;
        }
        if(board[0][i] == -1 && board[1][i] == -1 && board[2][i] == -1 && board [3][i] == -1){
            return -1;
        }
        if(board[1][i] == -1 && board[2][i] == -1 && board[3][i] == -1 && board [4][i] == -1){
            return -1;
        }
        if(board[2][i] == -1 && board[3][i] == -1 && board[4][i] == -1 && board [5][i] == -1){
            return -1;
        }
        if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1){
            return 1;
        }
        if(board[1][0] == 1 && board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1){
            return 1;
        }
        if(board[2][0] == 1 && board[3][1] == 1 && board[4][2] == 1 && board[5][3] == 1){
            return 1;
        }
        if(board[0][1] == 1 && board[1][2] == 1 && board[2][3] == 1 && board[3][4] == 1){
            return 1;
        }
        if(board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1 && board[4][4] == 1){
            return 1;
        }
        if(board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1 && board[5][4] == 1){
            return 1;
        }
        if(board[0][2] == 1 && board[1][3] == 1 && board[2][4] == 1 && board[3][5] == 1){
            return 1;
        }
        if(board[1][2] == 1 && board[2][3] == 1 && board[3][4] == 1 && board[4][5] == 1){
            return 1;
        }
        if(board[2][2] == 1 && board[3][3] == 1 && board[4][4] == 1 && board[5][5] == 1){
            return 1;
        }
        if(board[0][3] == 1 && board[1][4] == 1 && board[2][5] == 1 && board[3][6] == 1){
            return 1;
        }
        if(board[1][3] == 1 && board[2][4] == 1 && board[3][5] == 1 && board[4][6] == 1){
            return 1;
        }
        if(board[2][3] == 1 && board[3][4] == 1 && board[4][5] == 1 && board[5][6] == 1){
            return 1;
        }
        if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1){
            return 1;
        }
        if(board[1][0] == 1 && board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1){
            return 1;
        }
        if(board[2][0] == 1 && board[3][1] == 1 && board[4][2] == 1 && board[5][3] == 1){
            return 1;
        }
        if(board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1){
            return 1;
        }
        if(board[1][0] == 1 && board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1){
            return 1;
        }
        if(board[2][0] == 1 && board[3][1] == 1 && board[4][2] == 1 && board[5][3] == 1){
            return 1;
        }
        if(board[0][1] == 1 && board[1][2] == 1 && board[2][3] == 1 && board[3][4] == 1){
            return 1;
        }
        if(board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1 && board[4][4] == 1){
            return 1;
        }
        if(board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1 && board[5][4] == 1){
            return 1;
        }
        if(board[0][2] == 1 && board[1][3] == 1 && board[2][4] == 1 && board[3][5] == 1){
            return 1;
        }
        if(board[1][2] == 1 && board[2][3] == 1 && board[3][4] == 1 && board[4][5] == 1){
            return 1;
        }
        if(board[2][2] == 1 && board[3][3] == 1 && board[4][4] == 1 && board[5][5] == 1){
            return 1;
        }
        if(board[0][3] == 1 && board[1][2] == 1 && board[2][1] == 1 && board[3][0] == 1){
            return 1;
        }
        if(board[1][3] == 1 && board[2][2] == 1 && board[3][1] == 1 && board[4][0] == 1){
            return 1;
        }
        if(board[2][3] == 1 && board[3][2] == 1 && board[4][1] == 1 && board[5][0] == 1){
            return 1;
        }
        if(board[0][4]== 1 && board[1][3] == 1 && board[2][2] == 1 && board[3][1] == 1){
            return 1;
        }
        if(board[1][4] == 1 && board[2][3] == 1 && board[3][2] == 1 && board[4][1] == 1){
            return 1;
        }
        if(board[2][4] == 1 && board[3][3] == 1 && board[4][2] == 1 && board[5][1] == 1){
            return 1;
        }
        if(board[0][5] == 1 && board[1][4] == 1 && board[2][3] == 1 && board[3][2] == 1){
            return 1;
        }
        if(board[1][5] == 1 && board[2][4] == 1 && board[3][3] == 1 && board[4][2] == 1){
            return 1;
        }
        if(board[2][5] == 1 && board[3][4] == 1 && board[4][3] == 1 && board[5][2] == 1){
            return 1;
        }
        if(board[0][6] == 1 && board[1][5] == 1 && board[2][4] == 1 && board[3][3] == 1){
            return 1;
        }
        if(board[1][6] == 1 && board[2][5] == 1 && board[3][4] == 1 && board[4][3] == 1){
            return 1;
        }
        if(board[2][6] == 1 && board[3][5] == 1 && board[4][4] == 1 && board[5][3] == 1){
            return 1;
        }
        if(board[0][0] == -1 && board[1][1] == -1 && board[2][2] == -1 && board[3][3] == -1){
            return -1;
        }
        if(board[1][0] == -1 && board[2][1] == -1 && board[3][2] == -1 && board[4][3] == -1){
            return -1;
        }
        if(board[2][0] == -1 && board[3][1] == -1 && board[4][2] == -1 && board[5][3] == -1){
            return -1;
        }
        if(board[0][1] == -1 && board[1][2] == -1 && board[2][3] == -1 && board[3][4] == -1){
            return -1;
        }
        if(board[1][1] == -1 && board[2][2] == -1 && board[3][3] == -1 && board[4][4] == -1){
            return -1;
        }
        if(board[2][1] == -1 && board[3][2] == -1 && board[4][3] == -1 && board[5][4] == -1){
            return -1;
        }
        if(board[0][2] == -1 && board[1][3] == -1 && board[2][4] == -1 && board[3][5] == -1){
            return -1;
        }
        if(board[1][2] == -1 && board[2][3] == -1 && board[3][4] == -1 && board[4][5] == -1){
            return -1;
        }
        if(board[2][2] == -1 && board[3][3] == -1 && board[4][4] == -1 && board[5][5] == -1){
            return -1;
        }
        if(board[0][3] == -1 && board[1][4] == -1 && board[2][5] == -1 && board[3][6] == -1){
            return -1;
        }
        if(board[1][3] == -1 && board[2][4] == -1 && board[3][5] == -1 && board[4][6] == -1){
            return -1;
        }
        if(board[2][3] == -1 && board[3][4] == -1 && board[4][5] == -1 && board[5][6] == -1){
            return -1;
        }
        if(board[0][0] == -1 && board[1][1] == -1 && board[2][2] == -1 && board[3][3] == -1){
            return -1;
        }
        if(board[1][0] == -1 && board[2][1] == -1 && board[3][2] == -1 && board[4][3] == -1){
            return -1;
        }
        if(board[2][0] == -1 && board[3][1] == -1 && board[4][2] == -1 && board[5][3] == -1){
            return -1;
        }
        if(board[0][0] == -1 && board[1][1] == -1 && board[2][2] == -1 && board[3][3] == -1){
            return -1;
        }
        if(board[1][0] == -1 && board[2][1] == -1 && board[3][2] == -1 && board[4][3] == -1){
            return -1;
        }
        if(board[2][0] == -1 && board[3][1] == -1 && board[4][2] == -1 && board[5][3] == -1){
            return -1;
        }
        if(board[0][1] == -1 && board[1][2] == -1 && board[2][3] == -1 && board[3][4] == -1){
            return -1;
        }
        if(board[1][1] == -1 && board[2][2] == -1 && board[3][3] == -1 && board[4][4] == -1){
            return -1;
        }
        if(board[2][1] == -1 && board[3][2] == -1 && board[4][3] == -1 && board[5][4] == -1){
            return -1;
        }
        if(board[0][2] == -1 && board[1][3] == -1 && board[2][4] == -1 && board[3][5] == -1){
            return -1;
        }
        if(board[1][2] == -1 && board[2][3] == -1 && board[3][4] == -1 && board[4][5] == -1){
            return -1;
        }
        if(board[2][2] == -1 && board[3][3] == -1 && board[4][4] == -1 && board[5][5] == -1){
            return -1;
        }
        if(board[0][3] == -1 && board[1][2] == -1 && board[2][1] == -1 && board[3][0] == -1){
            return -1;
        }
        if(board[1][3] == -1 && board[2][2] == -1 && board[3][1] == -1 && board[4][0] == -1){
            return -1;
        }
        if(board[2][3] == -1 && board[3][2] == -1 && board[4][1] == -1 && board[5][0] == -1){
            return -1;
        }
        if(board[0][4] == -1 && board[1][3] == -1 && board[2][2] == -1 && board[3][1] == -1){
            return -1;
        }
        if(board[1][4] == -1 && board[2][3] == -1 && board[3][2] == -1 && board[4][1] == -1){
            return -1;
        }
        if(board[2][4] == -1 && board[3][3] == -1 && board[4][2] == -1 && board[5][1] == -1){
            return -1;
        }
        if(board[0][5] == -1 && board[1][4] == -1 && board[2][3] == -1 && board[3][2] == -1){
            return -1;
        }
        if(board[1][5] == -1 && board[2][4] == -1 && board[3][3] == -1 && board[4][2] == -1){
            return -1;
        }
        if(board[2][5] == -1 && board[3][4] == -1 && board[4][3] == -1 && board[5][2] == -1){
            return -1;
        }
        if(board[0][6] == -1 && board[1][5] == -1 && board[2][4] == -1 && board[3][3] == -1){
            return -1;
        }
        if(board[1][6] == -1 && board[2][5] == -1 && board[3][4] == -1 && board[4][3] == -1){
            return -1;
        }
        if(board[2][6] == -1 && board[3][5] == -1 && board[4][4] == -1 && board[5][3] == -1){
            return -1;
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
            }
            else if(replay == 'n'){
                break;
            }
        }
    }
    return 0;
}
