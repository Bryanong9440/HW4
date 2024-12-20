#include <stdio.h>
#include <string.h>

//checking if someone has won
int has_won(int board[][7]) {
    //Check horizontal and vertical wins
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            if(board[i][j] == 1 && board[i][j + 1] == 1 && board[i][j + 2] == 1 && board[i][j + 3] == 1){
                return 1;
            }
            else if(board[i][j] == -1 && board[i][j + 1] == -1 && board[i][j + 2] == -1 && board[i][j + 3] == -1){
                return -1;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            if(board[i][j] == 1 && board[i + 1][j] == 1 && board[i + 2][j] == 1 && board[i + 3][j] == 1){
                return 1;
            }
            else if(board[i][j] == -1 && board[i + 1][j] == -1 && board[i + 2][j] == -1 && board[i + 3][j] == -1){
                return -1;
            }
        }
    }
    //Check for Diagonal wins
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(board[i][j] == 1 && board[i + 1][j + 1] == 1 && board[i + 2][j + 2] == 1 && board[i + 3][j + 3] == 1){
                return 1;
            }
            else if(board[i][j] == -1 && board[i + 1][j + 1] == -1 && board[i + 2][j + 2] == -1 && board[i + 3][j + 3] == -1){
                return -1;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(board[i + 3][j] == 1 && board[i + 2][j + 1] == 1 && board[i + 1][j + 2] == 1 && board[i][j + 3] == 1){
                return 1;
            }
            else if(board[i + 3][j] == -1 && board[i + 2][j + 1] == -1 && board[i + 1][j + 2] == -1 && board[i][j + 3] == -1){
                return -1;
            }
        }
    }
    return 0;
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
    char replay[100];
    //Looping turns
    for(int i = 0; i < 100; i++){
        printf("Please enter a move:\n");
        printf(">>> ");
        char input_string[100];
        scanf("%s", &input_string);
        if(strlen(input_string) != 1){
            print_board(board);
            printf("Invalid input.\n");
            while (getchar() != '\n'); 
            continue;
        }
        int column = input_string[0] - 48;
        column--;
        //Checking Validity of input
        if(column < 0 || column > 6){
            print_board(board);
            printf("Invalid input.\n");
            while (getchar() != '\n'); 
            continue;
            }
        //Entering input into board
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
            printf("Would you like to play again? y/n");
            scanf("%s", &replay);
            char replay_check;
            if(strlen(replay) != 1){
                printf("Invalid input\n");
                printf("Would you like to play again? y/n");
                scanf("%s", &replay);
            }else{
                replay_check = replay[0];
            }
            while(replay_check != 'y' && replay_check != 'n'){
                if(strlen(replay) != 1 || strcmp(replay, "y") != 0 && strcmp(replay, "n") != 0){
                    printf("Invalid input\n");
                    printf("Would you like to play again? y/n");
                    scanf("%s", &replay);
                    continue;
                }else{
                    replay_check = replay[0];
                }
                if(replay_check == 'y' || replay_check == 'n'){
                    break;
                }else{
                    continue;
                }
            }
            if(replay_check == 'y'){
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
                continue;
            }else if(replay_check == 'n'){
                break;
            }
        }
    }
    return 0;
}
