#include "notepad.h"
#include "ui_notepad.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_quitButton_clicked()
{
   QCoreApplication::quit();
}

void Notepad::on_actionOpen_triggered()
{
   QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"), QString(), tr("Text Files (*.txt);;C++ Files (*.cpp, *.h)"));

   if (!fileName.isEmpty())
   {
       QFile file(fileName);
       if (!file.open(QIODevice::ReadOnly))
       {
           QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
           return;
       }
       QTextStream in(&file);
       ui->textEdit->setText(in.readAll());
       file.close();
   }
}

void Notepad::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save file"), QString(), tr("Text Files (*.txt);;C++ files (*.cpp *.h)"));

    if (!fileName.isEmpty())
    {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            // error message
        }
        else
        {
            QTextStream stream(&file);
            stream << ui->textEdit->toPlainText();
            stream.flush();
            file.close();
        }
    }
}
