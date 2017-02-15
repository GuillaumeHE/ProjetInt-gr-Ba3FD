/* 
 * File:   main.c
 * Author: Labo
 *
 * Created on 15 février 2017, 14:14
 */
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "init_uart.h"
#include "init.h"

/*
 * 
 */
int main(int argc, char** argv) {
    init();
    init_uart();
    while(1){
        RPINR18bits.U1RXR = 6;
        

        //U1TXREG = 00101;
        RPOR3bits.RP7R = 3;
    
        if (U1STAbits.URXDA == 1){
            U1TXREG = U1RXREG; //On copie contenu registre RX dans TX
        } 
        

    }


//return (EXIT_SUCCESS);    
    return 0;
}

