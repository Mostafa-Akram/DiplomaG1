/*
 * LCD_interface.h
 *
 * Created: 2/3/2025 4:44:44 PM
 *  Author: Mostafa Akram
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

void LCD_init (void);



void LCD_WriteInst(u8 inst);
void LCD_WriteChar(u8 chr);
void LCD_WriteStr(u8* str);
void LCD_WriteNum(s32 num);

void LCD_Writedata_8bit(u8 data);






#endif /* LCD_INTERFACE_H_ */