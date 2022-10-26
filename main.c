#include "main.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    Element element;
    struct Tree *leftChild;
    struct Tree *rightChild;
} Tree;

Error makeEmptyTree(Tree **treeRef)
{
    
}

void freeTree(Tree *tree) 
{

}

Error exists(Tree *tree, Element element)
{
    
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
