#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 1000
#define MAX_TOKENS 100

char* reservedWords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while","return"};

//判断是否包含关键字
int isReservedWord(char* word) 
{
    int i;
    int totalWords = sizeof(reservedWords) / sizeof(reservedWords[0]);
    for (i = 0; i < totalWords; i++) 
    {
        if (strcmp(reservedWords[i], word) == 0) 
        {
            return 1;
        }
    }
    return 0;
}

void extractTokens(char* input) 
{
    char* token = NULL;     //作分隔符返回的起始地址
    char* separators = " \t\n;=+-*/<>(){}[]\"',.";  //记录操作符以及分隔符
    char* integers[MAX_TOKENS] = {0};   //整型
    char* floats[MAX_TOKENS] = {0};     //浮点型
    char* reserved[MAX_TOKENS] = {0};   
    int intCount = 0, floatCount = 0, reservedCount = 0;

    token = strtok(input, separators);
    while (token != NULL) 
    {
        if (isdigit(token[0])) 
        {
            if (strchr(token, '.') != NULL) 
            {
                floats[floatCount++] = token;
            } 
            else 
            {
                integers[intCount++] = token;
            }
        } else if (isalpha(token[0])) 
        {
            if (isReservedWord(token)) 
            {
                reserved[reservedCount++] = token;
            }
        }
        token = strtok(NULL, separators);
    }

    // 输出提取到的分割的语句
    for (int i = 0; i < reservedCount; i++) 
    {
        printf("%s ", reserved[i]);
    }
    printf("\n");
    for (int i = 0; i < intCount; i++) 
    {
        printf("%s ", integers[i]);
    }
    printf("\n");
    for (int i = 0; i < floatCount; i++) 
    {
        printf("%s ", floats[i]);
    }
    printf("\n");
}

int main() {
    char code[MAX_LENGTH];
    char input[MAX_LENGTH];
    
    // 输入题目中的C代码
    while (1) {
        fgets(input, MAX_LENGTH, stdin);
        if (strcmp(input, "#STOP#\n") == 0) 
        {
            break;
        }
        strcat(code, input);    //连接
    }

    // 提取分隔符并且输出
    extractTokens(code);

    return 0;
}