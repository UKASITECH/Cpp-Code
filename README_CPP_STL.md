
# C++ Standard Template Library (STL) - Complete Overview

## What is STL?

The **Standard Template Library (STL)** is a powerful library in C++ that provides ready-to-use classes and functions for common data structures and algorithms.  
It saves time by providing generic containers, iterators, and algorithms which can be reused for different data types.

---

## Main Components of STL

1. **Containers** — Data structures to store objects  
2. **Algorithms** — Functions that operate on containers  
3. **Iterators** — Objects that point to container elements and allow traversal  
4. **Function Objects (Functors)** — Objects acting like functions  
5. **Adapters** — Containers with restricted interfaces (stack, queue, etc.)

---

## 1. Containers

Containers store collections of objects. They can be:

| Container         | Description                             | Header        | Example Declaration            |
|-------------------|---------------------------------------|---------------|-------------------------------|
| `vector`          | Dynamic array (resizable)              | `<vector>`    | `vector<int> v;`               |
| `list`            | Doubly linked list                     | `<list>`      | `list<int> l;`                 |
| `deque`           | Double-ended queue (fast front/back)  | `<deque>`     | `deque<int> d;`                |
| `set`             | Sorted unique elements                  | `<set>`       | `set<int> s;`                  |
| `map`             | Key-value pairs (sorted by key)        | `<map>`       | `map<string, int> m;`          |
| `unordered_map`   | Key-value pairs, no order               | `<unordered_map>` | `unordered_map<int, string> um;` |

### Example: vector

```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);               // Add element at end
    cout << v[0] << endl;         // Access element by index
    cout << v.size() << endl;     // Get size of vector
}
```

---

## 2. Algorithms

Algorithms are predefined functions to perform operations on containers:

| Algorithm          | Description                         | Header         |
|--------------------|-----------------------------------|----------------|
| `sort()`           | Sort elements                     | `<algorithm>`  |
| `reverse()`        | Reverse elements                  | `<algorithm>`  |
| `find()`           | Find element                     | `<algorithm>`  |
| `count()`          | Count occurrences                | `<algorithm>`  |
| `max_element()`    | Find max element                 | `<algorithm>`  |
| `min_element()`    | Find min element                 | `<algorithm>`  |

### Example: sort and find

```cpp
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {4, 2, 5, 1, 3};

    sort(v.begin(), v.end());  // Sort the vector

    for (int x : v) cout << x << " ";  // Print sorted vector
    cout << endl;

    // Find element 3
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end()) cout << "Found 3 at index " << (it - v.begin()) << endl;
}
```

---

## 3. Iterators

Iterators are pointers or objects that traverse containers. They allow algorithms to work on different containers uniformly.

| Iterator         | Description                           |
|------------------|-------------------------------------|
| `begin()`        | Points to first element              |
| `end()`          | Points just past the last element   |
| `rbegin()`       | Reverse iterator at last element    |
| `rend()`         | Reverse iterator before first element|

### Example: Using iterators

```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // Dereference iterator to get element
    }
    cout << endl;
}
```

---

## 4. Function Objects (Functors)

Function objects are objects that behave like functions by overloading the `operator()`. Used for custom behavior in algorithms.

---

## 5. Adapters

Adapters provide restricted interfaces on top of other containers:

| Adapter           | Description                        | Header     |
|-------------------|----------------------------------|------------|
| `stack`           | Last-in-first-out (LIFO)          | `<stack>`  |
| `queue`           | First-in-first-out (FIFO)         | `<queue>`  |
| `priority_queue`  | Elements with priority            | `<queue>`  |

### Example: stack

```cpp
#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);

    cout << s.top() << endl;  // Output: 2
    s.pop();
    cout << s.top() << endl;  // Output: 1
}
```

---

## Summary Table

| Component         | Purpose                      | Common Headers           |
|-------------------|------------------------------|-------------------------|
| Containers        | Store data                   | `<vector>`, `<list>`, `<map>`, `<set>` |
| Algorithms        | Perform operations           | `<algorithm>`           |
| Iterators         | Traverse containers          | Provided by container headers |
| Function Objects  | Custom callable objects       | `<functional>`          |
| Adapters          | Restricted interface containers| `<stack>`, `<queue>`    |

---

## Additional Tips

- STL makes code cleaner, faster, and easier to maintain.
- Use `auto` keyword with iterators for simplicity.
- Algorithms use iterators, so they work with any container supporting those iterators.
- Learn containers and algorithms gradually with practice.

---

## References & Further Reading

- [cplusplus.com - STL](https://www.cplusplus.com/reference/stl/)
- [cppreference.com - STL](https://en.cppreference.com/w/cpp/container)
- [GeeksforGeeks - STL Tutorial](https://www.geeksforgeeks.org/cpp-stl-tutorial/)

---

*Happy coding with STL!* 🚀

---

**Created by ChatGPT**  
*Ask me anytime for more examples or explanations!*
