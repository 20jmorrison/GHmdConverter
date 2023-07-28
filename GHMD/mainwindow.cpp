#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfiledialog.h"
#include "qimagereader.h"
#include "QTextBlock"
#include "QTextFragment"
#include "QClipboard"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->insertBullet, SIGNAL(released()), this, SLOT(insertBullet()));
    connect(ui->convert, SIGNAL(released()), this, SLOT(convert()));
    connect(ui->clear, SIGNAL(released()), this, SLOT(clear()));
    connect(ui->copy, SIGNAL(released()), this, SLOT(copy()));
    connect(ui->headingComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(insertHeading(int)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::insertHeading(int index){
    QString selectedText = ui->textEdit->textCursor().selectedText();
    QString headerText;
    bool validSelection = true;
    switch (index){
        case 1:{
            headerText = "<h1>" + selectedText + "</h1>";
            break;
        }
        case 2:{
            headerText = "<h2>" + selectedText + "</h2>";
            break;
        }
        case 3:{
            headerText = "<h3>" + selectedText + "</h3>";
            break;
        }
        default:{
            validSelection = false;
            break;
        }
    }

    if (!selectedText.isEmpty() && validSelection) {
        ui->textEdit->insertHtml(headerText);
    }

}

void MainWindow::insertBullet(){
    QTextListFormat::Style style = QTextListFormat::ListDisc;

    QTextCursor cursor = ui->textEdit->textCursor();
    QTextListFormat listFormat;
    listFormat.setStyle( style );
    cursor.createList( listFormat );
}

void MainWindow::convert(){

    QString convertedText = ui->textEdit->document()->toMarkdown();
    ui->output->setPlaceholderText(convertedText);
}

void MainWindow::clear(){
    ui->textEdit->clear();
    ui->output->setPlaceholderText("");
}

void MainWindow::copy(){
    QString md = ui->output->placeholderText();
    QClipboard* clipboard = QApplication::clipboard();
    clipboard->setText(md);
}
