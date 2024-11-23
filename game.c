/*
You need to show a tic-tac-toe game implementation in the next day. 
Starting the game, a blank grid 3x3 (usual tic tac toe board) will be shown in the terminal, 
it will prompt player 1 to give input. Cells in the board can be denoted by numbers 1-9 (3x3 matrix)
.After that, the updated board will be shown, player 2 will be prompted. 
You can assume player 1 to mark as 'X' on the board, player 2 with 'O'. 
The game will stop if it's a draw, someone wins, or by pressing 'Q' any moment in the game.
Second part: when the program runs, users can select whether it's a single player or 2 player mode. 
On single player, the computer will play against the user. after a game ends, 
it will prompt whether the user wants to play again. 
Note: you cannot use array, recursion, or other untouched topics, just loops and conditionals.
Your task here is to code a logic enabling the computer to make a smart(it doesn't have to be the best) move.
*/

#include <stdio.h>
#include <stdlib.h>

char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';

void print_board() {
    printf("\n\n");
    printf(" %c | %c | %c\n", a, b, c);
    printf("-----------\n");
    printf(" %c | %c | %c\n", d, e, f);
    printf("-----------\n");
    printf(" %c | %c | %c\n", g, h, i);
    printf("\n\n");
}

int check_win() {
    if (a == b && b == c)
        return 1;
    else if (d == e && e == f)
        return 1;
    else if (g == h && h == i)
        return 1;
    else if (a == d && d == g)
        return 1;
    else if (b == e && e == h)
        return 1;
    else if (c == f && f == i)
        return 1;
    else if (a == e && e == i)
        return 1;
    else if (c == e && e == g)
        return 1;
    else
        return 0;
}

int check_draw() {
    if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
        return 1;
    else
        return 0;
}

void player_move(int player) {
    char move;
    printf("Player %d's Move: ", player);
    while (scanf(" %c", &move) != 1)
    {
        printf("Invalid Move\n");
        printf("Player %d's Move: ", player);
    }
    if(move == 'Q')
        exit(0); 
    if (move == '1' && a == '1')
        a = (player == 1) ? 'X' : 'O';
    else if (move == '2' && b == '2')
        b = (player == 1) ? 'X' : 'O';
    else if (move == '3' && c == '3')
        c = (player == 1) ? 'X' : 'O';
    else if (move == '4' && d == '4')
        d = (player == 1) ? 'X' : 'O';
    else if (move == '5' && e == '5')
        e = (player == 1) ? 'X' : 'O';
    else if (move == '6' && f == '6')
        f = (player == 1) ? 'X' : 'O';
    else if (move == '7' && g == '7')
        g = (player == 1) ? 'X' : 'O';
    else if (move == '8' && h == '8')
        h = (player == 1) ? 'X' : 'O';
    else if (move == '9' && i == '9')
        i = (player == 1) ? 'X' : 'O';
    else {
        printf("Invalid Move\n");
        player_move(player);
    }

    print_board();
}

