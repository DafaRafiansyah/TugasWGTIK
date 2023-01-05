#include "graph.h"

adrNode newNode_1301213290(char x){
    adrNode J = new node;
    info(J) = x;
    next(J) = NULL;
    child(J) = NULL;
    return J;
}

void addNode_1301213290(adrNode &G, adrNode P){
    if(G == NULL){
        G = P;
    }else{
        adrNode J = G;
        while(next(J) != NULL){
            J = next(J);
        }
        next(J) = P;
    }
}

adrNode findNode_1301213290(adrNode G, char x){
    if(G != NULL){
        adrNode J = G;
        while(J != NULL){
            if(info(J) == x){
                return J;
            }
            J = next(J);
        }
    }
    return NULL;
}

void addChild_1301213290(adrNode &G, char x, char y){
    if(G == NULL){
        cout<<"Graph kosong"<<endl;
    }else{
        adrNode J = findNode_1301213290(G, x);
        if(J != NULL){
            adrChild Q = new childNode;
            info(Q) = y;
            next(Q) = NULL;
            if(child(J) == NULL){
                child(J) = Q;
            }else{
                next(Q) = child(J);
                child(J) = Q;
            }
        }
    }
}

bool isConnected_1301213290(adrNode G, char x, char y){
    if(G != NULL){
        adrNode J = G;
        while(J != NULL){
            if(info(J) != x){
                J = next(J);
            }else{
                adrChild Q = child(J);

                while(Q != NULL){
                    if(info(Q) != y){
                        Q = next(Q);
                    }else{
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

void printGraph_1301213290(adrNode G){
    if(G == NULL){
        cout<<"Graph Kosong"<<endl;
    }else{
        adrNode J = G;
        while(J != NULL){
            cout<<"node "<<info(J)<<":";
            if(child(J) != NULL){
                adrChild Q = child(J);
                while(Q != NULL){
                    cout<<" - "<<info(Q);
                    Q = next(Q);
                }
                cout<<endl;
            }else{
                cout<<"Edge Kosong"<<endl;
            }
            J = next(J);
        }
    }
}
