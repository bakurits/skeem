/* Copyright © 2015 Vibhav Pant <vibhavp@gmail.com>

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef TOKEN_H
#define TOKEN_H
#include "types.h"

enum tok_type {
  TOK_INT,
  TOK_FLOAT,
  /* TOK_CHAR, */
  TOK_STRING,
  TOK_SYMBOL,
  TOK_OPERATOR_PLUS,
  TOK_OPERATOR_MINUS,
  TOK_OPERATOR_DIVIDE,
  TOK_OPERATOR_MULTIPLY,
  TOK_PAREN_OPEN,
  TOK_PAREN_CLOSE
};

unsigned int ntok;
unsigned int depth;

object_t *tokens_to_obj();
#endif
