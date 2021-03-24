typedef struct {
  char last[100];
  char* first;
  int age;
  float height;
} Student;

extern void initStudent( Student, char*, char*, int );
extern void initStudentp( Student*, char*, char*, int );
extern void printStudent( Student );
