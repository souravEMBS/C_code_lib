#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

void printPolygon(struct point *ptr,int num);
void readPoint(struct point* );
void printPoint(struct point );

int main()
{
    int i,num;
    printf("Number of vertices in your polygon\n");
    scanf("%d",&num);
    struct point* polygon;
    polygon = (struct point*)malloc(num*sizeof(struct point));
    for(int i=0;i<num;i++)
    {
        readPoint(&polygon[i]);
    }
    printPolygon(polygon,num);
    free(polygon);
    return 0;
}


void readPoint(struct point* ptr)
{
    printf("\n Enter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d",&ptr->x);
    printf("y-coordinate: ");
    scanf("%d",&ptr->y);
}

void printPolygon(struct point *ptr,int num)
{
    for(int i=0;i<num;i++)
        printPoint(ptr[i]);
}

void printPoint(struct point pt)
{
    printf("(%d , %d)\n",pt.x,pt.y);
}
