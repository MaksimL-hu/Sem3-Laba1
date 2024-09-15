#include <iostream>

template<typename T>
class SharedPtr {
private:
    T* ptr;
    int* ref_count;

    void Delete() {
        delete ptr;
        delete ref_count;
    }

    void decrease_counter() {
        if (ref_count) {
            *ref_count -= 1;

            if(*ref_count == 0)
                Delete();
        }
    }

public:
    SharedPtr() : ptr(nullptr), ref_count(nullptr) {}

    explicit SharedPtr(T* p) : ptr(p), ref_count(new int(1)) {}

    SharedPtr(const SharedPtr& other) {
        ptr = other.ptr;
        ref_count = other.ref_count;

        if (ref_count) {
            (*ref_count)++;
        }
    }

    SharedPtr& operator=(const SharedPtr& other) {
        if (this != &other) {
            decrease_counter();

            ptr = other.ptr;
            ref_count = other.ref_count;

            if (ref_count) {
                (*ref_count)++;
            }
        }

        return *this;
    }

    SharedPtr(SharedPtr&& other) noexcept {
        ptr = other.ptr;
        ref_count = other.ref_count;
        other.ptr = nullptr;
        other.ref_count = nullptr;
    }

    SharedPtr& operator=(SharedPtr&& other) noexcept {
        if (this != &other) {
            decrease_counter();

            ptr = other.ptr;
            ref_count = other.ref_count;

            other.ptr = nullptr;
            other.ref_count = nullptr;
        }

        return *this;
    }

    T* get() const {
        return ptr;
    }

    T& operator*() const {
        return *ptr;
    }

    T* operator->() const {
        return ptr;
    }

    ~SharedPtr() {
        decrease_counter();
    }

    int use_count() const {
        return ref_count ? *ref_count : 0;
    }
};