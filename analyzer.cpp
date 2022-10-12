/*
from re import I
import stringdata as sd
import time
import math

# Uses linear search to find specified element in container. Returns index of element or -1 if not found
def linear_search(container, element) -> int:
    for i in range(len(container)):
        if container[i] == element:
            return i
    return -1

# Uses binary search to find specified element in container. Returns index of element or -1 if not found
def binary_search(container, element) -> int:
    left = 0
    right = len(container)-1

    #if container[right] == element:
    #    return right

    while left <= right:
        mid = math.floor((left + right) / 2)
        
        if container[mid] > element:
            right = mid - 1

        elif container[mid] < element:
            left = mid + 1

        else:
            return mid
            
    return -1

# main
def main():
    # access the data set from stringdata module
    dataset = sd.get_data()
    
    # --------------- search for "not_here" using both algos, capture time taken

    before = time.time()
    print("Linear search for 'not_here': ", linear_search(dataset, "not_here"))
    after = time.time()
    print("Linear search took: ", after-before, " seconds.")

    before = time.time()
    print("Binary search for 'not_here': ", binary_search(dataset, "not_here"))
    after = time.time()
    print("Binary search took: ", after-before, " seconds.")

    # --------------- search for "mzzzz" using both algos, capture time taken

    before = time.time()
    print("Linear search for 'mzzzz': ", linear_search(dataset, "mzzzz"))
    after = time.time()
    print("Linear search took: ", after-before, " seconds.")

    before = time.time()
    print("Binary search for 'mzzzz': ", binary_search(dataset, "mzzzz"))
    after = time.time()
    print("Binary search took: ", after-before, " seconds.")

    # --------------- search for "aaaaa" using both algos, capture time taken

    before = time.time()
    print("Linear search for 'aaaaa': ", linear_search(dataset, "aaaaa"))
    after = time.time()
    print("Linear search took: ", after-before, " seconds.")

    before = time.time()
    print("Binary search for 'aaaaa': ", binary_search(dataset, "aaaaa"))
    after = time.time()
    print("Binary search took: ", after-before, " seconds.")




# checks if __name__ is "__main__" to run main()
if __name__ == "__main__":
    main()

*/


#include<iostream>
#include "StringData.h"
#include <cmath>
using namespace std;

int linear_search(vector<string> container, string element) {
<<<<<<< Updated upstream
    for(int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
=======
    int i;
    for (i = 0; i < container.size(); i++) {
        if (container[i] == element)
>>>>>>> Stashed changes
            return i;
    }
    return -1;
}

<<<<<<< Updated upstream
int binary_search(vector<string> container, string element) {
    int left = 0;
    int right = container.size() - 1;
    int mid = 0;

    while (left < right) {
        mid = floor((left + right) / 2);

        if (container[mid] > element) {
            right = mid - 1;
        }
        else if (container[mid] < element) {
            left = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;  
}

int main() {
    vector<string> dataset = getStringData();
    cout << "Linear search for 'not_here': " << linear_search(dataset, "not_here") << "\n";
    cout << "Binary search for 'not_here': " << binary_search(dataset, "not_here");

    cout << "\n";

    cout << "Linear search for 'mzzzz': " << linear_search(dataset, "mzzzz") << "\n";
    cout << "Binary search for 'mzzzz': " << binary_search(dataset, "mzzzz");

    cout << "\n";

    cout << "Linear search for 'aaaaa': " << linear_search(dataset, "aaaaa") << "\n";
    cout << "Binary search for 'aaaaa': " << binary_search(dataset, "aaaaa");
}
=======
int binary_search(vector<string>container, string element)
{
    int min_index = 0, max_index = container.size() - 1, mid_index = 0;
    while (min_index <= max_index)
    {
        mid_index = (min_index + max_index) / 2;
        if (container[mid_index] == element){
            return mid_index;
        }
        else if (element.compare(container[mid_index]) < 0){ //if negative, string A comes before string b
            max_index = mid_index - 1;
        }
        else{
            min_index = mid_index + 1;
        }
    }
    return -1;
}

void linear_timer(vector<string>data, string element){
    int start, end;
    start = systemTimeNanoseconds();
    cout << "Linear search index for '" << element << "': " << linear_search(data, element) << endl;
    end = systemTimeNanoseconds();
    cout << "Linear time for '" << element << "': " << end-start << endl;
}

void binary_timer(vector<string>data, string element){
    int start, end;
    start = systemTimeNanoseconds();
    cout << "Binary search index for '" << element << "': " << binary_search(data, element) << endl;
    end = systemTimeNanoseconds();
    cout << "Binary time for '" << element << "': " << end-start << endl;
}

int main(){
    vector <string> data = getStringData();
    linear_timer(data, "aaaaa"); binary_timer(data, "aaaaa");
    linear_timer(data, "mzzzz"); binary_timer(data, "mzzzz");
    linear_timer(data, "not_here"); binary_timer(data, "not_here");
    return 0;
}
>>>>>>> Stashed changes
