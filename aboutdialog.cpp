#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    setInfo();
    AboutDialog::connect(ui->pushButtonOK , &QPushButton::clicked , this , &AboutDialog::close ,
                         Qt::UniqueConnection);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::setInfo()
{
    ui->labelName->setText(QString(tr("Program name %1")) .arg(qApp->applicationName()));
    ui->labelVersion->setText(QString(tr("Program version %1")) .arg(qApp->applicationVersion()));
}
