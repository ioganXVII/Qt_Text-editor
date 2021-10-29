#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFont>
#include <QFontDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();


private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSaveAs_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionSelect_Font_triggered();

    void on_actionSet_Font_Bold_triggered(bool checked);

    void on_actionSet_Font_Underline_triggered(bool checked);

    void on_actionSet_Font_Italic_triggered(bool checked);

private:
    Ui::Notepad *ui;
    QString currentFile = "";
};
#endif // NOTEPAD_H
