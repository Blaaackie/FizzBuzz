//
//  main.c
//  FizzBuzz
//
//  Created by Tye Blackie on 2017-05-11.
//  Copyright © 2017 Tye Blackie. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
// i is equal to zero, if i is greater than or equal to 100, take i and add one.
    
    for(int i = 1; i <= 100;i++){
        
// Now i want to have the code go through each number and ask, if this number is a multiple of 3 or 5, if yes (multiple of 3) print Fizz intead of value. if yes (multiple of 5) then print Buzz instead of value. If yes to both (multiple of both 3 & 5) then print FizzBuzz instead of value. Repeat untill i = 100.
    
        if((i%5==0)&&(i%3==0)){
            printf("FizzBuzz\n");
        }
        
        else if(i%5==0){
            printf("Buzz\n");
        }
    
        else if(i%3==0){
            printf("Fizz\n");
        }
        else
            printf("%d\n",i );
        

        }}

/*Looking back, this program didn't work the first few times. I realised that if wrote it so that the "else if" loop read the first condition as (multiple of 3) or (multiple of 5) alone, it assigns the Fizz or Buzz to i, then moves on. Not having to look at the (multiples of both) condition. Making that top priority assures that it does not get skipped over. [[Excuse my terminology in this explination as my coding knowledge is finite]] :)
    */
