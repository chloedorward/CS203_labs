#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void initStudent( Student s, char* l, char* f, int a ) {
  strcpy( s.last, l ); 
  s.first = f;
  s.age = a;
}

void initStudentp( Student *s, char* l, char* f, int a ) {
  strcpy( s->last, l );
  s->first = f;
  s->age = a;
}

void printStudent( Student s ) {
  char printBuf[200];
  sprintf( printBuf, "The student %s %s has an age of %d\n", s.first, s.last, s.age );
  printf( "%s", printBuf );
}

		 
