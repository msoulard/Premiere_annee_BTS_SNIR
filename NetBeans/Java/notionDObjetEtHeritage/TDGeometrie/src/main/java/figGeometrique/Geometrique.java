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
public class Geometrique {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Point p1;
        Point p2;
        Point p3;
        Point p4;
        Point p5;
        Ligne l1;
        p1 = new Point();
        p2 = new Point(1.0, 2.1);
        p3 = new Point(p2);
        p4 = p1;
        p5 = new Point(p3);
        //p4.x = 1 ;
      /*  p1.afficherPoint("p1");
        p2.afficherPoint("p2");
        p3.afficherPoint("p3");
        p4.afficherPoint("p4");
        p5.afficherPoint("p5");
        p2.translater(5, 5);
        p2.afficherPoint("p2");*/
        p5.translater(5, 5);
        /*p5.afficherPoint("p5");*/
        l1=new Ligne(p2,p5, 2, true);
        l1.afficherLigne();
    }

}
