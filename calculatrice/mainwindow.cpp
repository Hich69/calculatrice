#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_comma(false)
{
    ui->setupUi(this);

    m_result_temp = new QList<QString>;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showResult()
{
    m_result.clear();
    for(QString w : *m_result_temp)
    {
        m_result.append(w);
    }
    ui->textBrowser->setText(m_result);
}

void MainWindow::on_pushButton_0_clicked()
{
    m_result_temp->push_back("0");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_1_clicked()
{
    m_result_temp->push_back("1");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_result_temp->push_back("2");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_3_clicked()
{
    m_result_temp->push_back("3");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_4_clicked()
{
    m_result_temp->push_back("4");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_5_clicked()
{
    m_result_temp->push_back("5");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_6_clicked()
{
    m_result_temp->push_back("6");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_7_clicked()
{
    m_result_temp->push_back("7");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_8_clicked()
{
    m_result_temp->push_back("8");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_9_clicked()
{
    m_result_temp->push_back("9");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_plus_clicked()
{

}

void MainWindow::on_pushButton_moins_clicked()
{

}

void MainWindow::on_pushButton_fois_clicked()
{

}

void MainWindow::on_pushButton_divise_clicked()
{

}

void MainWindow::on_pushButton_clean_clicked()
{
    ui->textBrowser->clear();
    m_result_temp = new QList<QString>;
}

void MainWindow::on_pushButton_calculate_clicked()
{

}

void MainWindow::on_pushButton_comma_clicked()
{
    m_result_temp->push_back(".");
}
