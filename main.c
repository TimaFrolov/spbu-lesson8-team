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
    if (tree == NULL)
    {
        return 0;
    }
    ++countRef;
    printPreorder(tree->leftChild);
    printPreorder(tree->rightChild);
    return *countRef;
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

