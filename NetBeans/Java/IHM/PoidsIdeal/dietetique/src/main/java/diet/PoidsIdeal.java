/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package diet;

/**
 *
 * @author msoulard
 */
public class PoidsIdeal extends javax.swing.JFrame {

    /**
     * Creates new form PoidsIdeal
     */
    public PoidsIdeal() {
        initComponents();
    }
    private String nom;
    private String prenom;
    private double imc;
    private double poids;
    private double taille;
    private int age;
    final private double imcs[] = {16.5, 18.5, 25, 30, 35, 40};
    final private String corpulences[] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    final private int NBIMC = 6;
    final private int NBCORPULENCE = 7;

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanelInformations = new javax.swing.JPanel();
        jLabelNom = new javax.swing.JLabel();
        jLabelPrenom = new javax.swing.JLabel();
        jLabelSexe = new javax.swing.JLabel();
        jLabelAge = new javax.swing.JLabel();
        jLabelPoids = new javax.swing.JLabel();
        jLabelTaille = new javax.swing.JLabel();
        jPanelSexe = new javax.swing.JPanel();
        jRadioButtonFemme = new javax.swing.JRadioButton();
        jRadioButtonHomme = new javax.swing.JRadioButton();
        jTextFieldNom = new javax.swing.JTextField();
        jTextFieldPrenom = new javax.swing.JTextField();
        jSpinnerAge = new javax.swing.JSpinner();
        jSpinnerPoids = new javax.swing.JSpinner();
        jSpinnerTaille = new javax.swing.JSpinner();
        jButtonSuite = new javax.swing.JButton();
        jPanelPoidsIdeal = new javax.swing.JPanel();
        jButtonDevine = new javax.swing.JButton();
        jButtonLorentz = new javax.swing.JButton();
        jButtonLorentzAge = new javax.swing.JButton();
        jTextAreaAfficheur = new javax.swing.JTextArea();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setPreferredSize(new java.awt.Dimension(530, 620));
        setResizable(false);
        getContentPane().setLayout(null);

        jLabelNom.setText("Nom");

        jLabelPrenom.setText("Prénom");

        jLabelSexe.setText("Sexe");

        jLabelAge.setText("Age");

        jLabelPoids.setText("Poids");

        jLabelTaille.setText("Taille");

