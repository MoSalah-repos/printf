#include "main.h" 
 
/** 
 *  * printf_per - returns the character 
 *   * @_per: list of arguments 
 *    * Return: the buffer index 
 *     */ 
int printf_per(va_list _per) 
{ 
	 char c = va_arg(_per, int); 
	  
	  /* reassigned due to unexpected behaviour */ 
	  c = '%'; 
	    
	   return (write(1, "%%", 1)); 
}
