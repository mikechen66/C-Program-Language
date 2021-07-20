/* Expand dcl to handle declarations with function argument types,qualifiers like const and so on */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

enum { NAME,PARENS,BRACKETS};
enum { NO,YES };

void dcl(void);
void dirdcl(void);
void errmsg(char *);


int gettoken(void);
extern int tokentype;   /* type of last token */
extern char token[];    /* last token string */
extern char name[]; /* identifier name */
extern char datatype[]; /* data type = char,int, etc */
extern char out[];
extern int prevtoken;

/* dcl: parse a declarator */

void dcl(void)
{
    int ns;
    
    for(ns = 0; gettoken() = '*'; ) /* count *'s */
        ns++;
    dirdcl();
    while(ns-- > 0)
        strcat(out,"pointer to");
}

/* dirdcl: parse a direct declaration */
void dirdcl(void)
{
    int type;
    void parmdcl(void);

    if(tokentype == '(')    /* (dcl)    */
    {
        dcl();
        if( tokentype != ')')
            errmsg("error: missing ) \n");
    }
    else if(tokentype == NAME)  
    {
        if(name[0] == '\0')
            strcpy(name,token);
    }
    else
        prevtoken = YES;
    
    while((type = gettoken()) == PARENS || type == BRACKETS || type == '(')
        if( type == PARENS)
            strcat(out,"function returning");
        else if (type == '(')
        {
            strcat(out,"function expecting");
            parmdcl();
            strcat(out,"and returning");    
        }
        else
        {
            strcat(out,"array");
            strcat(out,token);
            strcat(out,"of");
        }
}

/* errmsg: print error message and indicate avail. token */
void errmsg(char *msg)
{
    printf("%s",msg);
    prevtoken = YES;
}


/* The source file parmdcl.c */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXTOKEN 100

enum { NAME,PARENS,BRACKETS};
enum { NO, YES};

void dcl(void);
void errmsg(char *);
void dclspec(void);
void typespec(void);
void typequal(void);
int compare(char **,char **);
int gettoken(void);
extern int tokentype;   /* type of last token */
extern char token[];    /* last token string */
extern char name[]; /* identifier name */
extern char datatype[]; /* data type = char, int etc */
extern char out[];
extern int prevtoken;

/* parmdcl: parse a parameter declarator */

void parmdcl(void)
{
    do
    {
        dclspec();
    }while ( tokentype == ',');
    
    if(tokentype != ')')
        errmsg("missing ) in parameter declaration \n");
}


/* dclspec: declaration specification */

void dclspec(void)
{
    char temp[MAXTOKEN];

    temp[0] = '\0';
    gettoken();

    do
    {
        if(tokentype != NAME)
        {
            prevtoken = YES;
            dcl();
        }
        else if(typespec() == YES)
        {
            strcat(temp," ");
            strcat(temp,token);
            gettoken();
        }
        else if(typequal() == YES)
        {
            strcat(temp," ");
            strcat(temp,token);
            gettoken();
        }
        else
            errmsg("unknown type in parameter list \n");
    }while (tokentype != ',' && tokentype != ')');

    strcat(out,temp);
    if(tokentype == ',')
        strcat(out,",");
}



/* typespec: return YES if token is a type-specifier    */
int typespec(void)
{
    static char *type[] =
    {
        "char",
        "int",
        "void"
    };

    char *pt = token;

    if(bsearch(&pt,types,sizeof(types)/sizeof(char *),sizeof(char *)compare) == NULL)
        return NO;
    else
        return YES;
}

/* typequal: return YES if token is a type-qualifier */
int typequal(void)
{
    static char *typeq[] =
    {
        "const",
        "volatile"
    };

    char *pt = token;
    
    if(bsearch(&pt,typeq,sizeof(typeq)/sizeof(char *),sizeof(char *),compare) == NULL)
        return NO;
    else
        return YES;
}

/* compare: compare two strings for bsearch */

int compare(char **s,char **t)
{
    return strcmp(*s,*t);
}
    


/*
 * Output
 *
 * $gcc -o main *.c
 * main.c: In function ‘dcl’:
 * main.c:29:28: error: lvalue required as left operand of assignment
 //for(ns = 0; gettoken() = '*'; ) /* count *'s */
