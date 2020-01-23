#include <iostream>
#include <string>

using namespace std;

struct node{
    string content, address;
    float weight;
    node* next;
};
typedef node* st;

void push(st* pSt, string content, string address, float weight);

int main(){
    st pSt;

    int option = 0;
    string content, address;
    float weight;

    do{
        cout << "Peso: "; cin >> weight; cin.ignore();
        cout << "Contenido: "; getline(cin, content);
        cout << "Destino: "; getline(cin, address);

        push(&pSt, content, address, weight);

        cout << "Ingresar mas datos (1 = si, 0 = no"; cin >> option; 
        cin.ignore();

    }while(option != 0);

    node aux = top(&pSt);

    cout << "Peso: " << aux.weight << endl;
    cout << "Contenido: " << aux.content << endl;
    cout << "Destino: " << aux.address << endl;    

    aux = pop(&pSt);
    
    return 0;
}

void push(st* pSt, string content, string address, float weight){
    node* newNode = new node;
    newNode->address = address;
    newNode->content = content;
    newNode->weight = weight;

    newNode->next = *pSt;
    *pSt = newNode;
}

node top(st* pSt){
    node aux;    
    if(!(*pSt)){
        aux.address = "";
        aux.content = "";
        aux.weight = 0;
        aux.next = NULL;

    }
    else{
        aux.address = (*pSt)->address;
        aux.content = (*pSt)->content;
        aux.weight = (*pSt)->weight;
        aux.next = NULL;
    }
    return aux;
}

node pop(st* pSt){
    node aux;    
    if(!(*pSt)){
        aux.address = "";
        aux.content = "";
        aux.weight = 0;
        aux.next = NULL;
        
    }
    else{
        aux.address = (*pSt)->address;
        aux.content = (*pSt)->content;
        aux.weight = (*pSt)->weight;
        aux.next = NULL;

        (*pSt) = (*pSt)->next;
    }
    return aux;
}

bool isEmpty(st* pSt){
    return (*pSt) == NULL;
}