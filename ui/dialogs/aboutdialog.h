#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include <QShowEvent>
#include <QDesktopWidget>

namespace Ui {
class AboutDialog;
}

/*!
 * \brief The AboutDialog class
 * Dialog that shows version information about OpenIndy
 */
class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

private:

    //##################################
    //methods to initialize GUI elements
    //##################################

    void showEvent(QShowEvent *event);

private:
    Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_H
