/*
 * UTILS.h
 *
 * Created: 10/7/2023 6:42:23 PM
 *  Author: lenovo
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define  GET_BIT(reg,bit)  ((reg>>bit)&1)

#define  SET_BIT(reg,bit)  (reg=reg|(1<<bit))
#define  CLR_BIT(reg,bit)  (reg=reg&~(1<<bit))
#define  TOG_BIT(reg,bit)  (reg=reg^(1<<bit))


#endif /* UTILS_H_ */