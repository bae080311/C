
#include <stdio.h>
 
 
int main (void)
{
    
    int time , score; //코드업 1165번 축구 점수 계산하는 코드
 
    scanf("%d %d", &time, &score);
    time = 90 - time;
    if( time == 0){
        printf("%d",score);
        
    }  
    else{
        score+=1; 
        if(time >=5){
            score += (time-1)/5;
        }
        printf("%d",score);
        
 
        
    }
    
 
    return 0;
}