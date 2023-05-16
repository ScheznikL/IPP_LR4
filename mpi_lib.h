#pragma once
#ifndef MPI_LIB_H
#define MPI_LIB_H

#include <mpi.h>
#include <iostream>

using namespace std;

void Init(int* argc, char*** argv);
void Finalize();
void Isend(int count, MPI_Datatype datatype, int dest, int msgtag, MPI_Comm comm, MPI_Request* request, int rank);
void Irecv(int buf, int count, MPI_Datatype datatype, int source, int msgtag, MPI_Comm comm, MPI_Request* request, int rank);
void Wait(MPI_Request* request, MPI_Status* status);

#endif // MPI_LIB_H
