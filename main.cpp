#include <iostream>
#include "Transactions.h"
#include "Visitor.h"

int main() {
	Deposit deposit;
	ShortReportVisitor shortReport;
	deposit.accept(shortReport);

	DetailedReportVisitor detailedReport;
	deposit.accept(detailedReport);
	return 0;
}