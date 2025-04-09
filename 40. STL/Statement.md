<!-- STL Definition and Difference -->

<!-- Array -->
1. int arr[size]; – C-style array
    This is a built-in array.

    It's a fixed-size raw array.

    No bounds checking.

    Limited functionality.

    Memory is allocated on the stack (for local arrays).

    Doesn't support member functions (like .size()).

int arr[5] = {1, 2, 3, 4, 5};


2. array<int, size> – C++ STL std::array
    This is a container from the C++ Standard Template Library (STL).

    Requires #include <array>.

    Provides safety and utility features (like bounds checking in .at()).

    Has member functions like .size(), .fill(), .front(), .back(), .begin(), .end(), etc.

    Still fixed size and stack-allocated, like raw arrays.

    Preferred in modern C++.