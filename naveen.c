#include <stdio.h>
#include <mpi.h>

int main(int arg ,char *ar[])

{

/* The rank is a unique name supplied to each process. */
int rank;

/* Total number of ranks. */
int  size;

/* The name of the machine that we are using currently. */
char name[80];

/* length of the machine name, string len of machine name. */
int length;

/* initialize the MPI environment. */

// what &arg and &ar means???
MPI_Init(&arg, &ar);

/* Determines the size of the group associated with a communicator,
number of processes in the group of comm (integer)*/
MPI_Comm_size(MPI_COMM_WORLD, &size);


/* Determines the rank of the calling process in the communicator.
rank of the calling process in the group of comm (integer). */
MPI_Comm_rank(MPI_COMM_WORLD, &rank);

/* get the name of processor. */
MPI_Get_processor_name(name, &length);


 //Improve description.
printf( "hello Naveen this is the process rank %d and size in communicator = %d \t on  %s \n", rank, size,name );

/* terminate MPI execution enviromnet. */
MPI_Finalize();

return 0;
}
