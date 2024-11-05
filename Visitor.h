#pragma once

#include "Transactions.h"

class Deposit;
class Withdrawal;
class Transfer;
class BillPayment;

class TransactionVisitor {
public:
	virtual void visit(Deposit& deposit) = 0;
	virtual void visit(Withdrawal& withdrawal) = 0;
	virtual void visit(Transfer& transfer) = 0;
	virtual void visit(BillPayment& billPayment) = 0;
	virtual ~TransactionVisitor() = default;
};

class ShortReportVisitor : public TransactionVisitor {
public:
	void visit(Deposit& deposit) override;
	void visit(Withdrawal& withdrawal) override;
	void visit(Transfer& transfer) override;
	void visit(BillPayment& billPayment) override;
};

class DetailedReportVisitor : public TransactionVisitor {
public:
	void visit(Deposit& deposit) override;
	void visit(Withdrawal& withdrawal) override;
	void visit(Transfer& transfer) override;
	void visit(BillPayment& billPayment) override;
};