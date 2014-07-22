#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include "person.h"
#include "info.h"
#include "dialog.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief Class to show basic information to user
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    /****************
     * CONSTRUCTORS *
     ****************/
    
    /**
     * @brief Default constructor
     * @param parent Default parameter
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    /***************
     *  MODIFIERS  *
     ***************/
    
    /**
     * @brief Function that loads data when exists de <em>Data</em> folder.
     */
    void loadData();
    
    /**
     * @brief Function to add the <em>Data</em> folder path.
     * @param data Contains de PATH to de <em>Data</em> folder.
     */
    void addPath(const QDir &data);
    
private slots:
    
    void on_actionInserir_triggered();
    
    void endInserir();
    
private:
    QDir data;
    Ui::MainWindow *ui;
    Person info;
    Dialog *inf; 
};

#endif // MAINWINDOW_H
