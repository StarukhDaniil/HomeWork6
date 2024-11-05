#pragma once

#include <iostream>
#include "Visitor.h"

class TransactionVisitor;

class Transaction {
public:
	virtual void accept(TransactionVisitor& visitor) = 0;
	virtual ~Transaction() = default;
};

class Deposit : public Transaction {
public:
	void accept(TransactionVisitor& visitor) override;
};

class Withdrawal : public Transaction {
public:
	void accept(TransactionVisitor& visitor) override;
};

class Transfer : public Transaction {
public:
	void accept(TransactionVisitor& visitor) override;
};

class BillPayment : public Transaction {
public:
	void accept(TransactionVisitor& visitor) override;
}; 