/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
#if 0
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        
        /* Place your application code here. */
    }
#endif

    char  strPtr;                        // Parameter pointer  
      
    //UART_1CmdReset();                      // Initialize receiver/cmd  
      
    UART_1_Init();
    UART_2_Init();                                // buffer      
//UART_1IntCntl(UART_ENABLE_RX_INT);     // Enable RX interrupts  
   // Counter8_WritePeriod(155);            // Set up baud rate generator  
    //Counter8_WriteCompareValue(77);  
    //Counter8_Start();                     // Turn on baud rate generator       
      
    UART_1_Start();         // Enable UART  
    UART_2_Start();         // Enable UART  
    //M8C_EnableGInt ;                      // Turn on interrupts  
    //UART_1_PutString("\r\nWelcome to PSoC UART test program. V1.1 \r\n");
    //UART_1_CPutString("\r\nWelcome to PSoC UART test program. V1.1 \r\n");  
      
    while(1) {  
       
       //if(UART_1_CmdCheck()) {           
        // Wait for command    
          //if(strPtr = UART_szGetParam()) {       // More than delimiter?  
             //UART_1_PutString("00");
            //UART_1_PutCRLF(0x00);
            strPtr=0x00;
            strPtr = UART_2_GetChar();
            if(strPtr != 0x00){
            UART_1_PutChar(strPtr);
            }
             //UART_1_PutString(strPtr);             // Print out command   
             //UART_1_PutString("<\r\nParamaters:\r\n");    
             //while(strPtr = UART_szGetParam()) { // loop on each pa2rameter    
                //UART_1_PutString("   <");    
                //UART_1_PutString(strPtr);          // Print each parameter    
                //UART_1_PutString(">\r\n");    
             //}   
          //}   
       //UART_CmdReset();                          // Reset command buffer    
       //}   
   }  
}

/* [] END OF FILE */
