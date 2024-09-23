#ifndef UNIQUE_PTR_H
#define UNIQUE_PTR_H

template<typename T>
class UniquePtr {
private:
    T* pointer;
public:
    UniquePtr() : pointer(nullptr) {}

    UniquePtr(T* p) : pointer(p) {}

    UniquePtr(const UniquePtr&) = delete;
    UniquePtr& operator = (const UniquePtr&) = delete;

    UniquePtr(UniquePtr&& other) noexcept : pointer(other.pointer) {
        other.pointer = nullptr;
    }

    UniquePtr& operator = (UniquePtr&& other) noexcept {
        if (this != &other) {
            delete pointer;
            pointer = other.pointer;
            other.pointer = nullptr;
        }

        return *this;
    }

    T& operator*() const {
        return *pointer;
    }

    T* operator->() const {
        return pointer;
    }

    T* get() const {
        return pointer;
    }

    T* release() {
        T* old_ptr = pointer;
        pointer = nullptr;
        return old_ptr;
    }

    void reset(T* new_ptr = nullptr) {
        delete pointer;
        pointer = new_ptr;
    }

    ~UniquePtr() {
        delete pointer;
    }
};

#endif