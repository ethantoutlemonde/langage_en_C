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

//Permet à parir de la chaine de caractère de définir les différents tokens


#include "lexer.h"