/*                            ^
 * main.c: At top level:
 * main.c:90:8: error: redeclaration of enumerator ‘NAME’
 * enum { NAME,PARENS,BRACKETS};
 *        ^~~~
 * main.c:7:8: note: previous definition of ‘NAME’ was here
 * enum { NAME,PARENS,BRACKETS};
 *        ^~~~
 * main.c:90:13: error: redeclaration of enumerator ‘PARENS’
 * enum { NAME,PARENS,BRACKETS};
 *             ^~~~~~
 * main.c:7:13: note: previous definition of ‘PARENS’ was here
 * enum { NAME,PARENS,BRACKETS};
 *             ^~~~~~
 * main.c:90:20: error: redeclaration of enumerator ‘BRACKETS’
 * enum { NAME,PARENS,BRACKETS};
 *                    ^~~~~~~~
 * main.c:7:20: note: previous definition of ‘BRACKETS’ was here
 * enum { NAME,PARENS,BRACKETS};
 *                    ^~~~~~~~
 * main.c:91:8: error: redeclaration of enumerator ‘NO’
 * enum { NO, YES};
 *        ^~
 * main.c:8:8: note: previous definition of ‘NO’ was here
 * enum { NO,YES };
 *        ^~
 * main.c:91:12: error: redeclaration of enumerator ‘YES’
 * enum { NO, YES};
 *            ^~~
 * main.c:8:11: note: previous definition of ‘YES’ was here
 * enum { NO,YES };
 *           ^~~
 * main.c: In function ‘dclspec’:
 * main.c:137:17: error: void value not ignored as it ought to be
 *         else if(typespec() == YES)
 *                 ^~~~~~~~~~
 * main.c:143:17: error: void value not ignored as it ought to be
 *         else if(typequal() == YES)
 *                 ^~~~~~~~~~
 * main.c: At top level:
 * main.c:161:5: error: conflicting types for ‘typespec’
 * int typespec(void)
 *     ^~~~~~~~
 * main.c:96:6: note: previous declaration of ‘typespec’ was here
 * void typespec(void);
 *      ^~~~~~~~
 * main.c: In function ‘typespec’:
 * main.c:172:20: error: ‘types’ undeclared (first use in this function); did you mean ‘type’?
 *     if(bsearch(&pt,types,sizeof(types)/sizeof(char *),sizeof(char *)compare) == NULL)
 *                    ^~~~~
 *                    type
 * main.c:172:20: note: each undeclared identifier is reported only once for each function it appears in
 * main.c:172:69: error: expected ‘)’ before ‘compare’
 *     if(bsearch(&pt,types,sizeof(types)/sizeof(char *),sizeof(char *)compare) == NULL)
 *                                                                     ^~~~~~~
 * main.c:172:8: error: too few arguments to function ‘bsearch’
 *     if(bsearch(&pt,types,sizeof(types)/sizeof(char *),sizeof(char *)compare) == NULL)
 *        ^~~~~~~
 * In file included from main.c:85:0:
 * /usr/include/stdlib.h:731:14: note: declared here
 * extern void *bsearch (const void *__key, const void *__base,
 *              ^~~~~~~
 * main.c: At top level:
 * main.c:179:5: error: conflicting types for ‘typequal’
 * int typequal(void)
 *     ^~~~~~~~
 * main.c:97:6: note: previous declaration of ‘typequal’ was here
 * void typequal(void);
 *      ^~~~~~~~
 * main.c: In function ‘typequal’:
 * main.c:189:70: warning: passing argument 5 of ‘bsearch’ from incompatible pointer type [-Wincompatible-pointer-types]
 *     if(bsearch(&pt,typeq,sizeof(typeq)/sizeof(char *),sizeof(char *),compare) == NULL)
 *                                                                      ^~~~~~~
 * In file included from main.c:85:0:
 * /usr/include/stdlib.h:731:14: note: expected ‘__compar_fn_t {aka int (*)(const void *, const void *)}’ but argument is of type ‘int (*)(char **, char **)’
 * extern void *bsearch (const void *__key, const void *__base,
 *              ^~~~~~~
 */
