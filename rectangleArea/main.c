// 引入标准输入输出库
#include <stdio.h>

typedef struct{
    int x;
    int y;
} point_t;

typedef struct{
    point_t upper_left;
    point_t lower_right;
} rectangle_t;


int area(point_t *p1, point_t *p2){
    int width = p2->x - p1->x;
    int height = p2->y - p1->y;
    return width * height;
}

point_t get_point(char* prompt){
    point_t pt;
    printf("%s",prompt);
    printf ("X: ");
    scanf ("%d", &pt.x);
    printf ("Y: ");
    scanf ("%d", &pt.y);
    return pt;
}


int main(){
    point_t pt1 = get_point("pt1:\n");
    point_t pt2 = get_point("pt2:\n");

    int area_of_rectangle = area(&pt1,&pt2);
    printf("area is %d", area_of_rectangle);
    return 0;
}