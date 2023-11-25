#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head) {
    if (!head) return nullptr;

    Node<int>* curr = head;
    while (curr) {
        Node<int>* copy = new Node<int>();
        copy->value = curr->value;
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    curr = head;
    while (curr) {
        if (curr->random) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }

    Node<int>* pseudoHead = new Node<int>();
    Node<int>* copy = pseudoHead;
    curr = head;
    while (curr) {
        copy->next = curr->next;
        copy = copy->next;
        curr->next = curr->next->next;
        curr = curr->next;
    }

    return pseudoHead->next;
}
