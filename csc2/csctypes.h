
#ifndef INCLUDED_TYPES_H
#define INCLUDED_TYPES_H

/*
 * comdb2 data types - these should match the types in db/types.h
 */

/* CLIENT side types */
enum {
    CLIENT_MINTYPE = 0,
    CLIENT_UINT = 1,
    CLIENT_INT = 2,
    CLIENT_REAL = 3,
    CLIENT_CSTR = 4,
    CLIENT_PSTR = 5,
    CLIENT_BYTEARRAY = 6,
    CLIENT_PSTR2 = 7,
    CLIENT_BLOB = 8,
    CLIENT_DATETIME = 9,
    CLIENT_INTVYM = 10,
    CLIENT_INTVDS = 11,
    CLIENT_VUTF8 = 12,
    CLIENT_BLOB2 = 13,
    CLIENT_DATETIMEUS = 14,
    CLIENT_INTVDSUS = 15,
    CLIENT_MAXTYPE
};

/* ONDISK types */
enum {
    SERVER_MINTYPE = 100,
    SERVER_UINT = 101,
    SERVER_BINT = 102,
    SERVER_BREAL = 103,
    SERVER_BCSTR = 104,
    SERVER_BYTEARRAY = 105,
    SERVER_BLOB = 106,
    SERVER_DATETIME = 107,
    SERVER_INTVYM = 108,
    SERVER_INTVDS = 109,
    SERVER_VUTF8 = 110,
    SERVER_DECIMAL = 111,
    SERVER_BLOB2 = 112,
    SERVER_DATETIMEUS = 113,
    SERVER_INTVDSUS = 114,
    SERVER_MAXTYPE
};

#endif
