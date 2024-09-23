#ifndef WORKER_H
#define WORKER_H

int work(int iterations, double* raw_pointer_duration, double* stl_unique_ptr_duration, double* stl_shared_ptr_duration,
    double* my_unique_ptr_duration, double* my_shared_ptr_duration,
    int* use_memory_raw_pointer, int* use_memory_stl_unique_ptr, int* use_memory_stl_shared_ptr, int* use_memory_my_unique_ptr,
    int* use_memory_my_shared_ptr,
    bool is_console);

#endif 