/*
Explanation of each code and function-->
Including all the header files for this project like <stdio.h> for input/output operation, <conio.h>, and <stdbool.h> for assigning boolean values, We also use <stdlib.h> and <time.h> for using random function in variable known as computer.
*/

#include<stdio.h>  
#include<conio.h>
#include<stdbool.h> //For assigning the values in the form of true or false.
//For using in-built random function in variable known as computer in order to generate randomly.
#include<stdlib.h>  
#include<time.h>

//Here we use delay() function in order to load  for certain seconds
void delay(int t){

    //assigning 3 variable add, time, i;
    int add;
    int time;
    int i;

    //calculating time = t (as parameter in delay function) * 100000000;  
    time = t* 100000000;
    //This is to overload in for loop so we will get time enough.
    for (int i = 0; i < time; i++)
    {
        add*=i;
        add++;
        add++;
    }
    
}
/*
Here we create playGame() function and pass two parameters--> storingThree (this means storing all the three i.e rock, paper, and scissors by the computer) and storingThree2 (this means storing all the three by the user). Remember storingThree and storingThree2 is character whereas Computer and User is considered to be as integer ranging from 0 to 100.
*/

void playGame(char storingThree, char storingThree2){
    /*
    
    There are eight conditions in this game.
    Conditions 1: 
    storingThree (Computer) is equal to storingThree2 (User) then it is considered to be Draw.
    */
    if(storingThree==storingThree2){
        printf("\n\n\t\tMatch Draw");
    }

    //Conditions 2:
    //storingThree (Computer) is equal to 'R' (which is Rock) and storingThree2 (User) is equal to 'P' -----> User wins this match.
    else if(storingThree=='R' && storingThree2=='P'){
        printf("\n\n\t\tUser wins");
    }

    //Conditions 3:
    //storingThree (Computer) is equal to 'P' (which is Rock) and storingThree2 (User) is equal to 'R' -----> Computer wins this match.
    else if(storingThree=='P' && storingThree2=='R'){
        printf("\n\n\t\tComputer wins");
    }

    //Conditions 4:
    //storingThree (Computer) is equal to 'R' (which is Rock) and storingThree2 (User) is equal to 'S' -----> Computer wins this match.
    else if(storingThree=='R' && storingThree2=='S'){
        printf("\n\n\t\tComputer wins");
    }

    //Conditions 5:
    //storingThree (Computer) is equal to 'S' (which is Rock) and storingThree2 (User) is equal to 'R' -----> User wins this match.
    else if(storingThree=='S' && storingThree2=='R'){
        printf("\n\n\t\tUser Wins");
    }

    //Conditions 6:
    //storingThree (Computer) is equal to 'P' (which is Rock) and storingThree2 (User) is equal to 'S' -----> User wins this match.
    else if(storingThree=='P' && storingThree2=='S'){
        printf("\n\n\t\tUser wins");
    }

    //Conditions 7:
    //storingThree (Computer) is equal to 'S' (which is Rock) and storingThree2 (User) is equal to 'P' -----> Computer wins this match.
    else if(storingThree=='S' && storingThree2=='P'){
        printf("\n\n\t\tComputer wins");
    }

    //Conditions 8:
    //if the computer and user exceeds by 100 then it show that number out of bound and doesn't print any type of this categories.
    else{
        printf("\n\n\t\tThe number which is out of bound cannot print any type of these three categories.");
    }
}

