package edu.touchard.diapo25ihm;

/**
 *
 * @author msoulard
 */
import java.awt.*;
import javax.swing.*;

public class ExempleIHM extends JFrame{
    private JButton b1;
    private JButton b2;

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        ExempleIHM that = new ExempleIHM();
        that.pack(); //changer taille du Frame pour englober les boutons
        that.setVisible(true);
    }
    public ExempleIHM(){
        super("Notre exemple d'IHM"); //lancer le constructeur de la super classe, icic Frame
        setLayout(new FlowLayout()); //nouveau gestionnaire
        b1 = new JButton("Appuyer");
        b2 = new JButton("Ne pas appuyer");
        b2.setToolTipText("Pas touche");
        Container content = getContentPane();
        content.add(b1);
        content.add(b2);
    }
}
