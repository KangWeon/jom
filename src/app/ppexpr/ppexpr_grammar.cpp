// This file was generated by qlalr - DO NOT EDIT!
#include "ppexpr_grammar_p.h"

const char *const ppexpr_grammar::spell [] = {
  "end of file", 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 
#ifndef QLALR_NO_PPEXPR_GRAMMAR_DEBUG_INFO
"expression", "term0", "term1", "term2", "strterm1", 
  "term3", "term4", "term5", "term6", "primary", "$accept"
#endif // QLALR_NO_PPEXPR_GRAMMAR_DEBUG_INFO
};

const int ppexpr_grammar::lhs [] = {
  25, 26, 26, 26, 26, 26, 27, 27, 29, 29, 
  28, 28, 28, 28, 28, 28, 28, 30, 30, 30, 
  31, 31, 31, 32, 32, 32, 32, 33, 33, 33, 
  33, 34, 34, 35};

const int ppexpr_grammar:: rhs[] = {
  1, 1, 3, 3, 3, 3, 1, 1, 3, 3, 
  1, 3, 3, 3, 3, 3, 3, 1, 3, 3, 
  1, 3, 3, 1, 3, 3, 3, 1, 2, 2, 
  2, 1, 3, 2};


#ifndef QLALR_NO_PPEXPR_GRAMMAR_DEBUG_INFO
const int ppexpr_grammar::rule_info [] = {
    25, 26
  , 26, 27
  , 26, 27, 3, 27
  , 26, 27, 4, 27
  , 26, 27, 5, 27
  , 26, 27, 6, 27
  , 27, 28
  , 27, 29
  , 29, 2, 7, 2
  , 29, 2, 8, 2
  , 28, 30
  , 28, 30, 7, 30
  , 28, 30, 8, 30
  , 28, 30, 9, 30
  , 28, 30, 10, 30
  , 28, 30, 11, 30
  , 28, 30, 12, 30
  , 30, 31
  , 30, 31, 13, 31
  , 30, 31, 14, 31
  , 31, 32
  , 31, 32, 15, 32
  , 31, 32, 16, 32
  , 32, 33
  , 32, 33, 17, 33
  , 32, 33, 18, 33
  , 32, 33, 19, 33
  , 33, 34
  , 33, 16, 34
  , 33, 20, 34
  , 33, 21, 34
  , 34, 1
  , 34, 22, 26, 23
  , 35, 25, 0};

const int ppexpr_grammar::rule_index [] = {
  0, 2, 4, 8, 12, 16, 20, 22, 24, 28, 
  32, 34, 38, 42, 46, 50, 54, 58, 60, 64, 
  68, 70, 74, 78, 80, 84, 88, 92, 94, 97, 
  100, 103, 105, 109};
#endif // QLALR_NO_PPEXPR_GRAMMAR_DEBUG_INFO

const int ppexpr_grammar::action_default [] = {
  0, 0, 0, 0, 0, 32, 0, 0, 28, 8, 
  1, 2, 7, 11, 18, 21, 24, 30, 31, 0, 
  33, 29, 0, 0, 9, 10, 34, 0, 0, 0, 
  0, 5, 6, 3, 4, 0, 0, 0, 0, 0, 
  0, 12, 17, 16, 15, 14, 13, 0, 0, 19, 
  20, 0, 0, 23, 22, 0, 0, 0, 26, 27, 
  25};

const int ppexpr_grammar::goto_default [] = {
  7, 10, 11, 12, 9, 13, 14, 15, 16, 8, 
  0};

const int ppexpr_grammar::action_index [] = {
  71, 11, 6, 71, 5, -25, 3, 0, -25, -25, 
  -25, 13, -25, 45, -5, -11, -4, -25, -25, -22, 
  -25, -25, 23, 1, -25, -25, -25, 71, 71, 71, 
  29, -25, -25, -25, -25, 47, 47, 47, 47, 47, 
  22, -25, -25, -25, -25, -25, -25, 47, 19, -25, 
  -25, 47, 47, -25, -25, 47, 47, 47, -25, -25, 
  -25, 

  -11, -3, -4, -1, 4, -11, -11, -11, -11, -11, 
  -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, 
  -11, -11, -11, -11, -11, -11, -11, 12, 13, 9, 
  5, -11, -11, -11, -11, 24, 17, 14, -2, 7, 
  11, -11, -11, -11, -11, -11, -11, 15, 18, -11, 
  -11, -5, -6, -11, -11, 2, 0, 1, -11, -11, 
  -11};

const int ppexpr_grammar::action_info [] = {
  26, 20, 0, 25, 52, 51, 5, 5, 47, 48, 
  22, 23, 5, 57, 55, 56, 29, 30, 27, 28, 
  5, 0, 0, 5, 0, 24, 0, 3, 3, 0, 
  5, 6, 0, 3, 0, 4, 0, 0, 4, 1, 
  2, 3, 1, 2, 3, 4, 0, 0, 5, 1, 
  2, 3, 35, 40, 39, 38, 37, 36, 0, 0, 
  0, 0, 0, 4, 0, 0, 0, 1, 2, 3, 
  0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 
  0, 1, 2, 3, 0, 0, 

  19, 54, 53, 44, 0, 18, 17, 34, 59, 60, 
  58, 33, 45, 21, 31, 32, 46, 0, 0, 43, 
  0, 49, 42, 0, 50, 0, 0, 0, 0, 41, 
  0, 0, 0, 0, 0};

const int ppexpr_grammar::action_check [] = {
  0, 23, -1, 2, 15, 16, 1, 1, 13, 14, 
  7, 8, 1, 17, 18, 19, 3, 4, 5, 6, 
  1, -1, -1, 1, -1, 2, -1, 22, 22, -1, 
  1, 2, -1, 22, -1, 16, -1, -1, 16, 20, 
  21, 22, 20, 21, 22, 16, -1, -1, 1, 20, 
  21, 22, 7, 8, 9, 10, 11, 12, -1, -1, 
  -1, -1, -1, 16, -1, -1, -1, 20, 21, 22, 
  -1, -1, 1, 2, -1, -1, -1, -1, -1, -1, 
  -1, -1, -1, -1, -1, -1, -1, 16, -1, -1, 
  -1, 20, 21, 22, -1, -1, 

  1, 7, 7, 5, -1, 9, 9, 2, 8, 8, 
  8, 2, 5, 9, 2, 2, 5, -1, -1, 5, 
  -1, 6, 5, -1, 6, -1, -1, -1, -1, 5, 
  -1, -1, -1, -1, -1};
