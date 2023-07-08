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
    connect(ui->insertImage, SIGNAL(released()), this, SLOT(insertImage()));
    connect(ui->increaseImage, SIGNAL(released()), this, SLOT(increaseImage()));
    connect(ui->decreaseImage, SIGNAL(released()), this, SLOT(decreaseImage()));
    connect(ui->insertBullet, SIGNAL(released()), this, SLOT(insertBullet()));
    connect(ui->convert, SIGNAL(released()), this, SLOT(convert()));
    connect(ui->clear, SIGNAL(released()), this, SLOT(clear()));
    connect(ui->copy, SIGNAL(released()), this, SLOT(copy()));

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::insertImage(){
    QString file = QFileDialog::getOpenFileName(this, tr("Select an image"),
                                                ".", tr("Bitmap Files (*.bmp)\n"
                                                   "JPEG (*.jpg *jpeg)\n"
                                                   "GIF (*.gif)\n"
                                                   "PNG (*.png)\n"));
    QUrl Uri ( QString ( "file://%1" ).arg ( file ) );
    QImage image = QImageReader ( file ).read();

    ui->textEdit->loadResource(QTextDocument::ImageResource, Uri);
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextImageFormat imageFormat;
    imageFormat.setWidth( image.width() );
    imageFormat.setHeight( image.height() );
    imageFormat.setName( Uri.toString() );
    cursor.insertImage(imageFormat);
}

void MainWindow::increaseImage(){

}

void MainWindow::decreaseImage(){

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
