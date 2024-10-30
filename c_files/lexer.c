#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Created by yohan on 02/10/2024.//

//Définition de l'énumération des type de token et de la structure de notre token.

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
} Token;

//Permet à parir de la chaine de caractères de définir les différents tokens

Token* tokens(char* input, int* tokenCount) {
    Token* tokens = malloc(100*sizeof(Token));
    *tokenCount = 0;

    while (*input) {
        if(isspace(*input)) {
            input++;
            continue;
        }
        if(*input == '(') {
            tokens[*tokenCount].type = TOKEN_LPAREN;
            input++;
            *tokenCount ++;
        }else if(*input == ')') {
            tokens[*tokenCount].type = TOKEN_RPAREN;
            input++;
            *tokenCount ++;
        }else if(*input == '+' || *input == '-' || *input == '*' || *input == '/') {
            tokens[*tokenCount].type = TOKEN_OPERATOR;
            input++;
            *tokenCount ++;
        }else if(*input == '=') {
            tokens[*tokenCount].type = TOKEN_ASSIGN;
            input++;
            *tokenCount ++;
        }else if (isdigit(*input)) {

            tokens[*tokenCount].type = TOKEN_NUMBER;
        }
    }

    return tokens;
}

#include "lexer.h"