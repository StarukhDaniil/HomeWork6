#include "Visitor.h"
#include <fstream>

void ShortReportVisitor::visit(Deposit& deposit) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Deposit in ShortReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Deposit in ShortReportVisitor" << std::endl;
}

void ShortReportVisitor::visit(Withdrawal& withdrawal) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Withdrawal in ShortReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Withdrawal in ShortReportVisitor" << std::endl;
}

void ShortReportVisitor::visit(Transfer& transfer) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Transfer in ShortReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Transfer in ShortReportVisitor" << std::endl;
}

void ShortReportVisitor::visit(BillPayment& billPayment) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "BillPayment in ShortReportVisitor" << std::endl;
	logFile.close();
	std::cout << "BillPayment in ShortReportVisitor" << std::endl;
}



void DetailedReportVisitor::visit(Deposit& deposit) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Deposit in DetailedReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Deposit in DetailedReportVisitor" << std::endl;
}

void DetailedReportVisitor::visit(Withdrawal& withdrawal) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Withdrawal in DetailedReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Withdrawal in DetailedReportVisitor" << std::endl;
}

void DetailedReportVisitor::visit(Transfer& transfer) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "Transfer in DetailedReportVisitor" << std::endl;
	logFile.close();
	std::cout << "Transfer in DetailedReportVisitor" << std::endl;
}

void DetailedReportVisitor::visit(BillPayment& billPayment) {
	std::ofstream logFile("log.txt", std::ios::app);
	logFile << "BillPayment in DetailedReportVisitor" << std::endl;
	logFile.close();
	std::cout << "BillPayment in DetailedReportVisitor" << std::endl;
}
