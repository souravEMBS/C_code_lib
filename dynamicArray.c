#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

void innitialize_library(int shelf);
void innitalize_books_count(int shelf);
void add_book(int shelf, int pages);

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    innitialize_library(total_number_of_shelves);
    innitalize_books_count(total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            add_book(x, y);

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}

void innitialize_library(int shelf)
{
    total_number_of_pages = (int**)malloc(shelf*sizeof(int*));
    for(int i=0;i<shelf;i++)
        *(total_number_of_pages+i) = (int *)malloc(1100*sizeof(int));

}

void innitalize_books_count(int shelf)
{
    total_number_of_books = (int*)malloc(shelf*sizeof(int));
}

void add_book(int shelf, int pages)
{
    int books_present = *(total_number_of_books + shelf);
    total_number_of_pages[shelf][books_present] = pages;
    *(total_number_of_books + shelf) +=1;
    //printf("[%d] [%d]\n", *(*(total_number_of_pages + shelf) + books_present),*(total_number_of_books+shelf));
}

void get_book(int shelf, int book)
{

}