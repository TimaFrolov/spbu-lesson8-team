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

Error addElement(Tree *tree, Element element) 
{
    
}

Error addElements(Tree *tree, Element *elements, int count) 
{
    
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
    
}

Error printInorder(Tree *tree) 
{
    
}