/* 
 * File:   exemple_fonction.c
 * Author: isen
 *
 * Created on October 12, 2011, 4:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

void increment (int i)  //copie de t : i=42
{
    i=i+1;		// i=43
}
//on sort de la fonction

void increment2 (int j[2])  
{
    j[0]=j[0]+1;        

}   

int increment3 (int i) 
{
    return i++;		
}
    
/*
 * 
 */
int main(int argc, char** argv) {
    
    int t, T[2];
    
    t = 42;
    increment(t); // i =43 mais t n'a pas boug� car la fonction a travaill� sur la copie de t
    printf("%d", t);
    
    t = increment3(t); // i =43 est retourn� par la fonction et assin� � t, t est maintenant �gale � 43
    printf("\n%d", t);
    
    T[0] = 42;
    increment2(T);  // pour les tableaux la case est modifi� et renvoy�
    printf("\n%d", T[0]);        
    

    return (EXIT_SUCCESS);
}


