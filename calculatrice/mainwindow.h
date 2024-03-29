#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showResult();
    void initializeBool();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_moins_clicked();
    void on_pushButton_fois_clicked();
    void on_pushButton_divise_clicked();
    void on_pushButton_clean_clicked();
    void on_pushButton_calculate_clicked();
    void on_pushButton_comma_clicked();

private:
    Ui::MainWindow *ui;

    bool m_comma, m_plus, m_moins, m_fois, m_divise;

    QString m_result;
    QString value;
    QVector<QString> valueVect;
    QString ope;
    QVector<QString> opeVect;
};

#endif // MAINWINDOW_H
