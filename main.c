/*
 * main.c
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
#include "base.h"


int main(int argc, char** argv)
{ 
	pf(" tes1\vtes2 \n %d\v%s\t%o%x\n\n\n", 9, "test", 10, 5420); 
	//ps("test1", "test2", EOL);
	return 0;
}
