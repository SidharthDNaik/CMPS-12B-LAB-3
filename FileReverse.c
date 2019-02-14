/*
* Name: Sidharth Naik
* ID: 1647945
* Class: 12B/M
* Date: January 29,2018
* Description: This is the code that contains all the methods for the FileReverse.c
* File Name: FileReverse.c
* Instructions: After compiling by using the make command in the command line
* type: FileReverse (source file name) (file to copy to) in the command line to run the code
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

// void method call that takes in an array of char's named s
void stringReverse(char* s){

  char tempLetter = ' ';
// creates an array of characters named nS which is equal to the passed in array

  for(int k = strlen(s)-1, i = 0; i < k; k--, i++){
    tempLetter = s[i];
    s[i] = s[k];
    s[k] = tempLetter;
  }

}

int main(int argc, char* argv[]){
  //Creates the files for the input and output aswell as the char array to store the words
  FILE* in;
  FILE* out;
  char word[256];

  if( argc != 3 ){
    printf("Usage: %s <input file> <output file>\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  in = fopen(argv[1], "r");
  if( in==NULL ){
    printf("Unable to write to file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  out = fopen(argv[2], "w");
  if( out==NULL ){
    printf("Unable to write to file %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while( fscanf(in, " %s", word) != EOF ){
    stringReverse(word);
    fprintf(out, "%s\n", word);
  }

  fclose(in);
  fclose(out);

  return(EXIT_SUCCESS);
}
