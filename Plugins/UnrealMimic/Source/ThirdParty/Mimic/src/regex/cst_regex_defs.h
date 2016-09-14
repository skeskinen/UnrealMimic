/* Autogenerated from make_cst_regexes */
static const unsigned char cst_rx_white_rxprog[] = {
    156, 6, 0, 20, 1, 0, 3, 11, 0, 11, 4, 0, 0, 32, 110, 116,
    114, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_white_rx = {
    0, 1, NULL, 0, 24,
    (char *) cst_rx_white_rxprog
};

const cst_regex *const cst_rx_white = &cst_rx_white_rx;

static const unsigned char cst_rx_alpha_rxprog[] = {
    156, 6, 0, 68, 1, 0, 3, 11, 0, 59, 4, 0, 0, 65, 66, 67,
    68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
        121,
    122, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_alpha_rx = {
    0, 1, NULL, 0, 72,
    (char *) cst_rx_alpha_rxprog
};

const cst_regex *const cst_rx_alpha = &cst_rx_alpha_rx;

static const unsigned char cst_rx_uppercase_rxprog[] = {
    156, 6, 0, 42, 1, 0, 3, 11, 0, 33, 4, 0, 0, 65, 66, 67,
    68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_uppercase_rx = {
    0, 1, NULL, 0, 46,
    (char *) cst_rx_uppercase_rxprog
};

const cst_regex *const cst_rx_uppercase = &cst_rx_uppercase_rx;

static const unsigned char cst_rx_lowercase_rxprog[] = {
    156, 6, 0, 42, 1, 0, 3, 11, 0, 33, 4, 0, 0, 97, 98, 99,
    100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
        115,
    116, 117, 118, 119, 120, 121, 122, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_lowercase_rx = {
    0, 1, NULL, 0, 46,
    (char *) cst_rx_lowercase_rxprog
};

const cst_regex *const cst_rx_lowercase = &cst_rx_lowercase_rx;

static const unsigned char cst_rx_alphanum_rxprog[] = {
    156, 6, 0, 78, 1, 0, 3, 11, 0, 69, 4, 0, 0, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73,
    74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
        111,
    112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 0, 2, 0, 3, 0,
    0, 0,
};

static const cst_regex cst_rx_alphanum_rx = {
    0, 1, NULL, 0, 82,
    (char *) cst_rx_alphanum_rxprog
};

const cst_regex *const cst_rx_alphanum = &cst_rx_alphanum_rx;

static const unsigned char cst_rx_identifier_rxprog[] = {
    156, 6, 0, 136, 1, 0, 3, 4, 0, 57, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86,
    87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108,
    109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 95,
        0,
    11, 0, 70, 4, 0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102,
    103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
        118,
    119, 120, 121, 122, 95, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_identifier_rx = {
    0, 1, NULL, 0, 140,
    (char *) cst_rx_identifier_rxprog
};

const cst_regex *const cst_rx_identifier = &cst_rx_identifier_rx;

static const unsigned char cst_rx_int_rxprog[] = {
    156, 6, 0, 40, 1, 0, 3, 6, 0, 8, 8, 0, 8, 45, 0, 6,
    0, 3, 9, 0, 3, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_int_rx = {
    0, 1, NULL, 0, 44,
    (char *) cst_rx_int_rxprog
};

const cst_regex *const cst_rx_int = &cst_rx_int_rx;

static const unsigned char cst_rx_double_rxprog[] = {
    156, 6, 0, 199, 1, 0, 3, 6, 0, 8, 8, 0, 8, 45, 0, 6,
    0, 3, 9, 0, 3, 21, 0, 3, 6, 0, 51, 22, 0, 3, 6, 0,
    42, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56,
    57, 0, 8, 0, 5, 46, 0, 10, 0, 17, 4, 0, 0, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 0, 32, 0, 66, 6, 0, 29, 23, 0,
    3, 6, 0, 20, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52, 53,
    54, 55, 56, 57, 0, 33, 0, 37, 6, 0, 34, 24, 0, 3, 6, 0,
    25, 8, 0, 5, 46, 0, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 0, 34, 0, 3, 31, 0, 3, 6, 0, 50,
    25, 0, 3, 6, 0, 41, 4, 0, 6, 101, 69, 0, 6, 0, 9, 4,
    0, 9, 45, 43, 0, 6, 0, 3, 9, 0, 3, 11, 0, 17, 4, 0,
    0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 35, 0, 6, 6,
    0, 3, 9, 0, 3, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_double_rx = {
    0, 1, NULL, 0, 203,
    (char *) cst_rx_double_rxprog
};

const cst_regex *const cst_rx_double = &cst_rx_double_rx;

static const unsigned char cst_rx_commaint_rxprog[] = {
    156, 6, 0, 224, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53,
    54, 55, 56, 57, 0, 6, 0, 17, 4, 0, 17, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 0, 6, 0, 3, 9, 0, 3, 6, 0, 17, 4,
    0, 17, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 6, 0, 3,
    9, 0, 3, 8, 0, 5, 44, 0, 6, 0, 62, 21, 0, 3, 6, 0,
    50, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 4,
    0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 4, 0, 14,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 8, 0, 5, 44, 0,
    31, 0, 3, 7, 0, 59, 6, 0, 3, 9, 0, 3, 4, 0, 14, 48,
    49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 4, 0, 14, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 0, 6, 0, 34, 22, 0, 3, 6, 0, 25, 8,
    0, 5, 46, 0, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52, 53,
    54, 55, 56, 57, 0, 32, 0, 6, 6, 0, 3, 9, 0, 3, 2, 0,
    3, 0, 0, 0,
};

static const cst_regex cst_rx_commaint_rx = {
    0, 1, NULL, 0, 228,
    (char *) cst_rx_commaint_rxprog
};

const cst_regex *const cst_rx_commaint = &cst_rx_commaint_rx;

static const unsigned char cst_rx_digits_rxprog[] = {
    156, 6, 0, 40, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53,
    54, 55, 56, 57, 0, 10, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_digits_rx = {
    0, 1, NULL, 0, 44,
    (char *) cst_rx_digits_rxprog
};

const cst_regex *const cst_rx_digits = &cst_rx_digits_rx;

static const unsigned char cst_rx_dotted_abbrev_rxprog[] = {
    156, 6, 0, 147, 1, 0, 3, 6, 0, 76, 21, 0, 3, 6, 0, 64,
    4, 0, 56, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
    78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99,
    100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
        115,
    116, 117, 118, 119, 120, 121, 122, 0, 8, 0, 5, 46, 0, 31, 0, 3,
    7, 0, 73, 6, 0, 3, 9, 0, 3, 4, 0, 56, 65, 66, 67, 68,
    69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
    85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
        122,
    0, 2, 0, 3, 0, 0, 0,
};

static const cst_regex cst_rx_dotted_abbrev_rx = {
    0, 1, NULL, 0, 151,
    (char *) cst_rx_dotted_abbrev_rxprog
};

const cst_regex *const cst_rx_dotted_abbrev = &cst_rx_dotted_abbrev_rx;