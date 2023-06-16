#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<int> table;
    int tableSize;

public:
    HashTable(int size) {
        tableSize = size;
        table.resize(tableSize, -1);
    }

    void insert(int value) {
        int hashValue = hashFunction(value);

        if (table[hashValue] == -1) {
            table[hashValue] = value;
        } else {
            int rehashValue = rehashFunction(value);
            while (table[rehashValue] != -1) {
                rehashValue = rehashFunction(rehashValue);
            }
            table[rehashValue] = value;
        }
    }

    int hashFunction(int key) {
        return key % tableSize;
    }

    int rehashFunction(int key) {
        return (key + 3) % tableSize;
    }

    void display() {
        for (int i = 0; i < tableSize; i++) {
            cout << i << ": ";
            if (table[i] != -1) {
                cout << table[i];
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable hashTable(20);

    // Values to store
    vector<int> values = {66, 47, 87, 90, 126, 140, 145, 153, 177, 285, 393, 395, 467, 566, 620, 735};

    // Insert values into the hash table
    for (int value : values) {
        hashTable.insert(value);
    }

    // Display the hash table
    hashTable.display();

    return 0;
}
