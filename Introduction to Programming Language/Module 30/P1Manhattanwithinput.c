#include<stdio.h>
#include<stdlib.h>

struct Point
    {
        int x;
        int y;
    };

    int manhattan(struct Point p1, struct Point p2){
        int result = abs(p1.x-p2.x) + abs(p1.y-p2.y);
        return result;
    }

int main(){
    
    struct Point p1= {1,1};
    struct Point p2;

    printf("Enter two coordinates for manhattan distance:  ");
    scanf("%d %d", &p2.x, &p2.y);

    int ans= manhattan(p1,p2);

    printf("Manhattan Distance: %d", ans);

    return 0;
    
}