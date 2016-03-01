//
//
#include "base.h"
//
//
void pf(char* _Str, ...) 
{ 
	char* conversion; 
	//
	u_int i; 
	char* S; 
	
	//Initializing arguments 
	//
	va_list arg; 
	va_start(arg, _Str); 
	 
	for(conversion = _Str; *conversion != '\0'; conversion++) 
	{ 
		while( *conversion != '%' ) 
		{ 
			putchar(*conversion);
			conversion++; 
		}//end while
		conversion++; 
		//Fetching and executing arguments
		//
		switch(*conversion) 
		{ 
			case 'c' : i = va_arg(arg, int);		//char argument
						putchar(i);
						break; 
			case 'd' : i = va_arg(arg, int); 		//Decimal/Integer argument
						if(i < 0) { i = -i; putchar('-');} 
						ps(convert(i, 10), EOL );
						break; 
			case 'o': i = va_arg(arg,u_int); //Octal representation
						ps(convert(i, 8), EOL);
						break; 
			case 's': S = va_arg(arg, char *); 		//string argument
						ps(S, EOL); 
						break; 
			case 'x': i = va_arg(arg, u_int); //Hexadecimal representation
			ps(convert(i, 16), EOL);
						break; 
		}//end switch	
	}//end for
	//
	//
	va_end(arg); 
}// end pf()
//
//
char* convert(u_int num, int base) 
{ 
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50]; //the number in binary or hex or octal.. etc.
	char *ptr; 
	
	ptr = &buffer[49]; // from last
	*ptr = '\0'; 
	
	do 
	{ 
		*--ptr = Representation[num%base]; 
		num /= base; 
	}while(num != 0); 
	//
	return (ptr); 
}// end of convert()
//
//
/*
int ps(const char* _Str, ...)
{
	//int  i = 0;
	
	const char* string = _Str;
	//va_list
	//
		va_list arg;
		va_start(arg, _Str);
		
	//for(i = 0;	; ++i)
	//	if(_Str[i] == '\0')
	//		putchar('\n');
	while(string != EOL){
// 		while(_Str[i])
// 		{
// 			if( putchar(_Str[i]) == EOF)  //test on EOF value from writing the char
// 			{ 
// 				return EOF;// (-1)
// 			}//end if
// 	     i++;
// 		}//end inner while
// 		   if(putchar('\n') == EOF)  //occur right after we quit due to the null terminated character.
// 		   {
// 			   return EOF;// (-1)
// 		   }//end if
			printf("%s\n", string);
		   string = va_arg(arg, const char*);
	
// 		}//end of inner while
	}//end outter while
		va_end(arg); 
		//
		return 1; //to meet spec.
}// end ps()
//
//
*/
int ps( const char* firstStr, ... )
{
	va_list argptr;
	va_start( argptr, firstStr );
	
	const char* str = firstStr;
	while ( str != EOL )
	{
		int i = 0;
		while ( str[i] )
		{
			if( putchar( str[i]) == EOF )
				return EOF;
			i++;
		}
		        if ( putchar( '\n' ) == EOF )
					return EOF;
				
				printf( "%s", str );
				str = va_arg( argptr, const char* );
	}
	    va_end( argptr );
		return 1;
}
