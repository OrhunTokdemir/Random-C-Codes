#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>  
#include <wchar.h>
#include <stdlib.h>  
#include <conio.h>  
#include<string.h>

struct BSTDugum {
	wchar_t data;
	BSTDugum* SolDgm;
	BSTDugum* SagDgm;
};

typedef struct BSTDugum BDGM;
BDGM* Kok = NULL;

BDGM* SetNode(wchar_t num) {
	BDGM* NewNode = (BDGM*)malloc(sizeof(BDGM));
	if (NewNode == NULL) { // Check for memory allocation failure
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	NewNode->data = num;
	NewNode->SagDgm = NewNode->SolDgm = NULL;
	return NewNode;
}

BDGM* AddNode(BDGM* rootptr, wchar_t num) {
	if (rootptr == NULL) {
		rootptr = SetNode(num);
		return rootptr;
	}
	else {
		if (rootptr->data > num) {
			rootptr->SolDgm = AddNode(rootptr->SolDgm, num);
		}
		else if (rootptr->data < num) {
			rootptr->SagDgm = AddNode(rootptr->SagDgm, num);
		}
	}
	return rootptr; // Ensure all control paths return a value    
}

BDGM* Search(BDGM* rootptr, wchar_t num) {
	if (rootptr == NULL) {
		printf("number not in tree\n");
		return NULL;
	}
	if (rootptr->data == num) {
		printf("you found the num:%c\n", num);
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
		wprintf(L"%lc-", rootptr->data);
		PreOrderList(rootptr->SolDgm);
		PreOrderList(rootptr->SagDgm);
	}
}
void InOrderList(BDGM* rootptr) {
	if (rootptr != NULL) {
		InOrderList(rootptr->SolDgm);
		printf("%c-", rootptr->data);
		InOrderList(rootptr->SagDgm);
	}
}
void PostOrderList(BDGM* rootptr) {
	if (rootptr != NULL) {
		PostOrderList(rootptr->SolDgm);
		PostOrderList(rootptr->SagDgm);
		printf("%c-", rootptr->data);

	}
}

int main() {
	setlocale(LC_ALL, "tr_TR.UTF-8");

	BDGM* root = NULL;
	wchar_t text[] = { L"kartal kax'lkar dal sarkar örnek þu þekillerde aðladý dal sarkar kartal kalkar" }; // Corrected array to include all required elements  
	for (int i = 0; i < sizeof(text) / sizeof(wchar_t) - 1; i++) { // Adjusted loop to match the size of the array  
		root = AddNode(root, text[i]); // Ensure root is updated
	}
	PreOrderList(root);
	char a[] = "hi";
		printf("%d", sizeof(a) / sizeof(char));
	printf("\n");
	//InOrderList(root);
	//printf("\n");
	//PostOrderList(root);
	system("pause");
	return 0;
}
