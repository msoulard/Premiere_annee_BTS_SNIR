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
public class TestFigure {

    public static void main(String[] args) {
        Cercle c1;
        c1 = new Cercle(5, 2, 5);
        c1.afficherCercle();

        Carre c2;
        c2 = new Carre(6);
        c2.afficherCarre();

        Point p1;
        p1 = new Point(3, 5);
        p1.afficherPoint();

        Point p2;
        p2 = new Point(5, 7);
        p2.afficherPoint();

        Ligne t;
        t = new Ligne(p1, p2, 2, true);
        t.afficherLigne();
    }
}
