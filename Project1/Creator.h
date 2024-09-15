#include "SharedPtr.h"
#include "UniquePtr.h"

void create_raw_pointer() {
    int* p = new int(10);
    delete p;
}

void create_srl_unique_ptr() {
    std::unique_ptr<int> p = std::make_unique<int>(10);
}

void create_stl_shared_ptr() {
    std::shared_ptr<int> p = std::make_shared<int>(10);
}

void create_my_unique_ptr() {
    UniquePtr<int> p(new int(10));
}

void create_my_shared_ptr() {
    SharedPtr<int> p(new int(10));
}