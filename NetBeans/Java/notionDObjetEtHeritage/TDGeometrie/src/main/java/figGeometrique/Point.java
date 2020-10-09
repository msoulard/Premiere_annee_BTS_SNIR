/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package figGeometrique;

/**
 *
 * @author msoulard
 */
public class Point {
    private double x;
    private double y;

    public Point() {
    }

    public Point(double abs, double ord) {
        this.x = abs;
        this.y = ord;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }
    void translater(double dx, double dy){
        x+=dx;
        y+=dy;
    }
    double calculerDistance(){
        double distance;
        distance=Math.sqrt(x*x+y*y);
        return distance;
    }
    double calculerDistancePoints(Point p){
        double distancePoints;
        distancePoints=Math.sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
        return distancePoints;
    }
    void afficherPoint(){
        System.out.format("Les coordonnées du point sont en x=%2.2f et en y=%2.2f\n", x, y);
    }
    
}
