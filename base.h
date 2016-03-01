/*
 * base.h
 * This file is part of Formatted Printing in C
 *
 * Copyright (C) 2016 - Anas Rchid
 *
 * Formatted Printing in C is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Formatted Printing in C is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */
#ifndef BASE_H_
 #define BASE_H_
   #define EOL NULL
  #ifndef EOF // (EOF) - End Of File character. (-1)
   #define EOF (-1)
   #endif// EOF 
 #include<stdio.h>// Facultatif  
 #include<stdarg.h>	
  typedef unsigned int u_int;

	void pf(char*, ...); 			//  Our printf function
	char* convert(u_int, int); 		// Convert integer number into octal, hex, etc.
	int ps(const char* , ...); // our puts function



#endif // BASE_H_
