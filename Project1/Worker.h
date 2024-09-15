#include <memory>
#include <chrono>
#include <Windows.h>
#include "Creator.h"

int work(int iterations, double* raw_pointer_duration, double* stl_unique_ptr_duration, double* stl_shared_ptr_duration,
    double* my_unique_ptr_duration, double* my_shared_ptr_duration, 
    int* use_memory_raw_pointer, int* use_memory_stl_unique_ptr, int* use_memory_stl_shared_ptr, int* use_memory_my_unique_ptr,
    int * use_memory_my_shared_ptr,
    bool is_console) {

    int** pointers = new int* [iterations];

    if (is_console) {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
    }

    // Замер времени для обычного указателя
    *use_memory_raw_pointer = sizeof(int*) * iterations;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        create_raw_pointer();
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> raw_pointer_duration_time = end - start;
    *raw_pointer_duration = raw_pointer_duration_time.count();
    std::cout << "Working with " << iterations << " raw pointers: " << *raw_pointer_duration << " seconds\n";
    std::cout << "Busy memory: " << *use_memory_raw_pointer << " bit\n";

    // Замер времени для stl unique_ptr
    *use_memory_stl_unique_ptr = sizeof(std::unique_ptr<int>) * iterations;
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        create_srl_unique_ptr();
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> stl_unique_ptr_duration_time = end - start;
    *stl_unique_ptr_duration = stl_unique_ptr_duration_time.count();
    std::cout << "Working with " << iterations << " stl unique_ptr: " << *stl_unique_ptr_duration << " seconds\n";
    std::cout << "Busy memory: " << *use_memory_stl_unique_ptr << " bit\n";

    // Замер времени для stl shared_ptr
    *use_memory_stl_shared_ptr = sizeof(std::shared_ptr<int>) * iterations;
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        create_stl_shared_ptr();
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> stl_shared_ptr_duration_time = end - start;
    *stl_shared_ptr_duration = stl_shared_ptr_duration_time.count();
    std::cout << "Working with " << iterations << " stl shared_ptr: " << *stl_shared_ptr_duration << " seconds\n";
    std::cout << "Busy memory: " << *use_memory_stl_shared_ptr << " bit\n";

    // Замер времени для my unique_ptr
    *use_memory_my_unique_ptr = sizeof(UniquePtr<int>) * iterations;
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        create_my_unique_ptr();
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> my_unique_ptr_duration_time = end - start;
    *my_unique_ptr_duration = my_unique_ptr_duration_time.count();
    std::cout << "Working with " << iterations << " my unique_ptr: " << *my_unique_ptr_duration << " seconds\n";
    std::cout << "Busy memory: " << *use_memory_my_unique_ptr << " bit\n";

    // Замер времени для my shared_ptr
    *use_memory_my_shared_ptr = sizeof(SharedPtr<int>) * iterations;
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i) {
        create_my_shared_ptr();
    }
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> my_shared_ptr_duration_time = end - start;
    *my_shared_ptr_duration = my_shared_ptr_duration_time.count();
    std::cout << "Working with " << iterations << " my shared_ptr: " << *my_shared_ptr_duration << " seconds\n";
    std::cout << "Busy memory: " << *use_memory_my_shared_ptr << " bit\n";

    return 0;
}