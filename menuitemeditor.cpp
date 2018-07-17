#include "menuitemeditor.h"
#include "ui_menuitemeditor.h"

#include <QMessageBox>
#include "menuiterator.h"

MenuItemEditor::MenuItemEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuItemEditor)
{
    ui->setupUi(this);
    ui->priceDoubleSpinBox->setMinimum(0.5);
    ui->priceDoubleSpinBox->setMaximum(500);

    connect(ui->closePushButton, &QPushButton::clicked, this, &MenuItemEditor::close);
    connect(ui->savePushButton, &QPushButton::clicked, this, &MenuItemEditor::slotSave);
    connect(this, &MenuItemEditor::signalWarning, this, &MenuItemEditor::slotWarning);
}

MenuItemEditor::~MenuItemEditor()
{
    delete ui;
}

void MenuItemEditor::slotWarning(const QString &text)
{
    QMessageBox warningMessage(this);
    warningMessage.setText(text);
    warningMessage.exec();
}

void MenuItemEditor::slotSave()
{
    if (ui->nameLineEdit->text() == "")
    {
        emit signalWarning("Empty name field");
    }

}
