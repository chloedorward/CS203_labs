#include <stdio.h>
#include <stdlib.h>
#include "student.h"

Student student1, student2;
Student* p;

int main() {

  initStudent( student1, "one", "f1", 0 );
  printStudent( student1 );
  
  initStudentp( &student2, "two", "f2", 10 );
  printStudent( student2 );
  
  p = &student1;
  initStudentp( p, "oneA", "f3", 20 );
  printStudent( *p );

  p = malloc( sizeof( Student ));
  initStudentp( p, "oneB", "f4", 25 ); /* ``p */
  printStudent( *p );
  free( p );

}
