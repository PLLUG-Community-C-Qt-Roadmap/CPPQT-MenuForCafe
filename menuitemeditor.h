#ifndef MENUITEMEDITOR_H
#define MENUITEMEDITOR_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class MenuItemEditor;
}

class MenuItemEditor : public QDialog
{
    Q_OBJECT

public:
    explicit MenuItemEditor(QWidget *parent = 0);
    ~MenuItemEditor();

signals:
    void signalWarning(const QString &text);

private slots:
    void slotWarning(const QString &text);
    void slotSave();

private:
    Ui::MenuItemEditor *ui;
};

#endif // MENUITEMEDITOR_H
