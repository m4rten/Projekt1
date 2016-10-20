#include<stdio.h>
 
  void FirstReverse(char str[])
   { 
      if (str[1] != '\0') //if the first character is not '\O' 
        FirstReverse((str + 1)); // call again the function but with +1 in the pointer addr
      printf("%c",*str); 
    }

int main()
{
  char input[4096] = {0}; // in input können bis zu 4096 

  printf("Bitte tippen sieh ein Wort ein => "); //Bildschirmausgabe des Textes in ""
  scanf("%s",input); //Tastatureingabe wird erwartet. Das Eingegebene wird dann input zugewiesen
  FirstReverse(input); //Der Wert von input wird FirstReverse zugewiesen
  printf("\n"); //Bildschirmausgabe des Textes in ""
  return (0);
  
}