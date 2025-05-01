#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>  
#include <stdlib.h>  
#include <conio.h>  

struct BSTDugum {  
int data;  
BSTDugum* SolDgm;  
BSTDugum* SagDgm;  
};  

typedef struct BSTDugum BDGM;  
BDGM* Kok = NULL;  

BDGM* SetNode(int num) {  
BDGM* NewNode = (BDGM*)malloc(sizeof(BDGM));  
NewNode->data = num;  
NewNode->SagDgm = NewNode->SolDgm = NULL;  
return NewNode;  
}  

BDGM* AddNode(BDGM* rootptr, int num) {    
if (rootptr == NULL) {    
	rootptr = SetNode(num);    
	return rootptr;    
}    
else {    
	if (rootptr->data > num) {    
		rootptr->SolDgm = AddNode(rootptr->SolDgm, num);    
	}    
	else {    
		rootptr->SagDgm = AddNode(rootptr->SagDgm, num);    
	}    
}    
return rootptr; // Ensure all control paths return a value    
}  

BDGM* Search(BDGM* rootptr, int num) {  
if (rootptr == NULL) {  
	printf("number not in trie");  
	return NULL;  
}  
if (rootptr->data == num) {  
	printf("you found the num:%d", num);  
	return rootptr;  
}  
if (rootptr->data > num) {  
	return Search(rootptr->SolDgm, num);  
}  
else if (rootptr->data < num) {  
	return Search(rootptr->SagDgm, num);  
}  
}  

void PreOrderList(BDGM* rootptr) {  
if (rootptr != NULL) {  
	printf("%d-", rootptr->data);  
	PreOrderList(rootptr->SolDgm);  
	PreOrderList(rootptr->SagDgm);  
	}  
}  
void InOrderList(BDGM* rootptr) {
	if (rootptr != NULL) {
		InOrderList(rootptr->SolDgm);
		printf("%d-", rootptr->data);
		InOrderList(rootptr->SagDgm);
	}
}
void PostOrderList(BDGM* rootptr) {
	if (rootptr != NULL) {
		PostOrderList(rootptr->SolDgm);
		PostOrderList(rootptr->SagDgm);
		printf("%d-", rootptr->data);

	}
}

int main() {  
BDGM* root = SetNode(15);  
int a[] = { 12,18,11,13,10,14,16,17,19,20 }; // Corrected array to include all required elements  
for (int i = 0; i < 10; i++) { // Adjusted loop to match the size of the array  
	AddNode(root, a[i]);  
}  
PreOrderList(root);
printf("\n");
InOrderList(root);
printf("\n");
PostOrderList(root);
return 0;  
}
