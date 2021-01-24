#include <stdio.h>
#include <stdlib.h>

#define cls system("cls")

void helpMenu(){

system("CLS");
printf("======================================================This is Help Menu================================================\n\n");
printf("1. The game is played on a grid that's 3 squares by 3 squares.\n");
printf("2. You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.\n");
printf("3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n");
printf("4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n");
printf("5. Now your ready to play.\n");
printf("6. Have Fun and Good Luck ^^. ");
printf("\n\nPress Enter to continue........\n");
char temp;
printf("%c", temp);
getchar();
system("CLS");
}


int menuTitle(){

    
    int printLogo[6][71] =  {{0,0,1,1,1,1,1,1,0,1,1,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1},
                             {0,0,1,1,1,1,1,1,0,1,1,0,0,1,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0},
                             {0,0,0,0,1,1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,1,1,1,1,1,1},
                             {0,0,0,0,1,1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,1,1,1,1,1,1},
                             {0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0},
                             {0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1}};
                        
                                                 
    system("CLS");
	
	                         
	//PrintBorder

    //ATAS
    printf(" %c", 201);
    for(int i = 0; i <= 70; i++){
   	    printf("%c", 205);
	}
    printf("%c\n", 187);


    //tengah
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= 70; j++){
            if(printLogo[i][j] == 1){
                    printf("%c", 219);
            }else{
                printf(" ");
            }
            if(j == 0 || j == 70){
                printf("%c", 186);
            }
        }
        printf("\n");
    }

    //bawah
    printf(" %c", 200);
    for(int i = 0; i < 70; i++){
   	    printf("%c", 205);
	}
    printf("%c\n", 188);
    int as; double xz;
	char nama1[] = "Created by :\n";
	char nama2[] = "1.Alexander Rainer 2440005170 - GAT\n";
	char nama3[] = "2.Angeline Setiono 2401961715 - GAT\n";
	char nama4[] = "3.Kevin Leonardrich 2440041535 - GAT\n";
	char nama5[] = "4.Nicholas Valenthinus Tanoto 2401960624 - GAT\n";
	
	printf("\n\n");
	for(as=0;nama1[as]!=NULL;as++)
	{
		printf("%c",nama1[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
	printf("\n\n");
	for(as=0;nama2[as]!=NULL;as++)
	{
		printf("%c",nama2[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
	printf("\n\n");
	for(as=0;nama3[as]!=NULL;as++)
	{
		printf("%c",nama3[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
	printf("\n\n");
	for(as=0;nama4[as]!=NULL;as++)
	{
		printf("%c",nama4[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
	printf("\n\n");
	for(as=0;nama5[as]!=NULL;as++)
	{
		printf("%c",nama5[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
    printf("\n\n\n                                1.PLay\n");
    printf("                                2.Exit\n");
    printf(" \n                             >> ");

    int choices;
     // keep loopin
    scanf("%d", &choices);
    getchar();
    do{
        switch(choices){
            case 1:{
                //play;
                return 1;
                break;
            }
            case 2:{
                printf("BYE ^^\n");
                return 0;
                break;
            }
            default:{
                printf("INPUT THE RIGHT NUMBER  >:( >> \n");
                continue;
            }
        }
    }while(1);
}


int main (){
    int killCode = menuTitle();
    if(killCode == 0){
        return 0;
    }
    helpMenu();
    int x[] = {2, 8, 14}, y[] = {1, 4, 7}; // coordinate
	int mark[3][3];
	for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) mark[i][j] = -1;
	
	char map[10][18] =
	{"     |     |     ",
	 "  1  |  2  |  3  ",
	 "_____|_____|_____",
	 "     |     |     ",
	 "  4  |  5  |  6  ",
	 "_____|_____|_____",
	 "     |     |     ",
	 "  7  |  8  |  9  ",
	 "     |     |     "};
	
	int turn = 1, posisi; //player 1, kalo turn 2 player 2
	int ctr = 0; // penanda ud brp kotak yg diisi, kalo ud 9, tp syaratnya ga ada yg bener brarti draw;
	int kotak[10] = {0}; // penanda kotaknya dah diisi ato belum, kalo 0 belum, kalo 1 uda
	
	while(1)
	{
		cls;
		printf ("\tTic Tac Toe\n");
		printf ("Player 1 (X) - Player 2 (O)\n");
		for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
		printf ("Player %d, enter a number: ", turn);
		scanf ("%d",&posisi); getchar();
		
		char c; // lambang X atau 0 tergantung player
		if(posisi >= 1 && posisi <= 9)
		{
			if(kotak[posisi]) // jika sudah terisi 
			{
				printf("This position is already filled");
				getchar();
				continue;
			}
			
			mark[(posisi-1) / 3][(posisi-1) % 3] = turn;
			if(turn == 1) 
			{
				c = 'X';
				turn  = 2;
			}
			else
			{
				c = 'O';
				turn = 1;
			}
			// x = 2 8 14
			// y = 1 4 7
			map[y[(posisi-1) / 3]][x[(posisi-1) % 3]] = c;
			kotak[posisi]++; ctr++; // update: kotak terisi & jumlah kotak terisi bertambah
		}
		else
		{
			printf ("Error! Please write the number between 1 to 9! Press Enter to Continue!");
			getchar();
		}
		
		// syarat game berakhir
		
		
		//vertical
		int same = 0;
		for(int i = 0; i < 3; i++)
		{
			if(mark[i][0] != -1 && mark[i][0] == mark[i][1] && mark[i][0] == mark[i][2]) same = mark[i][0];
			if(same)
			{
				cls;
				printf ("\tTic Tac Toe\n");
				printf ("Player 1 (X) - Player 2 (O)\n");
				for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
				printf("PLAYER %d WINS!\n", same);
				puts("");
				puts("Thanks For Playing! ^^");
				break;
			}
		}
		if(same) break;
		
		//horizontal
		same = 0;
		for(int i = 0; i < 3; i++)
		{
			if(mark[0][i] != -1 && mark[0][i] == mark[1][i] && mark[0][i] == mark[2][i]) same = mark[0][i];
			if(same)
			{
				cls;
				printf ("\tTic Tac Toe\n");
				printf ("Player 1 (X) - Player 2 (O)\n");
				for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
				printf("PLAYER %d WINS!\n", same);
				puts("");
				puts("Thanks For Playing! ^^");
				break;
			}
		}
		if(same) break;
		
		// main diagonal
		if(mark[0][0] != -1 && mark[0][0] == mark[1][1] && mark[0][0] == mark[2][2])
		{
			cls;
			printf ("\tTic Tac Toe\n");
			printf ("Player 1 (X) - Player 2 (O)\n");
			for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
			printf("PLAYER %d WINS!\n", mark[0][0]);
			puts("");
			puts("Thanks For Playing! ^^");
			break;
		}
		// other diagonal
		if(mark[0][2] != -1 && mark[0][2] == mark[1][1] && mark[0][2] == mark[2][0])
		{
			cls;
			printf ("\tTic Tac Toe\n");
			printf ("Player 1 (X) - Player 2 (O)\n");
			for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
			printf("PLAYER %d WINS!\n", mark[0][2]);
			puts("");
			puts("Thanks For Playing! ^^");
			break;
		}
		
		if(ctr == 9)
		{
			cls;
			printf ("\tTic Tac Toe\n");
			printf ("Player 1 (X) - Player 2 (O)\n");
			for (int i = 0; i < 10; i++) printf ("%s\n", map[i]);
			puts("IT'S A DRAW!");
			puts("");
			puts("Thanks For Playing! ^^");
			break;
		}
	}
	return 0; 
}
