// Expr - A simple toy programming language
// Copyright (C) 2011 Ingo Ruhnke <grumbel@gmail.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_VISITOR_HPP
#define HEADER_VISITOR_HPP

class Expr;
class Plus;
class Minus;
class Mult;
class Div;
class Modulo;
class BitwiseAND;
class BitwiseXOR;
class BitwiseOR;
class Equal;
class NotEqual;
class LargerThen;
class SmallerThen;
class SmallerOrEqualThen;
class LargerOrEqualThen;
class ShiftLeft;
class ShiftRight;
class LogicalNOT;
class BitwiseNOT;
class Condition;
class Negate;
class Function;
class Variable;
class Integer;
class Real;

class Visitor
{
public:
  virtual ~Visitor() {}

  virtual void visit(const Plus& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Minus& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Mult& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Div& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Modulo& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const BitwiseAND& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const BitwiseXOR& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const BitwiseOR& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Equal& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const NotEqual& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const LargerThen& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const SmallerThen& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const SmallerOrEqualThen& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const LargerOrEqualThen& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const ShiftLeft& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const ShiftRight& node, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const LogicalNOT& node, const Expr& rhs) = 0;
  virtual void visit(const BitwiseNOT& node, const Expr& rhs) = 0;
  virtual void visit(const Condition& node, const Expr& expr, const Expr& lhs, const Expr& rhs) = 0;
  virtual void visit(const Negate& node, const Expr& expr) = 0;
  virtual void visit(const Function& node) = 0;
  virtual void visit(const Variable& node) = 0;
  virtual void visit(const Integer& node) = 0;
  virtual void visit(const Real& node) = 0;
};

#endif

/* EOF */
