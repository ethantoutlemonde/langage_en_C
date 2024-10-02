#include <stdio.h>
typedef enum{
    TOKEN_NUMBER,
    TOKEN_OPERATOR,
    TOKEN_IDENTIFIER,
    TOKEN_ASSIGN,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_EOF,
} tokenType;

typedef struct{
    tokenType type;
    char* value;
} token;