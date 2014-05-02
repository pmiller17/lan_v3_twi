/*
 * basic_macros.h
 *
 * Created: 5/1/2014 11:14:14 PM
 *  Author: Paul Miller
 */ 


#ifndef BASIC_MACROS_H_
#define BASIC_MACROS_H_

// BIT OP MACROS

#define SETBIT(ADDRESS,BIT) (ADDRESS |= (unsigned char)1<<BIT))
#define CLRBIT(ADDRESS,BIT) (ADDRESS &= (unsigned char)~(1<<BIT))
#define	CHKBIT(ADDRESS,BIT) (ADDRESS & (unsigned char)(1<<BIT))

// put port operation stuff here, setup macros in here

// then you can typedef stuff here

#endif /* BASIC_MACROS_H_ */