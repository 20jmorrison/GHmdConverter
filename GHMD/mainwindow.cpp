#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfiledialog.h"
#include "qimagereader.h"
#include "QTextBlock"
#include "QTextFragment"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->insertImage, SIGNAL(released()), this, SLOT(insertImage()));
    connect(ui->increaseImage, SIGNAL(released()), this, SLOT(increaseImage()));
    connect(ui->decreaseImage, SIGNAL(released()), this, SLOT(decreaseImage()));

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
