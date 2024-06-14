#ifndef header_h
#define header_h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


typedef struct node
{
    char arr[150];
    struct node *link;
}invert;

typedef enum 
{
    failure,
    success,
} status;

typedef struct sub_node
{
    int w_count;
    char f_name[20];
    struct sub_node * slink;
}sub_node;

typedef struct main_node
{
    int f_count;
    char word[20];
    sub_node *slink;
    struct main_node * mlink;
}main_node;

typedef struct has_node
{
    int index;
    main_node *link;
}hash;

status check(invert *head,char* str);
status insert_list(invert **head,char* str);
status create(hash *arr,invert *head);
status display(hash *arr);
status search(hash *arr,char *user);
status save(hash *arr, FILE *fptr);
status update(FILE *fptr1, hash *arr,invert **head);
status free_head(invert ** head, char *str);

#endif
