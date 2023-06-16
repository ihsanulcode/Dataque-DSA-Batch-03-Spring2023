#include <iostream>

const int TABLE_SIZE = 10;

// Node structure for the hash table chains
struct Node {
    int data;
    Node* next;
};

// Function to insert a value into the hash table
void insert(Node** table, int value) {
    int key = value % TABLE_SIZE;
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (table[key] == nullptr) {
        table[key] = newNode;
    } else {
        Node* currentNode = table[key];
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

// Function to display the hash table
void displayHashTable(Node** table) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        std::cout << "[" << i << "] -> ";
        Node* currentNode = table[i];
        while (currentNode != nullptr) {
            std::cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        std::cout << "nullptr" << std::endl;
    }
}

int main() {
    Node** hashTable = new Node*[TABLE_SIZE](); // Initialize the hash table with nullptrs

    int values[] = {66, 47, 87, 90, 126, 140, 145, 153, 177, 285, 393, 395, 467, 566, 620, 735};
    int numValues = sizeof(values) / sizeof(values[0]);

    // Insert values into the hash table
    for (int i = 0; i < numValues; ++i) {
        insert(hashTable, values[i]);
    }

    // Display the hash table
    displayHashTable(hashTable);

    // Clean up memory
    for (int i = 0; i < TABLE_SIZE; ++i) {
        Node* currentNode = hashTable[i];
        while (currentNode != nullptr) {
            Node* nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
    }
    delete[] hashTable;

    return 0;
}
