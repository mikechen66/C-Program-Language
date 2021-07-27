#include "tokenize.h"

size_t tokenize(char *string, char **tokens)
{
  register bool in_token = false;
  size_t t;
  char *ch_ptr;
  for (t = 0, ch_ptr = string; *ch_ptr; ch_ptr++)  {
    if (isspace(*ch_ptr))  {
      if (in_token)
        /* this is the first char after a token,
         * and this is how we tokenize our string */
        *ch_ptr = '\0';
      in_token = false;
    } else  /* NOT A SPACE  */
      if (!in_token) {
        /* this is the frist char of our token, */
        /* so we put a pointer to it in our list */
        tokens[t++] = ch_ptr;
        in_token = true;
      }
  }
  return  t;
}
