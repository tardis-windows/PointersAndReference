// FILE: Bag.cpp
// CLASS IMPLEMENTED: bag (see bag.h for documentation)
// INVARIANT for the bag class:
//   1. The number of items in the bag is in the member variable used;
//   2. For an empty bag, we do not care what is stored in any of data; for a
//      non-empty bag the items in the bag are stored in data[0] through
//      data[used-1], and we don't care what's in the rest of data.
#include <cassert>   // Provides assert function
#include "Bag.h"
using namespace std;

const Bag::size_type Bag::CAPACITY;

bool Bag::erase_one(const value_type& target) {
    size_type index; // The location of target in the data array

    // First, set index to the location of target in the data array,
    // which could be as small as 0 or as large as used-1. If target is not
    // in the array, then index will be set equal to used.
    index = 0;
    while ((index < used) && (data[index] != target))
        ++index;

    if (index == used)
        return false; // target isn't in the bag, so no work to do.

      // When execution reaches here, target is in the bag at data[index].
      // So, reduce used by 1 and copy the last item onto data[index].
    --used;
    data[index] = data[used];
    return true;
}

Bag::size_type Bag::count(const value_type& target) const {
    size_type answer = 0;
    for (size_type i = 0; i < used; ++i)
        if (target == data[i])
            ++answer;
    return answer;
}

void Bag::insert(const value_type& entry) {
    // Library facilities used: cassert
    assert(size() < CAPACITY);

    data[used] = entry;
    ++used;
}

//================== Required Implemenation Starts Here ======================

ostream& operator<<(ostream& outs, const Bag& source) {
    Bag::size_type i;
    int n = 0;
    for (i = 0; i < source.used; i++) {
        outs << n + 1 << ". \n";
        outs << source.data[i] << endl;
        n++;
    }
    return outs;
}

void Bag::sort_descending() {

    //simple bubble sort

    int n = 100;

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n - 1; y++) {
            if (data[y] < data[y + 1]) {
                Student temp = data[y + 1];
                data[y + 1] = data[y];
                data[y] = temp;
            }
        }
    }
}

Student Bag::find_max() const {
    value_type d;
    d = data[0];
    return d;
}

bool operator==(const Bag& b1, const Bag& b2) {

    for (int i = 0; i < 100; i++) {
        if (*b1.data == *b2.data) {
            return true;
        }
        else {
            return false;
            break;
        }
    }
}









