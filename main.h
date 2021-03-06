#ifndef _MAIN_H_
  #define _MAIN_H_

#include <cfg_items.h>


#ifdef NEWSGOLD
#define CBOX_CHECKED 0xE116
#define CBOX_UNCHECKED 0xE117
#else
#define CBOX_CHECKED 0xE10B
#define CBOX_UNCHECKED 0xE10C
#endif

#ifdef ELKA
const char* key_names[]= {"Пусто","Левый софт",NULL,NULL,"Правый софт",NULL,NULL,NULL,NULL,NULL,NULL,"Кнопка вызова","Красная кнопка","Громкость +","Громкость -",NULL,NULL,"Медиа",NULL,NULL,NULL,"Poc.","Слайдер закрыт","Слайдер приоткрыт","Слайдер открыт","Слайдер призакрыт","Enter",NULL,NULL,NULL,"Плей",NULL,NULL,NULL,NULL,"#",NULL,NULL,NULL,"PTT",NULL,NULL,"*",NULL,NULL,NULL,NULL,NULL,"0","1","2","3","4","5","6","7","8","9",NULL,"Нав. вверх","Нав. вниз","Нав. влево","Нав. вправо"};
#else
#ifdef NEWSGOLD
const char* key_names[]= {"Пусто","Левый софт",NULL,NULL,"Правый софт",NULL,NULL,NULL,NULL,NULL,NULL,"Кнопка вызова","Красная кнопка","Громкость +","Громкость -",NULL,NULL,"Интернет",NULL,NULL,"Камера","Плей",NULL,NULL,NULL,NULL,"Enter",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,"#",NULL,NULL,NULL,"PTT",NULL,NULL,"*",NULL,NULL,NULL,NULL,NULL,"0","1","2","3","4","5","6","7","8","9",NULL,"Нав. вверх","Нав. вниз","Нав. влево","Нав. вправо"};
#else
#ifdef X75
const char* key_names[]= {"Пусто","Левый софт",NULL,NULL,"Правый софт",NULL,NULL,NULL,NULL,NULL,NULL,"Кнопка вызова","Красная кнопка","Громкость +","Громкость -",NULL,NULL,"Интернет",NULL,NULL,"Громкость +","Громкость -",NULL,NULL,NULL,NULL,"Enter",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,"#",NULL,NULL,NULL,"PTT",NULL,NULL,"*",NULL,NULL,NULL,NULL,NULL,"0","1","2","3","4","5","6","7","8","9",NULL,"Нав. вверх","Нав. вниз","Нав. влево","Нав. вправо"};
#else
const char* key_names[]= {"Пусто","Левый софт",NULL,NULL,"Правый софт",NULL,NULL,NULL,NULL,NULL,NULL,"Кнопка вызова","Красная кнопка","Громкость +","Громкость -",NULL,NULL,"Интернет",NULL,NULL,"Камера","Плей",NULL,NULL,NULL,NULL,"Enter",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,"#",NULL,NULL,NULL,"PTT",NULL,NULL,"*",NULL,NULL,NULL,NULL,NULL,"0","1","2","3","4","5","6","7","8","9",NULL,"Нав. вверх","Нав. вниз","Нав. влево","Нав. вправо"};
#endif
#endif
#endif

typedef struct
{
    void *next;
    char cfgname[64];
    char fullpath[128];
} SEL_BCFG;

typedef struct
{
    unsigned short u;
    char dos;
    char win;
    char koi8;
} TUNICODE2CHAR;

int maincsm_id;
unsigned short maincsm_name_body[140];
unsigned int MAINCSM_ID = 0;
unsigned int MAINGUI_ID = 0;
const int minus11=-11;
int my_csm_id=0;


unsigned int level=0;
CFG_HDR *levelstack[16];
int icon[]= {0x58,0};
char cfg_name[256];

//Указатель на буфер конфигурации
char *cfg;
//Длинна файла конфигурации
size_t size_cfg;

