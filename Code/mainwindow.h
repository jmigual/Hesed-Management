#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QDir>
#include "person.h"

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
    /**
     * @brief Default constructor
     * @param parent Default parameter
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    /**
     * @brief Function that loads data when exists de <em>Data</em> folder.
     * @param data Contains de PATH to de <em>Data</em> folder.
     */
    void loadData(QDir data);
    
private slots:
    void on_actionInsertar_triggered();
    
private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
};

#endif // MAINWINDOW_H
