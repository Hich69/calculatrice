#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_comma(false),
    m_plus(false),
    m_moins(false),
    m_fois(false),
    m_divise(false)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showResult()
{
    m_result.clear();
    ui->textBrowser->setText(value);
}

void MainWindow::initializeBool()
{
    m_comma = false; m_plus = false; m_moins = false; m_fois = false; m_divise = false;
}

void MainWindow::on_pushButton_0_clicked()
{
    value.append("0");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_1_clicked()
{
    value.append("1");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_2_clicked()
{
    value.append("2");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_3_clicked()
{
    value.append("3");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_4_clicked()
{
    value.append("4");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_5_clicked()
{
    value.append("5");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_6_clicked()
{
    value.append("6");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_7_clicked()
{
    value.append("7");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_8_clicked()
{
    value.append("8");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_9_clicked()
{
    value.append("9");
    ui->textBrowser->clear();
    showResult();
}

void MainWindow::on_pushButton_plus_clicked()
{
    ope = "+";
    ui->textBrowser->clear();
    opeVect.push_back(ope);
    value.append(" + ");
    showResult();
}

void MainWindow::on_pushButton_moins_clicked()
{
    ope = "-";
    ui->textBrowser->clear();
    opeVect.push_back(ope);
    value.append(" - ");
    showResult();
}

void MainWindow::on_pushButton_fois_clicked()
{
    ope = "*";
    ui->textBrowser->clear();
    opeVect.push_back(ope);
    value.append(" * ");
    showResult();
}

void MainWindow::on_pushButton_divise_clicked()
{
    ope = "/";
    ui->textBrowser->clear();
    opeVect.push_back(ope);
    value.append(" / ");
    showResult();
}

void MainWindow::on_pushButton_clean_clicked()
{
    ui->textBrowser->clear();
    value.clear();
    initializeBool();
}

void MainWindow::on_pushButton_calculate_clicked()
{

}

void MainWindow::on_pushButton_comma_clicked()
{
    if(!m_comma)
    {
        if(value.length() == 0)
        {
            value.push_back("0");
        }
        value.push_back(".");
    }
    ui->textBrowser->clear();
    showResult();
    m_comma = true;
}
