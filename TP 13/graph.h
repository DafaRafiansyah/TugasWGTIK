#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define child(P) (P)->child

typedef char infotype;
typedef struct node *adrNode;
typedef struct childNode *adrChild;

typedef struct node {
    infotype info;
    adrNode next;
    adrChild child;
};

typedef struct childNode {
    infotype info;
    adrChild next;
};

adrNode newNode_1301213290(char x);
void addNode_1301213290(adrNode &G, adrNode P);
adrNode findNode_1301213290(adrNode G, char x);
void addChild_1301213290(adrNode &G, char x, char y);
bool isConnected_1301213290(adrNode G, char x, char y);
void printGraph_1301213290(adrNode G);

#endif // GRAPH_H_INCLUDED
