# SciComp-FP-FSM-Of-Information_Display_At_The_Mall-Christoffer-

Firtsly, the chosen stae for Informatiom Display which is at the mall represents F1, F2, F3, F4.
The diagram below shows the FSM of the information display:


![IMG_2378](https://user-images.githubusercontent.com/115225767/209980476-cafabb62-a4dc-432c-af1e-b42a295c0305.JPG)


It shows four stats  F1, F2, F3, F4. [FLoor 1, FLoor 2, FLoor 3, FLoor 4]
In the information display FSM, the binary assignments are as below:

F1: 00

F2: 01

F3: 10

F4; 11

When state is in F1 it has four possible outcomes if given an input, the outcomes after the input can be: Stay in F1, Change to F2, Change to F3, Change to F4.

When state is in F2 it has four possible outcomes if given an input, the outcomes after the input can be: Stay in F2, Change to F1, Change to F3, Change to F4.

When state is in F3 it has four possible outcomes if given an input, the outcomes after the input can be: Stay in F3, Change to F1, Change to F2, Change to F4.

When state is in F4 it has four possible outcomes if given an input, the outcomes after the input can be: Stay in F4, Change to F1, Change to F2, Change to F3.







 Here is the State and Transition Table for the information display FSM and K-Map 1 and 2:
 
 
 
 
 
 
 ![IMG_2377](https://user-images.githubusercontent.com/115225767/209980508-855ffa51-56ed-439f-bfb9-84861f5ac76c.JPG)

 
 The derived combinatorial boolean equation for Y1 = F3 while Y2 = F4
 
We will move on to main.c
In  main.c, it starts off with:

#include <stdio.h>
#include <unistd.h>

void compute_outputs(int A, int B, int C, int D, int *y1, int *y2) {
*y1 = F3;
*y2 = F4;


when main.c is running, the terminal will show us as the picture below:





<img width="433" alt="Screen Shot 2022-12-29 at 11 26 27 PM" src="https://user-images.githubusercontent.com/115225767/209981438-b405fea4-5ede-4006-871a-7ce2eaa43816.png">


1.8 seconds is the seconds depending on their timer.
