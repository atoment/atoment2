#pragma once
#include "_components.hh"

namespace Lexer {
	enum class TokenType {
		Function       = 0,
		Keyword        = 1,
		String         = 2,
		Number         = 3,
		Identifier     = 4,
		EndOfArguments = 5,
		EndOfFile      = 6,
		Pointer        = 7,
		Dereference    = 8,
		Operator       = 9
	};
	struct Token {
		TokenType type;
		string    value;
		char      extrach;
		uint32_t  line, column;
		Token(TokenType type, string value, size_t ln, size_t col) : type(type), value(value), line(ln), column(col) {}
	};
	vector <Token> Tokenize(string source);
	string ToString(TokenType type);
}