
/*
 * Please run the program on the native Tiny C Compiler. It could not be run on 
 * the online c complier since it need to call the program in the same folder
 * as follows
 * 
 * getch.c
 *
 * If the program is called on any online c compiler, it show the errors in the 
 * end of the program. 
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXWORD 100

struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);

// gcc 5.words-count-binary-tree.c getch.c
main()
{
    struct tnode *root;
    char word[MAXWORD];

    root = NULL;
    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            root = addtree(root, word);
    treeprint(root);

    return 0;
}

int getword(char *word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;

    while (isspace(c = getch()))
        ;
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}

struct tnode *talloc(void);
char *mystrdup(char *s);

struct tnode *addtree(struct tnode *p, char *w)
{
    int cond;

    if (p == NULL) {
        p = talloc();
        p->word = mystrdup(w);
        p->count = 1;
        p->left = p-> right = NULL;
    } else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;
    else if (cond < 0)
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);
    return p;
}

void treeprint(struct tnode *p)
{
    if (p != NULL) {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

struct tnode *talloc(void)
{
    return (struct tnode *) malloc(sizeof(struct tnode));
}

char *mystrdup(char *s)
{
    char *p;

    p = (char *) malloc(strlen(s)+1);
    if (p != NULL)
        strcpy(p, s);

    return p;
}



/*
 * Output
 *
 * $gcc -o main *.c
 * main.c:20:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 * main()
 * ^~~~
 * /tmp/ccyptjfT.o: In function `getword':
 * main.c:(.text+0x99): undefined reference to `getch'
 * main.c:(.text+0x109): undefined reference to `getch'
 * main.c:(.text+0x140): undefined reference to `ungetch'
 * collect2: error: ld returned 1 exit status
 */