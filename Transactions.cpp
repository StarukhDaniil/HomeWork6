#include "Transactions.h"

void Deposit::accept(TransactionVisitor& visitor) {
	visitor.visit(*this);
}

void Withdrawal::accept(TransactionVisitor& visitor) {
	visitor.visit(*this);
}

void Transfer::accept(TransactionVisitor& visitor) {
	visitor.visit(*this);
}

void BillPayment::accept(TransactionVisitor& visitor) {
	visitor.visit(*this);
}