CFG_HDR *cfg_h[512];
int total_items;

WSHDR *ews;

const char _percent_u[]="%u";
const char _percent_d[]="%d";
const char _percent_t[]="%t";

const char _mmc_etc_path[]="4:\\Zbin\\etc\\";
const char _data_etc_path[]="0:\\Zbin\\etc\\";

//Ключи для поиска по T9
static const char table_T9Key[]=
    "11111111111111111111111111111111"
    "10001**0***0000*012345678900***0"
    "0222333444555666777788899991*110"
    "122233344455566677778889999111*1"
    "11111111111111111111111111111111"
    "11111111311111111111111131111111"
    "22223333444455566677778888899999"
    "22223333444455566677778888899999";



const TUNICODE2CHAR unicode2char[]=
{
    // CAPITAL Cyrillic letters (base)
    0x410,0x80,0xC0,0xE1, // А
    0x411,0x81,0xC1,0xE2, // Б
    0x412,0x82,0xC2,0xF7, // В
    0x413,0x83,0xC3,0xE7, // Г
    0x414,0x84,0xC4,0xE4, // Д
    0x415,0x85,0xC5,0xE5, // Е
    0x416,0x86,0xC6,0xF6, // Ж
    0x417,0x87,0xC7,0xFA, // З
    0x418,0x88,0xC8,0xE9, // И
    0x419,0x89,0xC9,0xEA, // Й
    0x41A,0x8A,0xCA,0xEB, // К
    0x41B,0x8B,0xCB,0xEC, // Л
    0x41C,0x8C,0xCC,0xED, // М
    0x41D,0x8D,0xCD,0xEE, // Н
    0x41E,0x8E,0xCE,0xEF, // О
    0x41F,0x8F,0xCF,0xF0, // П
    0x420,0x90,0xD0,0xF2, // Р
    0x421,0x91,0xD1,0xF3, // С
    0x422,0x92,0xD2,0xF4, // Т
    0x423,0x93,0xD3,0xF5, // У
    0x424,0x94,0xD4,0xE6, // Ф
    0x425,0x95,0xD5,0xE8, // Х
    0x426,0x96,0xD6,0xE3, // Ц
    0x427,0x97,0xD7,0xFE, // Ч
    0x428,0x98,0xD8,0xFB, // Ш
    0x429,0x99,0xD9,0xFD, // Щ
    0x42A,0x9A,0xDA,0xFF, // Ъ
    0x42B,0x9B,0xDB,0xF9, // Ы
    0x42C,0x9C,0xDC,0xF8, // Ь
    0x42D,0x9D,0xDD,0xFC, // Э
    0x42E,0x9E,0xDE,0xE0, // Ю
    0x42F,0x9F,0xDF,0xF1, // Я
    // CAPITAL Cyrillic letters (additional)
    0x402,'_',0x80,'_', // _ .*.*
    0x403,'_',0x81,'_', // _ .*.*
    0x409,'_',0x8A,'_', // _ .*.*
    0x40A,'_',0x8C,'_', // _ .*.*
    0x40C,'_',0x8D,'_', // _ .*.*
    0x40B,'_',0x8E,'_', // _ .*.*
    0x40F,'_',0x8F,'_', // _ .*.*
    0x40E,0xF6,0xA1,'_', // Ў ...*
    0x408,0x4A,0xA3,0x4A, // _ .*.*
    0x409,0x83,0xA5,0xBD, // _ .*..
    0x401,0xF0,0xA8,0xB3, // Ё
    0x404,0xF2,0xAA,0xB4, // Є
    0x407,0xF4,0xAF,0xB7, // Ї
    0x406,0x49,0xB2,0xB6, // _ .*..
    0x405,0x53,0xBD,0x53, // _ .*.*
    // SMALL Cyrillic letters (base)
    0x430,0xA0,0xE0,0xC1, // а
    0x431,0xA1,0xE1,0xC2, // б
    0x432,0xA2,0xE2,0xD7, // в
    0x433,0xA3,0xE3,0xC7, // г
    0x434,0xA4,0xE4,0xC4, // д
    0x435,0xA5,0xE5,0xC5, // е
    0x436,0xA6,0xE6,0xD6, // ж
    0x437,0xA7,0xE7,0xDA, // з
    0x438,0xA8,0xE8,0xC9, // и
    0x439,0xA9,0xE9,0xCA, // й
    0x43A,0xAA,0xEA,0xCB, // к
    0x43B,0xAB,0xEB,0xCC, // л
    0x43C,0xAC,0xEC,0xCD, // м
    0x43D,0xAD,0xED,0xCE, // н
    0x43E,0xAE,0xEE,0xCF, // о
    0x43F,0xAF,0xEF,0xD0, // п
    0x440,0xE0,0xF0,0xD2, // р
    0x441,0xE1,0xF1,0xD3, // с
    0x442,0xE2,0xF2,0xD4, // т
    0x443,0xE3,0xF3,0xD5, // у
    0x444,0xE4,0xF4,0xC6, // ф
    0x445,0xE5,0xF5,0xC8, // х
    0x446,0xE6,0xF6,0xC3, // ц
    0x447,0xE7,0xF7,0xDE, // ч
    0x448,0xE8,0xF8,0xDB, // ш
    0x449,0xE9,0xF9,0xDD, // щ
    0x44A,0xEA,0xFA,0xDF, // ъ
    0x44B,0xEB,0xFB,0xD9, // ы
    0x44C,0xEC,0xFC,0xD8, // ь
    0x44D,0xED,0xFD,0xDC, // э
    0x44E,0xEE,0xFE,0xC0, // ю
    0x44F,0xEF,0xFF,0xD1, // я
    // SMALL Cyrillic letters (additional)
    0x452,'_',0x90,'_', // _ .*.*
    0x453,'_',0x83,'_', // _ .*.*
    0x459,'_',0x9A,'_', // _ .*.*
    0x45A,'_',0x9C,'_', // _ .*.*
    0x45C,'_',0x9D,'_', // _ .*.*
    0x45B,'_',0x9E,'_', // _ .*.*
    0x45F,'_',0x9F,'_', // _ .*.*
    0x45E,0xF7,0xA2,'_', // ў ...*
    0x458,0x6A,0xBC,0x6A, // _ .*.*
    0x491,0xA3,0xB4,0xAD, // _ .*..
    0x451,0xF1,0xB8,0xA3, // ё
    0x454,0xF3,0xBA,0xA4, // є
    0x457,0xF5,0xBF,0xA7, // ї
    0x456,0x69,0xB3,0xA6, // _ .*..
    0x455,0x73,0xBE,0x73, // _ .*.*
    0x0A0,'_',0xA0,0x20, // space .*..
    0x0A4,'_',0xA4,0xFD, // ¤   .*..
    0x0A6,'_',0xA6,'_', // ¦   .*.*
    0x0B0,0xF8,0xB0,0x9C, // °
    0x0B7,0xFA,0xB7,0x9E, // ·
    // 0x2022,,0x95,0x95, //    .*..
    // 0x2116,0xFC,0xB9,0x23, // №   ...*
    // 0x2219,,0xF9,0x9E, //    .*..
    // 0x221A,0xFB,,0x96, // v   ..*.
    // 0x25A0,0xFE,,0x94, // ¦
    0x0000,0,0,0
};

SEL_BCFG *sbtop;

char T9Key[32];
int sel_bcfg_id;
char bcfg_hdr_text[32];
char bcfgmenu_sk_r[16];
volatile int prev_bcfg_itemcount;

int selbcfg_softkeys[]= {0,1,2};
char picpath[]="0:\\zbin\\img\\cfgedit.png";


extern char str[10];
extern int code;


int create_ed(CFG_HDR *);
unsigned int char16to8(unsigned int c);
void ErrorMsg(const char *msg);
void UpdateCSMname(const char *fname);
#endif
