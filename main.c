#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;
  struct matrix * transtest;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  transtest = make_translate(5,4,3);
  print_matrix(transtest);
  printf("\n");

  transtest = make_scale(1.5,1.5,1.5);
  print_matrix(transtest);
  printf("\n");

  transtest = make_rotX(45);
  print_matrix(transtest);
  printf("\n");

  transtest = make_rotY(120);
  print_matrix(transtest);
  printf("\n");

  transtest = make_rotZ(15);
  print_matrix(transtest);
  printf("\n");
  
  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );
  
  
  free_matrix( edges );
  free_matrix( transform );
}  