void computer_move(int player) {
    printf("\n\n");
    printf("Computer's Move: ");

    if (a == '1' && ((b == 'O' && c == 'O') || (d == 'O' && g == 'O') || (e == 'O' && i == 'O')))
        a = 'O';
    else if (b == '2' && ((a == 'O' && c == 'O') || (e == 'O' && h == 'O')))
        b = 'O';
    else if (c == '3' && ((a == 'O' && b == 'O') || (f == 'O' && i == 'O') || (e == 'O' && g == 'O')))
        c = 'O';
    else if (d == '4' && ((a == 'O' && g == 'O') || (e == 'O' && f == 'O')))
        d = 'O';
    else if (e == '5' && ((a == 'O' && i == 'O') || (b == 'O' && h == 'O') || (c == 'O' && g == 'O') || (d == 'O' && f == 'O')))
        e = 'O';
    else if (f == '6' && ((c == 'O' && i == 'O') || (d == 'O' && e == 'O')))
        f = 'O';
    else if (g == '7' && ((a == 'O' && d == 'O') || (e == 'O' && c == 'O') || (h == 'O' && i == 'O')))
        g = 'O';
    else if (h == '8' && ((g == 'O' && i == 'O') || (b == 'O' && e == 'O')))
        h = 'O';
    else if (i == '9' && ((g == 'O' && h == 'O') || (a == 'O' && e == 'O') || (c == 'O' && f == 'O')))
        i = 'O';
    else if (a == '1' && ((b == 'X' && c == 'X') || (d == 'X' && g == 'X') || (e == 'X' && i == 'X')))
        a = 'O';
    else if (b == '2' && ((a == 'X' && c == 'X') || (e == 'X' && h == 'X')))
        b = 'O';
    else if (c == '3' && ((a == 'X' && b == 'X') || (f == 'X' && i == 'X') || (e == 'X' && g == 'X')))
        c = 'O';
    else if (d == '4' && ((a == 'X' && g == 'X') || (e == 'X' && f == 'X')))
        d = 'O';
    else if (e == '5' && ((a == 'X' && i == 'X') || (b == 'X' && h == 'X') || (c == 'X' && g == 'X') || (d == 'X' && f == 'X')))
        e = 'O';
    else if (f == '6' && ((c == 'X' && i == 'X') || (d == 'X' && e == 'X')))
        f = 'O';
    else if (g == '7' && ((a == 'X' && d == 'X') || (e == 'X' && c == 'X') || (h == 'X' && i == 'X')))
        g = 'O';
    else if (h == '8' && ((g == 'X' && i == 'X') || (b == 'X' && e == 'X')))
        h = 'O';
    else if (i == '9' && ((g == 'X' && h == 'X') || (a == 'X' && e == 'X') || (c == 'X' && f == 'X')))
        i = 'O';
    else {
        int move;
        while (1) {
            move = rand() % 9 + 1;
            if (move == 1 && a == '1') {
                a = 'O';
                break;
            } else if (move == 2 && b == '2') {
                b = 'O';
                break;
            } else if (move == 3 && c == '3') {
                c = 'O';
                break;
            } else if (move == 4 && d == '4') {
                d = 'O';
                break;
            } else if (move == 5 && e == '5') {
                e = 'O';
                break;
            } else if (move == 6 && f == '6') {
                f = 'O';
                break;
            } else if (move == 7 && g == '7') {
                g = 'O';
                break;
            } else if (move == 8 && h == '8') {
                h = 'O';
                break;
            } else if (move == 9 && i == '9') {
                i = 'O';
                break;
            }
        }
    }
    print_board();
    
}

int main() {
    printf("\n\n");
    printf("Welcome to Tic Tac Toe\n");
    printf("Choose 1 for Single Player\n");
    printf("Choose 2 for Two Player\n");

    int choice;
    while (scanf("%d", &choice) != 1)
    {
        if (getchar() == 'Q')
            exit(0);
        printf("Invalid Choice\n");
        printf("Choose 1 for Single Player\n");
        printf("Choose 2 for Two Player\n");
    }
    
    while (choice != 1 && choice != 2) {
        printf("Invalid Choice\n");
        printf("Choose 1 for Single Player\n");
        printf("Choose 2 for Two Player\n");
        scanf("%d", &choice);
    }
    if (choice == 1) {
        printf("\n\n");
        printf("Single Player Mode\n");
        printf("Player 1 is X\n");
        printf("Computer is O\n");
        print_board();
        int player = 1;
        while (1) {
            if (player == 1) {
                player_move(player);
                if (check_win()) {
                    printf("Player 1 Wins\n");
                    break;
                }
                if (check_draw()) {
                    printf("Draw\n");
                    break;
                }
                player = 2;
            } else {
                computer_move(player);
                if (check_win()) {
                    printf("Computer Wins\n");
                    break;
                }
                if (check_draw()) {
                    printf("Draw\n");
                    break;
                }
                player = 1;
            }
        }
    }
    else {
        printf("\n\n");
        printf("Two Player Mode\n");
        printf("Player 1 is X\n");
        printf("Player 2 is O\n");
        print_board();
        int player = 1;
        while (1) {
            player_move(player);
            if (check_win()) {
                printf("Player %d Wins\n", player);
                break;
            }
            if (check_draw()) {
                printf("Draw\n");
                break;
            }
            player = (player == 1) ? 2 : 1;
        }
    }
    return 0;
}