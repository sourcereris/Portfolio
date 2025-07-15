#include "Graph.h"


std::vector<Point> points;
float scale = 1.0f;

void Graph::addPoint(double x, double y){
    points.emplace_back(x, y);
}

void Graph::scaleGraph(float factor){
    scale *= factor;
}

void Graph::draw(int startX, int startY, Color color){

    for (std::vector<Point>::size_type i = 0; i < points.size() - 1; i++) {
        for (std::vector<Point>::size_type i = 0; i < points.size() - 1; i++) {
            DrawLine(
                startX + points[i].x * scale, startY - points[i].y * scale,
                startX + points[i + 1].x * scale, startY - points[i + 1].y * scale,
                color
            );
        }
    }
}

int Graph::getPointCount(){
    return points.size();
}
