#include "graph.h"

int main()
{
    adrNode G;
    G = NULL;

    addNode_1301213290(G, newNode_1301213290('A'));
    addNode_1301213290(G, newNode_1301213290('B'));
    addNode_1301213290(G, newNode_1301213290('C'));
    addNode_1301213290(G, newNode_1301213290('D'));
    addChild_1301213290(G, 'A', 'B');
    addChild_1301213290(G, 'A', 'D');
    addChild_1301213290(G, 'A', 'C');
    addChild_1301213290(G, 'B', 'D');
    addChild_1301213290(G, 'B', 'A');
    addChild_1301213290(G, 'C', 'A');
    addChild_1301213290(G, 'D', 'A');
    addChild_1301213290(G, 'D', 'B');

    cout<<"=================================================================="<<endl;
    printGraph_1301213290(G);
    cout<<"=================================================================="<<endl;

    return 0;
}
