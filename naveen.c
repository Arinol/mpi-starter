#include <stdio.h>
#include <mpi.h>

int main(int arg ,char *ar[])

{
     // rank of the process assigned in communicator
 int rank;
    // total number of ranks (size)
  int  size;
   // machine we are on
  char name[80];
  // length of the machine name
  int length;

    // initialize the MPI environment
MPI_Init(&arg,&ar);

// using this we will get total  ranks
MPI_Comm_size(MPI_COMM_WORLD,&size);
// get the process rank in communicator
MPI_Comm_rank(MPI_COMM_WORLD,&rank);

// get the name of processor
MPI_Get_processor_name(name, &length);
 //print the process rank , total ranks
printf( "hello Naveen this is the process rank %d and size in communicator = %d \t on  %s \n", rank, size,name );

// terminate MPI execution enviromnet
MPI_Finalize();
return 0;
}
