#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>

namespace Ui {
class ImageViewer;
}

class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageViewer(QWidget *parent = 0);
    ~ImageViewer();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::ImageViewer *ui;
};

#endif // IMAGEVIEWER_H
