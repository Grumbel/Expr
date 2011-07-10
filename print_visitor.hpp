#ifndef HEADER_PRINT_VISITOR_HPP
#define HEADER_PRINT_VISITOR_HPP

#include <iosfwd>

#include "visitor.hpp"

class PrintVisitor : public Visitor
{
private:
  std::ostream& m_os;
  
public:
  PrintVisitor(std::ostream& os);

  void visit(const Plus& node, const Expr& lhs, const Expr& rhs);
  void visit(const Minus& node, const Expr& lhs, const Expr& rhs);
  void visit(const Mult& node, const Expr& lhs, const Expr& rhs);
  void visit(const Div& node, const Expr& lhs, const Expr& rhs);
  void visit(const Modulo& node, const Expr& lhs, const Expr& rhs);
  void visit(const BitwiseAND& node, const Expr& lhs, const Expr& rhs);
  void visit(const BitwiseXOR& node, const Expr& lhs, const Expr& rhs);
  void visit(const BitwiseOR& node, const Expr& lhs, const Expr& rhs);
  void visit(const Equal& node, const Expr& lhs, const Expr& rhs);
  void visit(const NotEqual& node, const Expr& lhs, const Expr& rhs);
  void visit(const LargerThen& node, const Expr& lhs, const Expr& rhs);
  void visit(const SmallerThen& node, const Expr& lhs, const Expr& rhs);
  void visit(const SmallerOrEqualThen& node, const Expr& lhs, const Expr& rhs);
  void visit(const LargerOrEqualThen& node, const Expr& lhs, const Expr& rhs);
  void visit(const ShiftLeft& node, const Expr& lhs, const Expr& rhs);
  void visit(const ShiftRight& node, const Expr& lhs, const Expr& rhs);
  void visit(const LogicalNOT& node, const Expr& rhs);
  void visit(const BitwiseNOT& node, const Expr& rhs);
  void visit(const Condition& node, const Expr& expr, const Expr& lhs, const Expr& rhs);
  void visit(const Negate& node, const Expr& expr);
  void visit(const Function& node);
  void visit(const Variable& node);
  void visit(const Integer& node);
  void visit(const Real& node);
};

#endif

/* EOF */
