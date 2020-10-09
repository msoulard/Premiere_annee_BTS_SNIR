/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package interface_graphiques;

import java.awt.Color;

/**
 *
 * @author msoulard
 */
public class TestIHM extends javax.swing.JFrame {

    /**
     * Creates new form TestIHM
     */
    public TestIHM() {
        initComponents();
        getContentPane().setBackground(Color.cyan);
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenu3 = new javax.swing.JMenu();
        buttonGroup1 = new javax.swing.ButtonGroup();
        jTextField1 = new javax.swing.JTextField();
        etiSaisieCode = new javax.swing.JLabel();
        zoneSaisie = new javax.swing.JTextField();
        etiChoixSE = new javax.swing.JLabel();
        comboEntree = new javax.swing.JComboBox<>();
        etiListeSE = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        listeOS = new javax.swing.JList<>();
        checkBoxLin = new javax.swing.JCheckBox();
        checkBoxWin = new javax.swing.JCheckBox();
        checkBoxMac = new javax.swing.JCheckBox();
        radioLinux = new javax.swing.JRadioButton();
        radioWindows = new javax.swing.JRadioButton();
        radioMac = new javax.swing.JRadioButton();
        etMsgEvt = new javax.swing.JLabel();
        textEvt = new javax.swing.JLabel();
        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        menuItemC = new javax.swing.JMenuItem();
        objet = new javax.swing.JMenu();
        menuItemJava = new javax.swing.JMenuItem();
        menuItemCpp = new javax.swing.JMenuItem();
        MenuWeb = new javax.swing.JMenu();
        menuItemPhp = new javax.swing.JMenuItem();
        menuItemJavaScript = new javax.swing.JMenuItem();

        jMenu3.setText("jMenu3");

        jTextField1.setText("jTextField1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("exemple d'IHM");
        setBackground(new java.awt.Color(204, 255, 0));
        setMinimumSize(new java.awt.Dimension(250, 350));
        setResizable(false);
        getContentPane().setLayout(null);

        etiSaisieCode.setText("Entrez votre code");
        getContentPane().add(etiSaisieCode);
        etiSaisieCode.setBounds(20, 10, 120, 15);

        zoneSaisie.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                zoneSaisieActionPerformed(evt);
            }
        });
        zoneSaisie.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                zoneSaisieKeyTyped(evt);
            }
        });
        getContentPane().add(zoneSaisie);
        zoneSaisie.setBounds(170, 0, 50, 30);

        etiChoixSE.setText("choix");
        getContentPane().add(etiChoixSE);
        etiChoixSE.setBounds(10, 40, 36, 15);

        comboEntree.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Linux", "Windows", "Unix", "OS X Lion", "Chrome OS" }));
        comboEntree.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                comboEntreeMouseClicked(evt);
            }
        });
        comboEntree.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                comboEntreeActionPerformed(evt);
            }
        });
        getContentPane().add(comboEntree);
        comboEntree.setBounds(100, 40, 140, 24);

        etiListeSE.setText("liste des OS");
        getContentPane().add(etiListeSE);
        etiListeSE.setBounds(10, 120, 80, 15);

        listeOS.setModel(new javax.swing.AbstractListModel<String>() {
            String[] strings = { "Linux", "Windows", "Unix", "OS X Lion", "Chrome OS" };
            public int getSize() { return strings.length; }
            public String getElementAt(int i) { return strings[i]; }
        });
        listeOS.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                listeOSMouseClicked(evt);
            }
        });
        jScrollPane1.setViewportView(listeOS);

        getContentPane().add(jScrollPane1);
        jScrollPane1.setBounds(120, 70, 90, 110);

        checkBoxLin.setText("Linux");
        checkBoxLin.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                checkBoxLinMouseClicked(evt);
            }
        });
        getContentPane().add(checkBoxLin);
        checkBoxLin.setBounds(0, 190, 63, 23);

        checkBoxWin.setText("Windows");
        checkBoxWin.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                checkBoxWinMouseClicked(evt);
            }
        });
        getContentPane().add(checkBoxWin);
        checkBoxWin.setBounds(60, 190, 86, 23);

        checkBoxMac.setText("OS X Lion");
        checkBoxMac.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                checkBoxMacMouseClicked(evt);
            }
        });
        getContentPane().add(checkBoxMac);
        checkBoxMac.setBounds(150, 190, 100, 23);

        buttonGroup1.add(radioLinux);
        radioLinux.setText("Linux");
        radioLinux.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                radioLinuxMouseClicked(evt);
            }
        });
        getContentPane().add(radioLinux);
        radioLinux.setBounds(0, 220, 63, 23);

        buttonGroup1.add(radioWindows);
        radioWindows.setText("Windows");
        radioWindows.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                radioWindowsMouseClicked(evt);
            }
        });
        getContentPane().add(radioWindows);
        radioWindows.setBounds(60, 220, 86, 23);

        buttonGroup1.add(radioMac);
        radioMac.setText("OS X Lion");
        radioMac.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                radioMacMouseClicked(evt);
            }
        });
        getContentPane().add(radioMac);
        radioMac.setBounds(150, 220, 90, 23);

        etMsgEvt.setText("source de l'événement :");
        getContentPane().add(etMsgEvt);
        etMsgEvt.setBounds(20, 250, 180, 15);
        getContentPane().add(textEvt);
        textEvt.setBounds(20, 270, 250, 20);

        jMenu1.setText("Langages");

        menuItemC.setText("C");
        menuItemC.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuItemCActionPerformed(evt);
            }
        });
        jMenu1.add(menuItemC);

        objet.setText("Objet");

        menuItemJava.setText("Java");
        menuItemJava.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuItemJavaActionPerformed(evt);
            }
        });
        objet.add(menuItemJava);

        menuItemCpp.setText("C++");
        menuItemCpp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuItemCppActionPerformed(evt);
            }
        });
        objet.add(menuItemCpp);

        jMenu1.add(objet);

        MenuWeb.setText("Web");

        menuItemPhp.setText("php");
        menuItemPhp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuItemPhpActionPerformed(evt);
            }
        });
        MenuWeb.add(menuItemPhp);

        menuItemJavaScript.setText("javascript");
        menuItemJavaScript.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                menuItemJavaScriptActionPerformed(evt);
            }
        });
        MenuWeb.add(menuItemJavaScript);

        jMenu1.add(MenuWeb);

        jMenuBar1.add(jMenu1);

        setJMenuBar(jMenuBar1);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void comboEntreeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_comboEntreeActionPerformed
        // TODO add your handling code here:
        System.out.println("Dans la zone de combo => "+comboEntree.getSelectedItem());
        textEvt.setText("Dans la zone de combo => "+comboEntree.getSelectedItem());
    }//GEN-LAST:event_comboEntreeActionPerformed

    private void menuItemCActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuItemCActionPerformed
        // TODO add your handling code here:
        System.out.println("Choix du menu => "+menuItemC.getText());
        textEvt.setText("Choix du menu => "+menuItemC.getText());
    }//GEN-LAST:event_menuItemCActionPerformed

    private void zoneSaisieActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_zoneSaisieActionPerformed
        // TODO add your handling code here:
        System.out.println("dans la zone de saisie => "+zoneSaisie.getText());
        textEvt.setText("dans la zone de saisie => "+zoneSaisie.getText());
    }//GEN-LAST:event_zoneSaisieActionPerformed

    private void listeOSMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_listeOSMouseClicked
        // TODO add your handling code here:
        System.out.println("Dans la zone de liste => "+listeOS.getSelectedValue());
        textEvt.setText("Dans la zone de liste => "+listeOS.getSelectedValue());
    }//GEN-LAST:event_listeOSMouseClicked

    private void zoneSaisieKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_zoneSaisieKeyTyped
        // TODO add your handling code here:
        if((zoneSaisie.getText().length())>=4){
            evt.consume();
        }
    }//GEN-LAST:event_zoneSaisieKeyTyped

    private void comboEntreeMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_comboEntreeMouseClicked
        // TODO add your handling code here:
        
    }//GEN-LAST:event_comboEntreeMouseClicked

    private void checkBoxLinMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_checkBoxLinMouseClicked
        // TODO add your handling code here:
        if(checkBoxLin.isSelected()){
            System.out.println("Case à cocher => "+checkBoxLin.getActionCommand()+" coché");
            textEvt.setText("Case à cocher => "+checkBoxLin.getActionCommand()+" coché");
        }
        else{
           System.out.println("Case à cocher => "+checkBoxLin.getActionCommand()+" décoché");
            textEvt.setText("Case à cocher => "+checkBoxLin.getActionCommand()+" décoché"); 
        }
    }//GEN-LAST:event_checkBoxLinMouseClicked

    private void checkBoxWinMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_checkBoxWinMouseClicked
        // TODO add your handling code here:
        if(checkBoxWin.isSelected()){
            System.out.println("Case à cocher => "+checkBoxWin.getActionCommand()+" coché");
            textEvt.setText("Case à cocher => "+checkBoxWin.getActionCommand()+" coché");
        }
        else{
           System.out.println("Case à cocher => "+checkBoxWin.getActionCommand()+" décoché");
            textEvt.setText("Case à cocher => "+checkBoxWin.getActionCommand()+" décoché"); 
        }
    }//GEN-LAST:event_checkBoxWinMouseClicked

    private void checkBoxMacMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_checkBoxMacMouseClicked
        // TODO add your handling code here:
        if(checkBoxMac.isSelected()){
            System.out.println("Case à cocher => "+checkBoxMac.getActionCommand()+" coché");
            textEvt.setText("Case à cocher => "+checkBoxMac.getActionCommand()+" coché");
        }
        else{
           System.out.println("Case à cocher => "+checkBoxMac.getActionCommand()+" décoché");
            textEvt.setText("Case à cocher => "+checkBoxMac.getActionCommand()+" décoché"); 
        }
    }//GEN-LAST:event_checkBoxMacMouseClicked

    private void radioLinuxMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_radioLinuxMouseClicked
        // TODO add your handling code here:
        System.out.println("Radio bouton => "+radioLinux.getActionCommand()+" coché");
            textEvt.setText("Radio bouton => "+radioLinux.getActionCommand()+" coché");
    }//GEN-LAST:event_radioLinuxMouseClicked

    private void radioWindowsMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_radioWindowsMouseClicked
        // TODO add your handling code here:
        System.out.println("Radio bouton => "+radioWindows.getActionCommand()+" coché");
            textEvt.setText("Radio bouton => "+radioWindows.getActionCommand()+" coché");
    }//GEN-LAST:event_radioWindowsMouseClicked

    private void radioMacMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_radioMacMouseClicked
        // TODO add your handling code here:
        System.out.println("Radio bouton => "+radioMac.getActionCommand()+" coché");
            textEvt.setText("Radio bouton => "+radioMac.getActionCommand()+" coché");
    }//GEN-LAST:event_radioMacMouseClicked

    private void menuItemJavaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuItemJavaActionPerformed
        // TODO add your handling code here:
        System.out.println("Choix du menu => "+menuItemJava.getText());
        textEvt.setText("Choix du menu => "+menuItemJava.getText());
    }//GEN-LAST:event_menuItemJavaActionPerformed

    private void menuItemCppActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuItemCppActionPerformed
        // TODO add your handling code here:
        System.out.println("Choix du menu => "+menuItemCpp.getText());
        textEvt.setText("Choix du menu => "+menuItemCpp.getText());
    }//GEN-LAST:event_menuItemCppActionPerformed

    private void menuItemPhpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuItemPhpActionPerformed
        // TODO add your handling code here:
        System.out.println("Choix du menu => "+menuItemPhp.getText());
        textEvt.setText("Choix du menu => "+menuItemPhp.getText());
    }//GEN-LAST:event_menuItemPhpActionPerformed

    private void menuItemJavaScriptActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_menuItemJavaScriptActionPerformed
        // TODO add your handling code here:
        System.out.println("Choix du menu => "+menuItemJavaScript.getText());
        textEvt.setText("Choix du menu => "+menuItemJavaScript.getText());
    }//GEN-LAST:event_menuItemJavaScriptActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(TestIHM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(TestIHM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(TestIHM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(TestIHM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new TestIHM().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenu MenuWeb;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JCheckBox checkBoxLin;
    private javax.swing.JCheckBox checkBoxMac;
    private javax.swing.JCheckBox checkBoxWin;
    private javax.swing.JComboBox<String> comboEntree;
    private javax.swing.JLabel etMsgEvt;
    private javax.swing.JLabel etiChoixSE;
    private javax.swing.JLabel etiListeSE;
    private javax.swing.JLabel etiSaisieCode;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu3;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JList<String> listeOS;
    private javax.swing.JMenuItem menuItemC;
    private javax.swing.JMenuItem menuItemCpp;
    private javax.swing.JMenuItem menuItemJava;
    private javax.swing.JMenuItem menuItemJavaScript;
    private javax.swing.JMenuItem menuItemPhp;
    private javax.swing.JMenu objet;
    private javax.swing.JRadioButton radioLinux;
    private javax.swing.JRadioButton radioMac;
    private javax.swing.JRadioButton radioWindows;
    private javax.swing.JLabel textEvt;
    private javax.swing.JTextField zoneSaisie;
    // End of variables declaration//GEN-END:variables
}
