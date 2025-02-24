/*
 * LCD_Int.h
 *
 * Created: 2/24/2025 6:46:17 PM
 *  Author: Mostafa Akram
 */ 


#ifndef LCD_INT_H_
#define LCD_INT_H_

// ../file --> return to previous folder the select the file
// ./folder/file ---> enter folder then select file 


#include "../StdTypes.h" 
#include "../utils.h"
#include "../MCAL/DIO_Int.h"
#include "../CFG/LCD_Cfg.h"

#define F_CPU 8000000
#include <util/delay.h>



void LCD_Init(void);

void WriteIns(u8 ins);
void WriteData(u8 data);


#endif /* LCD_INT_H_ */