//Executing the main program....
int main(){
    system("CLS");
    //Declaring boolean variable as a=true in order to use this variable to run while loop statement.
    bool a= true;

    //We use while loop statement to check if it is true then it runs the game and it is break out of the loop when you don't want to play game. 
    while(a){
        //Welcome to the Rock Paper and Scissors.
        system("COLOR 0A");
        printf("************************************************************************************************************************");
        printf("\n\n\t\tWelcome to the Rock, Paper and Scissors Game !!! \n\n");

        printf("\n\n\t\tMade by --> ");
        printf("\n\t\t1) Moni");
        printf("\n\t\t1) Lata Kanyal");
        printf("\n\t\t1) Komal Bhandari");
        printf("\n\t\t1) Jyoti Joshi");
        printf("\n\t\t1) Hemant Giri");
        printf("\n\t\t1) Raj Bhandari");
        printf("\n\n\t\t1) Deepanshu");

        printf("\n\nThis Game is consist of one computer and another user that can be played, So for that enter the number between the range of 0 to 100 \n\n  ");
        printf("Note ------>  If the number lies between 0 to 33 (0 as included) then it is Rock denoted as (R)\n");
        printf("              If the number lies between 33 to 66 (33 as included) then it is Paper denoted as (P)\n");
        printf("              If the number lies between 66 to 100 (66 as included) then it is Scissor denoted as (S)\n\n");

        system("COLOR 0A");
        printf("\t\tPlease wait for 5 seconds");
        printf("\n\n************************************************************************************************************************");
        delay(5);
        
        system("CLS");
        system("COLOR 0D");
        //Initialize the variable name as computer and user for declaring integer variable and storingThree and storingThree2 for declaring character. 
        int computer, user;
        char storingThree;
        char storingThree2;

        //Using srand() function and rand() function to get number randomly from 0 to 100.
        srand(time(NULL));
        computer = rand()%100;
        //First the computer is already entered by them randomly.
        printf("\n\n************************************************************************************************************************");
        printf("\n\n\t\tThe number entered by computer is given below......:");
        
        //But secondly, the user can enter the number by giving input.
        printf("\n\n\t\tEnter the number by user:  ");
        scanf("%d", &user);

        //Here we call delay() function to load the answer within 5 seconds.
        printf("\n\n\t\tIt's Loading");
        delay(1);

        //Conditions for Computer.
        //Here are the three conditions for rock paper and scissors.
        //Condition 1:
        //If computer lies between 0 (included) and 33 (excluded) then storingThree stores character as 'R' (Rock).
        if (computer>=0 && computer<33){
            storingThree='R';
            printf("\n\n\t\tComputer: Rock\n");
        }
        //Condition 2:
        //If computer lies between 33 (included) and 66 (excluded) then storingThree stores character as 'P' (Paper).
        else if(computer>=33 && computer<66){
            storingThree='P';
            printf("\n\n\t\tComputer: Paper\n");
        }
        //Condition 3:
        //If computer lies between 66 (included) and 100 (included) then storingThree stores character as 'S' (Scissors).
        else if(computer>=66 && computer<=100){
            storingThree='S';
            printf("\n\n\t\tComputer: Scissors\n");
        }
        //Condition 4:
        //If computer exceeds by 100 then it is considered to be as Number out of range.
        else{
            printf("\t\tNumber out of range");
        }


        //Conditions for User
        //Condition 1:
        //If computer user between 0 (included) and 33 (excluded) then storingThree stores character as 'R' (Rock).
        if (user>=0 && user<33){
            storingThree2='R';
            printf("\n\n\t\tUser: Rock\n");
        }
        //Condition 2:
        //If computer lies between 33 (included) and 66 (excluded) then storingThree stores character as 'P' (Paper).
        else if(user>=33 && user<66){
            storingThree2='P';
            printf("\n\n\t\tUser: Paper\n");
        }
        //Condition 3:
        //If computer lies between 66 (included) and 100 (included) then storingThree stores character as 'S' (Scissors).
        else if(user>=66 && user<=100){
            storingThree2='S';
            printf("\n\n\t\tUser: Scissors\n");
        }
        //Condition 4:
        //If computer exceeds by 100 then it is considered to be as Number out of range
        else{
            printf("\n\n\t\tNumber out of range");
        }

       //Here we call the playGame Function to start the game 
        playGame(storingThree, storingThree2);
        printf("\n\n************************************************************************************************************************");
        //Declaring another variable as integer data type known as WantToPlayGame.
        int WantToPlayGame;
        //By giving the value Any number or 0. This means if enter any number then the full game runs repeatedly otherwise if you enter 0 then it will come out of the while loop and program terminates.
        printf("\n\n\t\tDo want to play games yes or no (Any number/0): ");
        system("COLOR 0E");
        scanf("%d",&WantToPlayGame);
        //Checking if WantToPlayGame is equal to 0 then it will break out of the loop and program terminates. 
        system("CLS");
        if(WantToPlayGame==0){
            break;
        } 
        
    }
    return 0;
    
}