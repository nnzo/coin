// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BFN_QT_BFNADDRESSVALIDATOR_H
#define BFN_QT_BFNADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BFNAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BFNAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BFN address widget validator, checks for a valid BFN address.
 */
class BFNAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BFNAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BFN_QT_BFNADDRESSVALIDATOR_H
