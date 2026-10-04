#include <stdio.h>

struct node{
    int value;
    struct node *next; 
};
int main(){
    struct node node1;
    struct node node2;
    node1.value = 10;
    node2.value = 20;
    node1.next = &node2;
    printf("First value: %d\n", node1.value);
    printf("Second value (accessed via first): %d\n", node1.next->value);  
}
