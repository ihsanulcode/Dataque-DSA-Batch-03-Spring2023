#include <iostream>

class HashTable {
private:
    int* table;
    int size;
    int count;

public:
    HashTable(int tableSize) {
        size = tableSize;
        table = new int[size];
        for (int i = 0; i < size; i++) {
            table[i] = -1; // Initialize all positions to -1 (empty)
        }
        count = 0;
    }

    ~HashTable() {
        delete[] table;
    }

    int hash(int key) {
        return key % size; // Division method of hashing
    }

    void insert(int key) {
        int index = hash(key);
        int originalIndex = index;

        while (table[index] != -1) {
            index = (index + 1) % size; // Linear probing
            if (index == originalIndex) {
                std::cout << "Hash table is full. Cannot insert key: " << key << std::endl;
                return;
            }
        }

        table[index] = key;
        count++;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            if (table[i] != -1) {
                std::cout << "Position " << i << ": " << table[i] << std::endl;
            }
        }
    }
};

int main() {
    HashTable hashTable(20);

    int values[] = {66, 47, 87, 90, 126, 140, 145, 153, 177, 285, 393, 395, 467, 566, 620, 735};
    int numValues = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < numValues; i++) {
        hashTable.insert(values[i]);
    }

    hashTable.display();

    return 0;
}
