#include "third_party/rnnoise/src/rnn_vad_weights.h"

namespace rnnoise {

const int8_t kInputDenseWeights[kInputLayerWeights] = {
    -10,  0,    -3,   1,    -8,   -6,   3,    -13,  1,    0,    -3,   -7,
    -5,   -3,   6,    -1,   -6,   0,    -6,   -4,   -1,   -2,   1,    1,
    -7,   2,    21,   10,   -5,   -20,  24,   23,   37,   8,    -2,   33,
    -6,   22,   13,   -2,   50,   8,    13,   1,    -15,  30,   -10,  30,
    0,    3,    5,    27,   1,    4,    -3,   41,   56,   35,   -2,   49,
    -13,  11,   13,   -2,   -47,  5,    -16,  -60,  -15,  77,   -17,  26,
    -3,   14,   -21,  19,   -5,   -19,  -13,  0,    10,   14,   9,    31,
    -13,  -41,  -10,  4,    22,   18,   -48,  -6,   -10,  62,   -3,   -18,
    -14,  12,   26,   -28,  3,    14,   25,   -13,  -19,  6,    5,    36,
    -3,   -65,  -12,  0,    31,   -7,   -9,   101,  -4,   26,   16,   17,
    -12,  -12,  14,   -36,  -3,   5,    -15,  21,   2,    30,   -3,   38,
    -4,   1,    -6,   7,    -7,   14,   38,   -22,  -30,  -3,   -7,   3,
    -39,  -70,  -126, 25,   34,   94,   -67,  -22,  -33,  83,   -47,  -118,
    4,    70,   33,   25,   62,   -128, -76,  -118, -113, 49,   -12,  -100,
    -18,  -114, -33,  43,   32,   61,   40,   -9,   -106, 2,    36,   -100,
    -40,  -5,   20,   -75,  61,   -51,  -9,   126,  -27,  -52,  5,    -24,
    -21,  -126, -114, -12,  15,   106,  -2,   73,   -125, 50,   13,   -120,
    35,   35,   4,    -61,  29,   -124, 6,    -53,  -69,  -125, 64,   -89,
    36,   -107, -103, -7,   27,   121,  69,   77,   -35,  35,   95,   -125,
    -49,  97,   -45,  -43,  -23,  23,   -28,  -65,  -118, 2,    8,    -126,
    27,   -97,  92,   5,    55,   82,   17,   -57,  -115, 37,   8,    -106,
    -46,  41,   -2,   21,   -44,  8,    -73,  -58,  -39,  34,   89,   -95,
    95,   -117, 120,  -58,  31,   123,  1,    -32,  -109, -110, 60,   -120,
    -43,  -74,  5,    91,   26,   21,   114,  82,   -83,  -126, 123,  22,
    -16,  -67,  25,   -83,  46,   48,   -34,  -121, -124, -63,  -35,  -9,
    31,   82,   123,  6,    -3,   117,  93,   -2,   -13,  -36,  124,  -112,
    -6,   -102, -5,   -33,  -15,  44,   -69,  -127, -23,  -40,  -34,  -85,
    68,   83,   -1,   40,   8,    84,   118,  -58,  -55,  -102, 123,  -55,
    -14,  -123, 44,   -63,  -14,  21,   35,   16,   24,   -126, -13,  -114,
    35,   20,   -36,  61,   -9,   97,   34,   19,   -32,  -109, 76,   -104,
    99,   -119, 45,   -125, -51,  -28,  -8,   -69,  -8,   125,  -45,  -93,
    113,  103,  -41,  -82,  52,   7,    126,  0,    -40,  104,  55,   -58,
    17,   -124, -93,  -58,  8,    -45,  1,    56,   -123, 108,  -47,  -23,
    115,  127,  17,   -68,  -13,  116,  -82,  -44,  45,   67,   -120, -101,
    -15,  -125, 120,  -113, 17,   -48,  -73,  126,  -64,  -86,  -118, -19,
    112,  -1,   -66,  -27,  -62,  121,  -86,  -58,  50,   89,   -38,  -75,
    95,   -111, 12,   -113, 2,    -68,  2,    -94,  -121, 91,   -5,   0,
    79,   43,   -7,   -18,  79,   35,   -38,  47,   1,    -45,  83,   -50,
    102,  32,   55,   -96,  15,   -122, -69,  45,   -27,  91,   -62,  -30,
    46,   -95,  22,   -72,  -97,  -1,   14,   -122, 28,   127,  61,   -126,
    121,  9,    68,   -120, 49,   -60,  90,   3,    43,   68,   54,   34,
    -10,  28,   21,   -24,  -54,  22,   -113, -12,  82,   -2,   -17,  -9,
    127,  8,    116,  -92,  0,    -70,  -33,  123,  66,   116,  -74,  -4,
    74,   -72,  -22,  -47,  1,    -83,  -60,  -124, 1,    122,  -57,  -43,
    49,   40,   -126, -128, -8,   -29,  28,   -24,  -123, -121, -70,  -93,
    -37,  -126, 11,   -125, -37,  11,   -31,  -51,  -124, 116,  -128, 8,
    -25,  109,  75,   -12,  7,    8,    10,   117,  124,  -128, -128, 29,
    -26,  101,  21,   -128, 87,   8,    -39,  23,   -128, 127,  -127, 74,
    -55,  74,   112,  127,  4,    55,   44,   -92,  123,  34,   -93,  47,
    -21,  -92,  17,   49,   -121, 92,   7,    -126, -125, 124,  -74,  3,
    -59,  18,   -91,  3,    -9,   9,    56,   116,  7,    -29,  33,   87,
    -21,  -128, -13,  57,   74,   9,    -29,  -61,  -97,  -21,  -95,  -12,
    -114, 16,   82,   125,  -7,   10,   -24,  9,    77,   -128, -102, -25,
    3,    -126, 10,   13,   -18,  51,   26,   127,  -79,  35,   51,   12,
    -50,  -24,  1,    -7,   22,   81,   65,   120,  -30,  -38,  85,   122,
    -4,   -106, -11,  27,   53,   41,   8,    -104, -66,  -38,  -124, 10,
    12,   76,   117,  -109, 9,    11,   2,    -18,  3,    113,  -16,  -79,
    -39,  -123, -20,  -128, 2,    13,   -33,  -58,  10,   84,   -104, 13,
    64,   109,  1,    54,   -12,  28,   24,   63,   -126, 118,  -82,  46,
    -12,  -15,  14,   -43,  60,   22,   -32,  -19,  -46,  91,   -107, 24,
    -94,  26,   -47,  125,  6,    58,   -15,  -75,  -26,  -38,  -35,  103,
    -16,  -17,  -13,  63,   -2,   45,   -45,  -73,  -23,  70,   -87,  51,
    -17,  53,   76,   14,   -18,  -31,  -14,  103,  8,    21,   -28,  -33,
    -20,  -47,  6,    39,   40,   -30,  7,    -76,  55,   31,   -20,  -21,
    -59,  1,    25,   -11,  17,   5,    -13,  -39,  0,    -76,  50,   -33,
    -29,  -50,  -16,  -11,  -12,  -1,   -46,  40,   -10,  65,   -19,  21,
    -41,  -32,  -83,  -19,  -4,   49,   -60,  118,  -24,  -46,  9,    102,
    -20,  8,    -19,  25,   31,   -3,   -37,  0,    25,   7,    29,   2,
    -39,  127,  -64,  -20,  64,   115,  -30,  36,   100,  35,   122,  127,
    127,  -127, 127,  -127, 19,   127,  -89,  -79,  -32,  39,   -127, 125,
    -80,  126,  -127, 26,   8,    98,   -8,   -57,  -90,  -50,  126,  61,
    127,  -126, 40,   -106, -68,  104,  -125, -119, 11,   10,   -127, 66,
    -56,  -12,  -126, -104, 27,   75,   38,   -124, -126, -125, 84,   -123,
    -45,  -114, -128, 127,  103,  -101, -124, 127,  -11,  -23,  -123, 92,
    -123, 24,   126,  41,   -2,   -39,  -27,  -94,  40,   -112, -48,  127,
    58,   14,   38,   -75,  -64,  73,   117,  100,  -119, -11,  6,    32,
    -126, -14,  35,   121,  -10,  54,   -60,  89,   -3,   69,   -25,  -20,
    43,   -86,  -34,  24,   27,   7,    -81,  -99,  -23,  -16,  -26,  13,
    35,   -97,  80,   -29,  -13,  -121, -12,  -65,  -94,  70,   -89,  -126,
    -95,  88,   33,   96,   29,   -90,  69,   114,  -78,  65,   90,   -47,
    -47,  89,   1,    -12,  3,    8,    30,   5,    2,    -30,  -1,   6,
    -7,   10,   -4,   46,   -27,  -40,  22,   -6,   -17,  45,   24,   -9,
    23,   -14,  -63,  -26,  -12,  -57,  27,   25,   55,   -76,  -47,  21,
    34,   33,   26,   17,   14,   6,    9,    26,   25,   -25,  -25,  -18};

const int8_t kInputDenseBias[kInputLayerOutputSize] = {
    38,  -6,  127,  127, 127,  -43, -127, 78,  127, 5,   127, 123,
    127, 127, -128, -76, -126, 28,  127,  125, -30, 127, -89, -20};

const int8_t kHiddenGruWeights[kHiddenLayerWeights] = {
    -124, 23,   -123, -33,  -95,  -4,   8,    -84,  4,    101,  -119, 116,
    -4,   123,  103,  -51,  29,   -124, -114, -49,  31,   9,    75,   -128,
    0,    -49,  37,   -50,  46,   -21,  -63,  -104, 54,   82,   33,   21,
    70,   127,  -9,   -79,  -39,  -23,  -127, 107,  122,  -96,  -46,  -18,
    -39,  13,   -28,  -48,  14,   56,   -52,  49,   -1,   -121, 25,   -18,
    -36,  -52,  -57,  -30,  54,   -124, -26,  -47,  10,   39,   12,   2,
    9,    -127, -128, 102,  21,   11,   -64,  -71,  89,   -113, -111, 54,
    31,   94,   121,  -40,  30,   40,   -109, 73,   -9,   108,  -92,  2,
    -127, 116,  127,  127,  -122, 95,   127,  -37,  -127, 28,   89,   10,
    24,   -104, -62,  -67,  -14,  38,   14,   -71,  22,   -41,  20,   -50,
    39,   63,   86,   127,  -18,  79,   4,    -51,  2,    33,   117,  -113,
    -78,  56,   -91,  37,   34,   -45,  -44,  -22,  21,   -16,  56,   30,
    -84,  -79,  38,   -74,  127,  9,    -25,  2,    82,   61,   25,   -26,
    26,   11,   117,  -65,  12,   -58,  42,   -62,  -93,  11,   11,   124,
    -123, 80,   -125, 11,   -90,  42,   94,   4,    -109, -1,   85,   -52,
    45,   -26,  -27,  77,   -5,   30,   90,   0,    95,   -7,   53,   29,
    -82,  22,   -9,   74,   2,    -12,  -73,  114,  97,   -64,  122,  -77,
    43,   91,   86,   126,  106,  72,   90,   -43,  46,   96,   -51,  21,
    22,   68,   22,   41,   79,   75,   -46,  -105, 23,   -116, 127,  -123,
    102,  57,   85,   10,   -29,  34,   125,  126,  124,  81,   -15,  54,
    96,   -128, 39,   -124, 103,  74,   126,  127,  -50,  -71,  -122, -64,
    93,   -75,  71,   105,  122,  123,  126,  122,  -127, 33,   -63,  -74,
    124,  -71,  33,   41,   -56,  19,   6,    65,   41,   90,   -116, -3,
    -46,  75,   -13,  98,   -74,  -42,  74,   -95,  -96,  81,   24,   32,
    -19,  -123, 74,   55,   109,  115,  0,    32,   33,   12,   -20,  9,
    127,  127,  -61,  79,   -48,  -54,  -49,  101,  -9,   27,   -106, 74,
    119,  77,   87,   -126, -24,  127,  124,  31,   34,   127,  40,   3,
    -90,  127,  23,   57,   -53,  127,  -69,  -88,  -33,  127,  19,   -46,
    -9,   -125, 13,   -126, -113, 127,  -41,  46,   106,  -62,  3,    -10,
    111,  49,   -34,  -24,  -20,  -112, 11,   101,  -50,  -34,  50,   65,
    -64,  -106, 70,   -48,  60,   9,    -122, -45,  15,   -112, -26,  -4,
    1,    39,   23,   58,   -45,  -80,  127,  82,   58,   30,   -94,  -119,
    51,   -89,  95,   -107, 30,   127,  125,  58,   -52,  -42,  -38,  -20,
    -122, 115,  39,   -26,  5,    73,   13,   -39,  43,   -23,  -20,  -125,
    23,   35,   53,   -61,  -66,  72,   -20,  33,   8,    35,   4,    7,
    18,   19,   16,   -45,  -50,  -71,  31,   -29,  -41,  -27,  10,   14,
    27,   9,    -23,  98,   6,    -94,  92,   127,  -114, 59,   -26,  -100,
    -62,  -127, -17,  -85,  -60,  126,  -42,  -6,   33,   -120, -26,  -126,
    -127, -35,  -114, -31,  25,   -126, -100, -126, -64,  -46,  -31,  30,
    25,   -74,  -111, -97,  -81,  -104, -114, -19,  -9,   -116, -69,  22,
    30,   59,   8,    -51,  16,   -97,  18,   -4,   -89,  80,   -50,  3,
    36,   -67,  56,   69,   -26,  107,  -10,  58,   -28,  -4,   -57,  -72,
    -111, 0,    -75,  -119, 14,   -75,  -49,  -66,  -49,  8,    -121, 22,
    -54,  121,  30,   54,   -26,  -126, -123, 56,   5,    48,   21,   -127,
    -11,  23,   25,   -82,  6,    -25,  119,  78,   4,    -104, 27,   61,
    -48,  37,   -13,  -52,  50,   -50,  44,   -1,   -22,  -43,  -59,  -78,
    -67,  -32,  -26,  9,    -3,   40,   16,   19,   3,    -9,   20,   -6,
    -37,  28,   39,   17,   -19,  -10,  1,    6,    -59,  74,   47,   3,
    -119, 0,    -128, -107, -25,  -22,  -69,  -23,  -111, -42,  -93,  -120,
    90,   -85,  -54,  -118, 76,   -79,  124,  101,  -77,  -75,  -17,  -71,
    -114, 68,   55,   79,   -1,   -123, -20,  127,  -65,  -123, -128, -87,
    123,  9,    -115, -14,  7,    -4,   127,  -79,  -115, 125,  -28,  89,
    -83,  49,   89,   119,  -69,  -5,   12,   -49,  60,   57,   -24,  -99,
    -110, 76,   -83,  125,  73,   81,   11,   8,    -45,  1,    83,   13,
    -70,  -2,   97,   112,  -97,  53,   -9,   -94,  124,  44,   -49,  -24,
    52,   76,   -110, -70,  -114, -12,  72,   -4,   -114, 43,   -43,  81,
    102,  -84,  -27,  62,   -40,  52,   58,   124,  -35,  -51,  -123, -43,
    56,   -75,  -34,  -35,  -106, 93,   -43,  14,   -16,  46,   62,   -97,
    21,   30,   -53,  21,   -11,  -33,  -20,  -95,  4,    -126, 12,   45,
    20,   108,  85,   11,   20,   -40,  99,   4,    -25,  -18,  -23,  -12,
    -126, -55,  -20,  -44,  -51,  91,   -127, 127,  -44,  7,    127,  78,
    38,   125,  -6,   -94,  -103, 73,   126,  -126, 18,   59,   -46,  106,
    76,   116,  -31,  75,   -4,   92,   102,  32,   -31,  73,   42,   -21,
    -28,  57,   127,  -8,   -107, 115,  124,  -94,  -4,   -128, 29,   -57,
    70,   -82,  50,   -13,  -44,  38,   67,   -93,  6,    -39,  -46,  56,
    68,   27,   61,   26,   18,   -72,  127,  22,   18,   -31,  127,  61,
    -65,  -38,  1,    -67,  -1,   8,    -73,  46,   -116, -94,  58,   -49,
    71,   -40,  -63,  -82,  -20,  -60,  93,   76,   69,   -106, 34,   -31,
    4,    -25,  107,  -18,  45,   4,    -61,  126,  54,   -126, -125, 41,
    19,   44,   32,   -98,  125,  -24,  125,  -96,  -125, 15,   87,   -4,
    -90,  18,   -40,  28,   -69,  67,   22,   41,   39,   7,    -48,  -44,
    12,   69,   -13,  2,    44,   -38,  111,  -7,   -126, -22,  -9,   74,
    -128, -36,  -7,   -123, -15,  -79,  -91,  -37,  -127, -122, 104,  30,
    7,    98,   -37,  111,  -116, -47,  127,  -45,  118,  -111, -123, -120,
    -77,  -64,  -125, 124,  77,   111,  77,   18,   -113, 117,  -9,   67,
    -77,  126,  49,   -20,  -124, 39,   41,   -124, -34,  114,  -87,  -126,
    98,   -20,  59,   -17,  -24,  125,  107,  54,   35,   33,   -44,  12,
    -29,  125,  -71,  -28,  -63,  -114, 28,   -17,  121,  -36,  127,  89,
    -122, -49,  -18,  -48,  17,   24,   19,   -64,  -128, 13,   86,   45,
    13,   -49,  55,   84,   48,   80,   -39,  99,   -127, 70,   -33,  30,
    50,   126,  -65,  -117, -13,  -20,  -24,  127,  115,  -72,  -104, 63,
    126,  -42,  57,   17,   46,   21,   119,  110,  -100, -60,  -112, 62,
    -33,  28,   26,   -22,  -60,  -33,  -54,  78,   25,   32,   -114, 86,
    44,   26,   43,   76,   121,  19,   97,   -2,   -3,   -73,  -68,  6,
    -116, 6,    -43,  -97,  46,   -128, -120, -31,  -119, -29,  16,   16,
    -126, -128, -126, -46,  -9,   -3,   92,   -31,  -76,  -126, -3,   -107,
    -12,  -23,  -69,  5,    51,   27,   -42,  23,   -70,  -128, -29,  22,
    29,   -126, -55,  50,   -71,  -3,   127,  44,   -27,  -70,  -63,  -66,
    -70,  104,  86,   115,  29,   -92,  41,   -90,  44,   -11,  -28,  20,
    -11,  -63,  -16,  43,   31,   17,   -73,  -31,  -1,   -17,  -11,  -39,
    56,   18,   124,  72,   -14,  28,   69,   -121, -125, 34,   127,  63,
    86,   -80,  -126, -125, -124, -47,  124,  77,   124,  -19,  23,   -7,
    -50,  96,   -128, -93,  102,  -53,  -36,  -87,  119,  -125, 92,   -126,
    118,  102,  72,   -2,   125,  10,   97,   124,  -125, 125,  71,   -20,
    -47,  -116, -121, -4,   -9,   -32,  79,   -124, -36,  33,   -128, -74,
    125,  23,   127,  -29,  -115, -32,  124,  -89,  32,   -107, 43,   -17,
    24,   24,   18,   29,   -13,  -15,  -36,  62,   -91,  4,    -41,  95,
    28,   -23,  6,    46,   84,   66,   77,   68,   -70,  -1,   -23,  -6,
    65,   70,   -21,  9,    77,   -12,  2,    -118, 4,    9,    -108, 84,
    52,   2,    52,   13,   -10,  58,   -110, 18,   66,   -95,  -23,  70,
    31,   -3,   56,   56,   -3,   -7,   1,    -27,  -48,  -61,  41,   -4,
    10,   -62,  32,   -7,   -24,  9,    -48,  -60,  -4,   79,   -20,  -38,
    -76,  68,   -49,  -97,  0,    -15,  5,    -100, -49,  -95,  -99,  -115,
    -9,   -40,  10,   104,  13,   56,   127,  -27,  -109, -94,  -118, -102,
    -44,  -85,  52,   127,  -4,   14,   62,   121,  -122, -26,  -79,  -42,
    -34,  1,    25,   -38,  -79,  -58,  -31,  -31,  -90,  -30,  -123, 32,
    -56,  125,  66,   124,  -1,   3,    91,   -103, -7,   23,   78,   -18,
    9,    69,   -69,  76,   -38,  -33,  -2,   -98,  18,   106,  84,   55,
    87,   -47,  35,   -124, 64,   41,   -14,  46,   25,   -2,   120,  -21,
    82,   19,   -79,  -37,  -3,   -8,   -16,  21,   19,   -5,   -28,  -112,
    39,   -6,   -30,  53,   -69,  53,   46,   127,  123,  78,   20,   28,
    -7,   73,   72,   17,   -40,  41,   111,  57,   32,   -95,  29,   28,
    -39,  -65,  54,   -20,  -63,  29,   -67,  3,    44,   -57,  -47,  11,
    61,   -22,  -44,  61,   48,   -100, 20,   125,  96,   -24,  -16,  3,
    -69,  -126, 74,   -125, 9,    45,   -67,  -123, -59,  -72,  118,  69,
    45,   50,   -57,  67,   13,   -66,  -106, 47,   62,   22,   -1,   -22,
    -25,  -40,  -125, 3,    125,  32,   102,  -56,  -25,  -75,  -30,  122,
    60,   -13,  36,   -73,  7,    -84,  124,  40,   -118, 17,   -87,  -118,
    -8,   3,    -27,  111,  -40,  40,   -51,  127,  125,  -45,  -30,  -54,
    46,   80,   -1,   -30,  101,  -17,  18,   26,   54,   7,    -12,  1,
    -127, 123,  -122, -27,  -75,  64,   10,   25,   -15,  -44,  127,  -127,
    5,    -84,  -81,  -7,   19,   -26,  126,  15,   116,  -126, 14,   -76,
    44,   62,   -110, -124, 125,  -29,  -87,  -3,   -69,  82,   90,   57,
    -123, 123,  100,  -19,  -51,  -32,  69,   37,   -57,  -128, -124, -72,
    -13,  51,   -7,   -45,  -73,  5,    99,   -26,  -117, -96,  -109, 4,
    -31,  -12,  0,    31,   -42,  -27,  12,   -81,  118,  39,   83,   14,
    41,   -126, 107,  -82,  94,   -116, -122, -47,  -109, -84,  -128, -35,
    -56,  66,   8,    -65,  19,   42,   -46,  -72,  -109, 41,   43,   -127,
    -113, 58,   127,  42,   -75,  -1,   65,   117,  -55,  -113, -123, 124,
    43,   -96,  -115, -19,  68,   15,   94,   3,    75,   0,    34,   9,
    42,   110,  -48,  92,   -76,  99,   -17,  27,   32,   13,   125,  50,
    -17,  56,   4,    53,   34,   -8,   99,   80,   -126, -21,  -65,  -11,
    -46,  44,   -81,  -3,   -121, 123,  66,   -81,  -84,  119,  127,  84,
    105,  45,   -66,  -42,  -23,  32,   -25,  12,   111,  127,  88,   125,
    30,   24,   -127, -9,   -54,  127,  -116, -119, 88,   70,   94,   -120,
    35,   -93,  15,   22,   -21,  25,   -110, -123, -45,  8,    -109, 125,
    -122, -86,  -126, 8,    -14,  -120, -45,  -45,  69,   -125, -122, 6,
    81,   86,   125,  95,   54,   77,   54,   -123, 126,  -85,  -117, 56,
    11,   0,    -61,  -91,  -12,  -2,   -113, -3,   -15,  -122, -63,  -91,
    10,   84,   -111, 125,  93,   21,   62,   -78,  -116, 13,   -57,  28,
    -124, 126,  110,  12,   15,   95,   15,   -19,  -125, -97,  52,   -7,
    101,  9,    20,   -125, -26,  -56,  72,   77,   12,   -126, 22,   -29,
    47,   62,   95,   112,  69,   32,   97,   -83,  -8,   -5,   67,   -63,
    -123, 79,   59,   0,    -6,   -17,  4,    -111, -52,  27,   65,   0};

const int8_t kHiddenGruRecurrentWeights[kHiddenLayerWeights] = {
    65,   83,   35,   56,   24,   -34,  -28,  -2,   125,  19,   42,   -9,
    124,  -53,  24,   -87,  11,   35,   -81,  -35,  -125, -31,  123,  -21,
    33,   -91,  113,  -93,  45,   -6,   53,   38,   -92,  8,    -27,  87,
    4,    43,   43,   10,   -128, -128, -46,  127,  -38,  -45,  25,   -87,
    19,   5,    52,   -96,  -23,  -29,  121,  -126, -24,  -20,  -2,   69,
    -50,  6,    71,   -81,  -125, 90,   -94,  1,    -38,  36,   89,   17,
    -60,  71,   -48,  18,   -15,  44,   -18,  59,   11,   114,  -51,  32,
    110,  1,    4,    109,  -24,  127,  27,   60,   88,   24,   45,   -59,
    75,   -36,  8,    57,   -32,  -25,  13,   126,  -89,  -61,  -76,  127,
    18,   -62,  -68,  23,   -113, 5,    126,  43,   -88,  26,   -78,  18,
    75,   21,   9,    -74,  20,   41,   126,  -118, -15,  9,    116,  126,
    -127, 34,   -6,   126,  -128, -53,  -54,  -55,  -121, 70,   127,  -12,
    -68,  82,   -25,  104,  -126, 126,  -21,  -26,  124,  -75,  -127, -120,
    13,   61,   -64,  -108, -63,  -65,  -44,  -35,  -61,  -39,  109,  -74,
    113,  -3,   108,  -30,  125,  120,  39,   125,  -128, -95,  -99,  111,
    9,    25,   114,  -75,  -92,  -54,  -12,  -32,  -38,  10,   31,   10,
    63,   51,   40,   -99,  74,   4,    50,   -128, -36,  -35,  -11,  -28,
    -126, -7,   66,   -58,  -126, -22,  -83,  -61,  -127, 49,   126,  -8,
    7,    62,   36,   -11,  -32,  -44,  63,   116,  41,   65,   -127, 126,
    63,   -30,  -96,  74,   -92,  127,  38,   -18,  -128, 68,   -5,   101,
    -4,   85,   58,   79,   0,    -58,  8,    119,  -70,  -1,   -79,  -68,
    114,  -28,  -90,  -6,   -112, 2,    127,  -8,   10,   55,   -59,  -126,
    127,  125,  80,   72,   35,   -54,  95,   -124, -124, 79,   23,   -46,
    -61,  -127, -100, 99,   -77,  8,    -87,  5,    -2,   49,   85,   7,
    -71,  82,   53,   -41,  22,   -22,  -93,  -103, 6,    52,   -56,  14,
    -8,   -111, 85,   16,   54,   32,   -118, -24,  61,   -53,  96,   -70,
    -5,   -17,  -67,  -84,  -7,   -82,  -107, -96,  21,   -83,  -58,  50,
    12,   -126, -1,   -28,  34,   -126, 115,  17,   91,   1,    -127, 72,
    11,   126,  -81,  6,    96,   -8,   77,   15,   -6,   63,   -27,  20,
    -123, -109, 85,   -79,  -17,  126,  -92,  2,    -61,  20,   14,   17,
    121,  123,  30,   57,   120,  127,  57,   42,   117,  98,   67,   39,
    -20,  -70,  100,  7,    125,  122,  40,   16,   -79,  125,  83,   41,
    -106, -57,  24,   55,   27,   -66,  -111, -44,  -7,   -43,  -66,  121,
    42,   -128, -45,  35,   15,   -127, 34,   -35,  -34,  -40,  -18,  -6,
    63,   111,  31,   116,  127,  19,   24,   -71,  -39,  34,   11,   19,
    -40,  27,   12,   106,  -10,  56,   -82,  -106, -2,   -50,  -52,  114,
    -126, -34,  -43,  -68,  10,   76,   57,   -118, -128, 37,   -104, 76,
    125,  3,    -76,  127,  -29,  84,   -94,  -15,  55,   125,  79,   127,
    -57,  -125, 104,  -68,  126,  126,  -77,  51,   45,   33,   -109, 115,
    -11,  1,    95,   -121, -5,   -9,   -126, -114, 39,   68,   -126, -107,
    -51,  -42,  24,   -8,   51,   -27,  -43,  66,   -45,  62,   -98,  -109,
    69,   67,   0,    -125, -128, 49,   31,   126,  -122, 2,    -55,  -67,
    -126, -70,  -128, -125, -77,  25,   16,   -8,   -102, 11,   -75,  82,
    38,   -5,   5,    19,   34,   47,   -127, -93,  21,   24,   -97,  -18,
    31,   39,   34,   -20,  22,   123,  7,    -77,  -81,  -46,  -9,   1,
    23,   39,   -127, -43,  -8,   -50,  10,   -21,  59,   -9,   -4,   -13,
    -27,  44,   127,  52,   -47,  70,   -43,  52,   101,  -49,  27,   45,
    49,   33,   -125, 55,   114,  20,   -1,   76,   -24,  -96,  105,  24,
    126,  75,   -21,  -105, 13,   -42,  40,   126,  -30,  -39,  -95,  125,
    -63,  11,   6,    125,  125,  -14,  5,    42,   -61,  -4,   49,   88,
    6,    -107, -28,  19,   -29,  47,   126,  6,    -46,  -89,  -18,  91,
    -20,  -6,   118,  -21,  -22,  39,   115,  11,   -42,  54,   73,   -55,
    -77,  62,   -27,  -59,  -99,  -12,  -127, -40,  56,   -3,   -124, -91,
    71,   -111, 6,    -19,  82,   -24,  -35,  102,  -42,  7,    -126, -126,
    -125, 18,   98,   -52,  127,  105,  -52,  40,   -83,  126,  -122, 109,
    5,    127,  48,   6,    5,    -125, 100,  -16,  29,   85,   -89,  8,
    4,    41,   62,   -127, 62,   122,  85,   122,  -107, 8,    -125, 93,
    -127, 127,  102,  19,   19,   -66,  41,   -42,  114,  127,  -48,  -117,
    -29,  -6,   -73,  -102, -3,   -19,  0,    88,   42,   87,   -117, -20,
    2,    122,  28,   63,   71,   66,   120,  93,   124,  -43,  49,   103,
    31,   90,   -91,  -22,  -126, 26,   -24,  -21,  51,   -126, 87,   -103,
    -69,  -10,  -66,  -23,  20,   97,   36,   25,   -127, 30,   -20,  -63,
    30,   51,   -116, 23,   40,   -39,  36,   -83,  -77,  -25,  -50,  110,
    14,   13,   -109, 125,  -65,  -55,  -87,  124,  -126, -32,  -72,  -108,
    127,  127,  -125, -124, 61,   121,  102,  -128, -127, 16,   100,  127,
    -124, -68,  72,   -93,  -128, 43,   -93,  -19,  -125, -97,  -113, -33,
    83,   127,  -44,  127,  -75,  127,  16,   44,   50,   -122, 23,   118,
    46,   19,   26,   -128, 10,   4,    99,   -14,  -82,  -13,  30,   125,
    57,   65,   60,   -71,  35,   98,   28,   7,    1,    43,   89,   70,
    75,   121,  -59,  82,   -126, -53,  -16,  -116, -65,  52,   -52,  0,
    80,   35,   45,   -61,  46,   8,    107,  27,   -26,  -118, 90,   57,
    -10,  7,    -15,  0,    -39,  -4,   12,   29,   -1,   116,  84,   79,
    119,  125,  -59,  28,   -6,   -25,  -43,  2,    90,   79,   67,   103,
    -82,  2,    -6,   125,  19,   73,   0,    -105, 112,  -17,  104,  107,
    124,  106,  19,   56,   -44,  55,   -112, 6,    -39,  -83,  126,  -93,
    -98,  57,   -120, -23,  -38,  2,    -31,  -48,  106,  127,  127,  69,
    16,   110,  71,   104,  62,   -12,  -22,  42,   -37,  -94,  34,   -1,
    -32,  -12,  -124, -47,  -13,  60,   -75,  -66,  58,   -127, -2,   64,
    76,   -106, 73,   -49,  -31,  127,  126,  31,   16,   127,  -110, 107,
    -16,  -53,  20,   69,   -14,  -125, 59,   -44,  15,   120,  125,  125,
    43,   6,    19,   -58,  127,  127,  43,   16,   82,   97,   -127, 127,
    -93,  -41,  88,   0,    77,   -15,  116,  16,   -124, -31,  -3,   95,
    -40,  -126, -54,  -126, -83,  -8,   -59,  6,    67,   -29,  4,    124,
    -10,  112,  -28,  -8,   85,   -21,  45,   84,   6,    -8,   11,   72,
    32,   84,   -62,  77,   2,    -36,  75,   31,   -50,  116,  126,  119,
    -88,  -55,  -14,  -37,  126,  40,   -108, -6,   -6,   57,   64,   -28,
    -76,  30,   -117, -93,  31,   -92,  -44,  -64,  94,   58,   65,   114,
    41,   47,   71,   42,   -26,  99,   -126, 57,   -5,   74,   -19,  -113,
    -1,   67,   -21,  126,  1,    -3,   33,   60,   -82,  37,   -48,  89,
    114,  -38,  127,  -114, 35,   58,   -5,   21,   -46,  121,  -123, -43,
    127,  115,  123,  122,  -101, 126,  127,  81,   52,   89,   -127, 102,
    42,   117,  -9,   -2,   125,  127,  110,  96,   120,  66,   70,   124,
    55,   84,   -38,  -58,  119,  -127, -16,  -79,  123,  18,   -127, -50,
    -38,  120,  -85,  1,    7,    -56,  108,  -77,  -2,   21,   37,   1,
    13,   -105, -69,  28,   -87,  33,   -104, -51,  126,  41,   3,    -121,
    28,   71,   58,   86,   -8,   127,  94,   -55,  125,  40,   -19,  127,
    -33,  -87,  -23,  7,    -111, -68,  9,    84,   -119, 55,   -82,  78,
    -37,  -20,  -9,   -23,  53,   -13,  15,   -46,  116,  126,  -127, 56,
    -126, 125,  -7,   -1,   45,   26,   125,  121,  29,   47,   -86,  30,
    10,   76,   -125, -7,   23,   92,   -12,  -39,  -18,  92,   -97,  -8,
    -85,  -41,  49,   -50,  123,  -37,  -126, -30,  14,   79,   -49,  -65,
    9,    -36,  -38,  -96,  85,   -24,  -13,  37,   -25,  -5,   -64,  -127,
    55,   -60,  -18,  -61,  -63,  127,  56,   67,   15,   124,  72,   120,
    127,  40,   -10,  114,  24,   -23,  46,   78,   -53,  125,  86,   124,
    86,   0,    38,   93,   21,   127,  123,  75,   -72,  13,   48,   33,
    83,   -51,  15,   -32,  -49,  -33,  120,  64,   7,    9,    65,   60,
    21,   -21,  -61,  -53,  -113, 84,   -97,  101,  37,   -114, -27,  41,
    73,   126,  -10,  59,   61,   -15,  70,   -13,  82,   -4,   69,   56,
    94,   -91,  -50,  92,   -74,  -48,  53,   -7,   -107, 127,  28,   30,
    -26,  -21,  -61,  77,   82,   64,   -91,  -125, 122,  -104, 127,  123,
    122,  123,  76,   -126, 127,  -6,   -80,  7,    40,   -66,  -65,  54,
    -2,   23,   96,   -64,  74,   2,    -53,  -12,  -123, 39,   60,   -20,
    16,   -17,  -97,  23,   -4,   -53,  -122, 32,   -16,  -54,  -95,  43,
    71,   -1,   -67,  -33,  41,   18,   72,   28,   -83,  31,   -100, -91,
    -27,  10,   -128, -106, 2,    76,   -13,  42,   34,   112,  -19,  44,
    40,   -9,   -11,  65,   92,   -43,  -125, 2,    47,   -32,  25,   122,
    -29,  12,   101,  -8,   -126, -23,  43,   7,    125,  -20,  -124, 82,
    -2,   13,   -73,  -106, 115,  31,   116,  -23,  -44,  -71,  84,   3,
    47,   91,   127,  127,  -15,  95,   7,    93,   5,    113,  -50,  54,
    11,   13,   -127, 17,   72,   43,   -23,  5,    -70,  20,   15,   -27,
    99,   69,   -109, -122, -94,  16,   127,  0,    116,  104,  45,   108,
    -34,  87,   72,   -14,  118,  46,   42,   109,  -26,  95,   93,   127,
    60,   127,  -93,  -54,  -122, 34,   -105, 56,   55,   103,  125,  -71,
    -50,  95,   -72,  127,  107,  21,   73,   126,  61,   127,  127,  24,
    -62,  90,   73,   90,   -46,  -78,  -124, 72,   123,  -42,  50,   -107,
    17,   -32,  -62,  -89,  124,  1,    80,   -2,   117,  119,  -65,  -127,
    -95,  -121, -52,  103,  66,   75,   -3,   -62,  -127, 127,  -74,  124,
    79,   49,   40,   105,  -67,  -71,  -70,  43,   127,  119,  -4,   66,
    43,   23,   91,   -126, 15,   63,   -119, 112,  103,  15,   -99,  31,
    -127, 69,   116,  -46,  -67,  2,    -126, -29,  30,   30,   -69,  -98,
    -47,  -87,  -70,  -127, 23,   -73,  30,   -7,   94,   -52,  -65,  98,
    -45,  97,   53,   23,   -9,   -22,  -52,  -47,  6,    -1,   -85,  -15,
    -61,  -14,  68,   110,  -10,  -121, -25,  -35,  -15,  -94,  -123, 27,
    75,   48,   -66,  -56,  -44,  93,   109,  67,   -36,  24,   70,   -126,
    8,    -127, 126,  52,   11,   -32,  120,  -13,  -26,  -28,  -125, 127,
    106,  -50,  124,  36,   -126, -12,  0,    -23,  76,   -71,  -126, -12,
    -17,  -82,  12,   124,  57,   33,   4,    77,   -46,  71,   -34,  72,
    125,  -128, 124,  -24,  -128, 75,   -120, 69,   -45,  55,   33,   127,
    -33,  4,    -105, -41,  -59,  -91,  123,  44,   -127, 127,  -67,  52,
    25,   -125, -65,  100,  -25,  123,  6,    11,   -123, -92,  -33,  126,
    -17,  -4,   29,   33,   127,  96,   3,    87,   -48,  -18,  -70,  123,
    58,   -127, -3,   -52,  -1,   -36,  -41,  127,  51,   -52,  -27,  46,
    -83,  57,   9,    126,  127,  94,   79,   -37,  -127, -40,  67,   52,
    82,   -66,  122,  -13,  -73,  127,  -8,   -80,  46,   -48,  4,    -54};

const int8_t kHiddenGruBias[kHiddenLayerBiases] = {
    124, 125, -57, -126, 53,  123, 127,  -75, 68,  102, -2, 116,
    124, 127, 124, 125,  126, 123, -16,  48,  125, 126, 78, 85,
    11,  126, -30, -30,  -64, -3,  -105, -29, -17, 69,  63, 2,
    -32, -10, -62, 113,  -52, 112, -109, 112, 7,   -40, 73, 53,
    62,  6,   -2,  0,    0,   100, -16,  26,  -24, 56,  26, -10,
    -33, 41,  70,  109,  -29, 127, 34,   -66, 49,  53,  27, 62};

const int8_t kOutputDenseWeights[kOutputLayerWeights] = {
    127,  127,  127, 127,  127,  20,  127,  -126, -126, -54, 14,  125,
    -126, -126, 127, -125, -126, 127, -127, -127, -57,  -30, 127, 80};

const int8_t kOutputDenseBias[kOutputLayerOutputSize] = {-50};

}  // namespace rnnoise
