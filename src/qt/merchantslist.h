#ifndef MERCHANTSLIST_H
#define MERCHANTSLIST_H

#include <QWidget>

namespace Ui {
class MerchantsList;
}

//QT_BEGIN_NAMESPACE
//class QModelIndex;
//QT_END_NAMESPACE

class MerchantsList : public QWidget
{
    Q_OBJECT

public:
    explicit MerchantsList(QWidget *parent = 0);
    ~MerchantsList();

private:
    Ui::MerchantsList *ui;
};

#endif // MERCHANTSLIST_H
