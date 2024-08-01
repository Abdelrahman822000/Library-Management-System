#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVector>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include <Headers\UserState.h>

// Namespace declaration to avoid naming conflicts
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// MainWindow class inheriting from QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor and Destructor
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slot function for handling login button click
    void on_LoginButton_clicked();

    // Slot function for handling exit button click
    void on_Exit_clicked();

    // Slot function for handling second exit button click
    void on_Exit_2_clicked();

    // Slot function for handling search button click
    void on_SearchButton_clicked();

    // Slot function for handling add button click
    void on_AddButton_clicked();

    // Slot function for handling remove button click
    void on_Remove_clicked();

    // Slot function for handling clear button click
    void on_Clear_clicked();

    // Slot function for handling second search button click
    void on_SearchButton_2_clicked();

    // Slot function for handling second clear button click
    void on_Clear_2_clicked();

    // Slot function for handling store button click
    void on_Store_clicked();

    // Slot function for handling restore button click
    void on_Restore_clicked();

    // Slot function for handling second remove button click
    void on_Remove_2_clicked();

    // Slot function for handling text change in the second combo box
    void on_comboBox_2_currentTextChanged(const QString &arg1);

    // Slot function for handling text change in the first combo box
    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    // UI object pointer
    Ui::MainWindow *ui;

    // Pointer to UserState for memento pattern implementation
    UserState *Memento;

    // Utility function for showing message boxes
    void showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button);

    // Message box for showing messages
    QMessageBox *msgBox;

};

#endif // MAINWINDOW_H
