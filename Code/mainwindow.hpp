#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class Pepe;
}

class Pepe : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Pepe(QWidget *parent = 0);
    ~Pepe();
    
private slots:
    
    void on_findButton_clicked();
    
private:
    Ui::Pepe *ui;
    void loadTextFile();
};

#endif // MAINWINDOW_HPP
