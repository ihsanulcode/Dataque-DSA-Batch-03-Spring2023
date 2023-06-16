#include <iostream>
using namespace std;

const int NUM_BUCKETS = 10;
const int SLOTS_PER_BUCKET = 3;

class HashTable {
private:
    int table[NUM_BUCKETS][SLOTS_PER_BUCKET];
    int occupancy[NUM_BUCKETS];

public:
    HashTable() {
        for (int i = 0; i < NUM_BUCKETS; i++) {
            occupancy[i] = 0;
            for (int j = 0; j < SLOTS_PER_BUCKET; j++) {
                table[i][j] = -1; // -1 indicates an empty slot
            }
        }
    }

    int hash(int key) {
        return key % NUM_BUCKETS;
    }

    void insert(int value) {
        int bucket = hash(value);

        if (occupancy[bucket] == SLOTS_PER_BUCKET) {
            // Bucket is full, find the next available bucket
            int nextBucket = (bucket + 1) % NUM_BUCKETS;
            while (occupancy[nextBucket] == SLOTS_PER_BUCKET) {
                nextBucket = (nextBucket + 1) % NUM_BUCKETS;
            }
            bucket = nextBucket;
        }

        table[bucket][occupancy[bucket]] = value;
        occupancy[bucket]++;
    }

    void display() {
        for (int i = 0; i < NUM_BUCKETS; i++) {
            cout << "Bucket " << i << ": ";
            for (int j = 0; j < SLOTS_PER_BUCKET; j++) {
                if (table[i][j] != -1) {
                    cout << table[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int values[] = {66, 47, 87, 90, 126, 140, 145, 153, 177, 285, 393, 395, 467, 566, 620, 735};
    int numValues = sizeof(values) / sizeof(values[0]);

    HashTable hashTable;

    for (int i = 0; i < numValues; i++) {
        hashTable.insert(values[i]);
    }

    hashTable.display();

    return 0;
}
