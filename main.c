#include "main.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    Element element;
    struct Tree *leftChild;
    struct Tree *rightChild;
} Tree;


Tree *makeEmptyTree() 
{
    return NULL;
}

void freeTree(Tree *tree) 
{
    if (tree == NULL)
    {
        return;
    }

    freeTree(tree->leftChild);
    freeTree(tree->rightChild);

    free(tree);
}

bool exists(Tree *tree, Element element) 
{
    if (tree == NULL)
    {
        return false;
    }

    if (tree->element == element)
    {
        return true;
    }

    if (element < tree->element) {
        return exists(tree->leftChild, element);
    }

    return exists(tree->rightChild, element);
}

Error addElement(Tree** PtrTotreePtr, Element element)
{
    if (PtrTotreePtr == NULL)
    {
        *PtrTotreePtr = calloc(1, sizeof(Tree));
        (*PtrTotreePtr)->element = element;
        return 0;
    }
    Tree* currentElementPtr = *PtrTotreePtr;
    Tree* lastNotNullPtr = *PtrTotreePtr;
    while(currentElementPtr != NULL)
    {
        if (element < currentElementPtr->element)
        {
            currentElementPtr = currentElementPtr->leftChild;
        }
        else if (element > currentElementPtr->element)
        {
            currentElementPtr = currentElementPtr->rightChild;
        }
        else
        {
            return 0; //элемент уже есть в дереве
        }
        if (currentElementPtr != NULL)
        {
            lastNotNullPtr = currentElementPtr;
        }
    }
    currentElementPtr = lastNotNullPtr;
    Tree* newElementPtr = calloc(1, sizeof(Tree));
    if (newElementPtr == NULL)
    {
        return -2;
    }
    if (currentElementPtr->element < element)
    {
        currentElementPtr->rightChild = newElementPtr;
    }
    else
    {
        currentElementPtr->leftChild = newElementPtr;
    }
    newElementPtr->element = element;
    return 0;
}

Error addElements(Tree **tree, Element *elements, int count)
{
    for (int i = 0; i < count; i++)
    {
        Error errorCode = addElement(tree, elements[i]);
        if (errorCode != 0)
        {
            return errorCode;
        }
    }
    return 0;
}

Error removeElement(Tree *tree, Element element) 
{
    
}

Error countOfElements(Tree *tree, int *countRef)
{

}

Error treeHeight(Tree *tree, int *heightRef) 
{
    
}

Error printPreorder(Tree *tree) 
{
    if (tree == NULL)
    {
        return 0;
    }
    printf("%d", tree->element);
    printPreorder(tree->leftChild);
    printPreorder(tree->rightChild);
    return 0;
}

Error printInorder(Tree *tree)
{
    if (tree == NULL)
    {
        return -2;
    }
    printPreorder(tree->leftChild);
    printf("%d", tree->element);
    printPreorder(tree->rightChild);
    return 0;
}
