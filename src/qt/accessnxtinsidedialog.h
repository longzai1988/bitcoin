// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ACCESSNXTINSIDEDIALOG_H
#define BITCOIN_QT_ACCESSNXTINSIDEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui {
    class AccessNxtInsideDialog;
}

class AccessNxtInsideDialog  : public QDialog
{
    Q_OBJECT

public:
    explicit AccessNxtInsideDialog(QWidget *parent);
    ~AccessNxtInsideDialog();

    void setModel(WalletModel *model);
    void setAddress_AN(const QString &address);
    void showTab_AN(bool fShow);

protected:
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::AccessNxtInsideDialog  *ui;
    WalletModel *model;

private slots:
	/* Access Nxt */
    void on_addressBookButton_AN_clicked();
    void on_pasteButton_AN_clicked();
	void on_accessNxtInsideButton_AN_clicked();
    void on_clearButton_AN_clicked();
};

#endif // BITCOIN_QT_ACCESSNXTINSIDEDIALOG_H