        jRadioButtonFemme.setText("Femme");
        jRadioButtonFemme.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButtonFemmeActionPerformed(evt);
            }
        });

        jRadioButtonHomme.setText("Homme");
        jRadioButtonHomme.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButtonHommeActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanelSexeLayout = new javax.swing.GroupLayout(jPanelSexe);
        jPanelSexe.setLayout(jPanelSexeLayout);
        jPanelSexeLayout.setHorizontalGroup(
            jPanelSexeLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelSexeLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jRadioButtonFemme)
                .addGap(18, 18, 18)
                .addComponent(jRadioButtonHomme)
                .addContainerGap(12, Short.MAX_VALUE))
        );
        jPanelSexeLayout.setVerticalGroup(
            jPanelSexeLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelSexeLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelSexeLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jRadioButtonHomme)
                    .addComponent(jRadioButtonFemme))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        jSpinnerAge.setModel(new javax.swing.SpinnerNumberModel(1, 1, 200, 1));
        jSpinnerAge.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jSpinnerPoids.setModel(new javax.swing.SpinnerNumberModel(15.0d, 15.0d, 300.0d, 0.1d));

        jSpinnerTaille.setModel(new javax.swing.SpinnerNumberModel(0.5d, 0.5d, 3.0d, 0.5d));

        javax.swing.GroupLayout jPanelInformationsLayout = new javax.swing.GroupLayout(jPanelInformations);
        jPanelInformations.setLayout(jPanelInformationsLayout);
        jPanelInformationsLayout.setHorizontalGroup(
            jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelInformationsLayout.createSequentialGroup()
                .addGap(20, 20, 20)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabelPrenom)
                    .addComponent(jLabelSexe)
                    .addComponent(jLabelNom)
                    .addComponent(jLabelAge)
                    .addComponent(jLabelTaille)
                    .addComponent(jLabelPoids))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jPanelSexe, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(jTextFieldPrenom, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 171, Short.MAX_VALUE)
                        .addComponent(jTextFieldNom, javax.swing.GroupLayout.Alignment.LEADING))
                    .addComponent(jSpinnerAge, javax.swing.GroupLayout.PREFERRED_SIZE, 170, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(jSpinnerTaille, javax.swing.GroupLayout.Alignment.LEADING)
                        .addComponent(jSpinnerPoids, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 170, Short.MAX_VALUE)))
                .addContainerGap(40, Short.MAX_VALUE))
        );
        jPanelInformationsLayout.setVerticalGroup(
            jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelInformationsLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelNom)
                    .addComponent(jTextFieldNom, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(5, 5, 5)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabelPrenom, javax.swing.GroupLayout.PREFERRED_SIZE, 21, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jTextFieldPrenom, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanelInformationsLayout.createSequentialGroup()
                        .addComponent(jPanelSexe, javax.swing.GroupLayout.PREFERRED_SIZE, 36, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanelInformationsLayout.createSequentialGroup()
                        .addComponent(jLabelSexe)
                        .addGap(16, 16, 16)))
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jSpinnerAge, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelAge, javax.swing.GroupLayout.PREFERRED_SIZE, 15, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jSpinnerPoids, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelPoids))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanelInformationsLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jSpinnerTaille, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabelTaille))
                .addContainerGap(31, Short.MAX_VALUE))
        );

        getContentPane().add(jPanelInformations);
        jPanelInformations.setBounds(12, 12, 321, 220);

        jButtonSuite.setText("Suite");
        jButtonSuite.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonSuiteActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonSuite);
        jButtonSuite.setBounds(120, 240, 93, 25);

        jButtonDevine.setText("Poids idéal Devine");

        jButtonLorentz.setText("Poids idéal Lorentz");

        jButtonLorentzAge.setText("Poids idéal Lorents / âge");

        jTextAreaAfficheur.setColumns(20);
        jTextAreaAfficheur.setRows(5);

        javax.swing.GroupLayout jPanelPoidsIdealLayout = new javax.swing.GroupLayout(jPanelPoidsIdeal);
        jPanelPoidsIdeal.setLayout(jPanelPoidsIdealLayout);
        jPanelPoidsIdealLayout.setHorizontalGroup(
            jPanelPoidsIdealLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelPoidsIdealLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanelPoidsIdealLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jTextAreaAfficheur, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanelPoidsIdealLayout.createSequentialGroup()
                        .addGap(14, 14, 14)
                        .addGroup(jPanelPoidsIdealLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jButtonLorentz)
                            .addComponent(jButtonDevine)
                            .addComponent(jButtonLorentzAge))))
                .addContainerGap(108, Short.MAX_VALUE))
        );
        jPanelPoidsIdealLayout.setVerticalGroup(
            jPanelPoidsIdealLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanelPoidsIdealLayout.createSequentialGroup()
                .addComponent(jButtonDevine)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jButtonLorentz)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jButtonLorentzAge)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 26, Short.MAX_VALUE)
                .addComponent(jTextAreaAfficheur, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
        );

        getContentPane().add(jPanelPoidsIdeal);
        jPanelPoidsIdeal.setBounds(40, 280, 360, 200);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jRadioButtonHommeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButtonHommeActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButtonHommeActionPerformed

    private void jRadioButtonFemmeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButtonFemmeActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButtonFemmeActionPerformed

    private void jButtonSuiteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonSuiteActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jButtonSuiteActionPerformed

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
            java.util.logging.Logger.getLogger(PoidsIdeal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(PoidsIdeal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(PoidsIdeal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(PoidsIdeal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new PoidsIdeal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButtonDevine;
    private javax.swing.JButton jButtonLorentz;
    private javax.swing.JButton jButtonLorentzAge;
    private javax.swing.JButton jButtonSuite;
    private javax.swing.JLabel jLabelAge;
    private javax.swing.JLabel jLabelNom;
    private javax.swing.JLabel jLabelPoids;
    private javax.swing.JLabel jLabelPrenom;
    private javax.swing.JLabel jLabelSexe;
    private javax.swing.JLabel jLabelTaille;
    private javax.swing.JPanel jPanelInformations;
    private javax.swing.JPanel jPanelPoidsIdeal;
    private javax.swing.JPanel jPanelSexe;
    private javax.swing.JRadioButton jRadioButtonFemme;
    private javax.swing.JRadioButton jRadioButtonHomme;
    private javax.swing.JSpinner jSpinnerAge;
    private javax.swing.JSpinner jSpinnerPoids;
    private javax.swing.JSpinner jSpinnerTaille;
    private javax.swing.JTextArea jTextAreaAfficheur;
    private javax.swing.JTextField jTextFieldNom;
    private javax.swing.JTextField jTextFieldPrenom;
    // End of variables declaration//GEN-END:variables
}