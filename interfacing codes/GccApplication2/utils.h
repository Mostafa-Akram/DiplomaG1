/*
 * utils.h
 *
 * Created: 10/2/2024 7:50:43 PM
 *  Author: Mostafa Akram
 */ 


#ifndef UTILS_H_
#define UTILS_H_


#define GET_BIT(PORT,BIT)		((PORT >> BIT) & 1)
#define SET_BIT(PORT,BIT)		PORT = PORT | (1<<BIT)    // PORT |= (1<<BIT)    x=x+1   x+=1
#define CLR_BIT(PORT,BIT)		PORT = PORT &~ (1<<BIT)
#define TOG_BIT(PORT,BIT)       PORT = PORT^(1<<BIT)      // PORT ^= (1<<BIT)


#endif /* UTILS_H_ */