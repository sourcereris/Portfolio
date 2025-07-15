#include <vector>
#include <raylib.h>
#include "Point.h"

class Graph{
private:
    std::vector<Point> points;
    float scale;
public:
    Graph(){}

    void addPoint(double x, double y);
    void scaleGraph(float factor);
    void draw(int startX, int startY, Color color);
    int getPointCount();
};