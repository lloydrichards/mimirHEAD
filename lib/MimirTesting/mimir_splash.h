const uint8_t mimir_splash[4000] PROGMEM= { /* 0X00,0X01,0X80,0X00,0XFA,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XA8,0X00,0X00,0X22,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X00,0X00,0X00,0X00,0X0C,0X80,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X04,0XFF,0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,
0XFF,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,
0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,
0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,
0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFE,0X1F,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,
0XFE,0X7F,0XC3,0XB0,0XF0,0X57,0X73,0X87,0XFF,0X9F,0XFF,0XFF,0XFF,0XD3,0XFF,0XFF,
0XFC,0X7F,0XE6,0X16,0X79,0XD2,0X44,0XB3,0XFF,0X1F,0XFF,0XFF,0XFF,0X87,0XFF,0XFF,
0XFE,0X7F,0XEF,0XDF,0X7D,0XF6,0X5D,0X77,0XFF,0X9F,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,
0XFE,0X7F,0XE6,0X11,0X7D,0XF4,0X5E,0X73,0XFF,0X1F,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,
0XFC,0X7F,0XEF,0X83,0X79,0XF1,0X5E,0X37,0XFF,0X1F,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,
0XFE,0XFF,0XEF,0XD6,0X7D,0XF2,0X49,0XA3,0XFF,0X9F,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,
0XFC,0XFF,0XE6,0X18,0XFD,0XF7,0X63,0X87,0XFF,0X9F,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,
0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFC,0X7E,0X17,0X05,0X05,0X0E,0XC7,0XBC,0X7F,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0XFC,0XC0,0XCC,0XCD,0X6C,0XF9,0X09,0X7F,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFC,0XFD,0X9D,0X9C,0X59,0X4C,0XFD,0XEB,0X3F,0X1F,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,
0XFE,0X7D,0XD1,0XD9,0XDD,0X28,0X7C,0X03,0X7F,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFC,0X7D,0XDD,0X9A,0X4D,0X09,0X7D,0XCB,0X7F,0X3F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0X7C,0X98,0XD8,0X19,0XE0,0X69,0XA9,0X3F,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0X7E,0X01,0XD7,0X5D,0XE7,0XA3,0X0C,0X7F,0X3F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,
0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,
0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,
0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,
0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFB,0XFF,0XFF,0XFF,
0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XFF,0XFB,0XFF,0XFF,0XFF,
0XFF,0XE0,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,
0XFF,0XF8,0X0E,0X3F,0XFF,0X80,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,
0XFF,0XFF,0X0E,0X00,0X00,0X08,0X02,0X87,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE4,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFD,0XFF,
0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XFF,0XFE,0XFF,
0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFE,0XFF,
0XFF,0XFF,0XE4,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0X7F,
0XFF,0XFF,0XE4,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7E,0X3F,0X7F,
0XFF,0XFF,0XF6,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X7C,0X9F,0XBF,
0XFF,0XFF,0XF2,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X35,0XEF,0XDF,
0XFF,0XFF,0XFD,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X35,0XF7,0XFF,
0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X98,0XF3,0XFF,
0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X99,0XF9,0XFF,
0XFF,0XFF,0XFF,0X87,0XFF,0XFF,0X57,0XD5,0XFF,0XFF,0XFF,0XFF,0XFF,0X8D,0X3D,0XFF,
0XFF,0XFF,0XFF,0X87,0XFF,0X94,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X9D,0X5E,0XFF,
0XFF,0XFF,0XFF,0XE3,0XFE,0X00,0X00,0X00,0X15,0XFF,0XFF,0XFF,0XFF,0X96,0XDE,0XFF,
0XFF,0XFF,0XFF,0XE3,0XFA,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0X86,0X6E,0X7F,
0XFF,0XFF,0XFF,0XE3,0XF0,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0X96,0X67,0X7F,
0XFF,0XFF,0XFF,0XF3,0X80,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XC3,0X3F,0X3F,
0XFF,0XFF,0XFF,0XF2,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XD3,0X1F,0XBF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X40,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XCD,0X8F,0XBF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X40,0XFC,0X00,0X3F,0XFF,0XFF,0XFF,0XD1,0XBF,0X9F,
0XFF,0XFF,0XFF,0X90,0X00,0X00,0XC0,0XFF,0X10,0X3F,0XFF,0XFF,0XFF,0XC5,0XDF,0X9F,
0XFF,0XFF,0XFF,0X80,0X00,0X01,0XE0,0XFF,0X98,0X3F,0XFF,0XFF,0XFF,0XC8,0XDF,0XDF,
0XFF,0XFF,0XFE,0X00,0X00,0X03,0XE0,0XFF,0XCC,0X0F,0XFF,0XFF,0XFF,0XC2,0XCB,0XCF,
0XFF,0XFF,0XFD,0X00,0X00,0X07,0XE1,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XE6,0X6B,0XCF,
0XFF,0XFF,0XFC,0X00,0X04,0X0F,0XF1,0XFF,0XFC,0X07,0XFF,0XFF,0XFF,0XC8,0X6B,0XCF,
0XFF,0XFF,0XF8,0X00,0X0C,0X1F,0XF1,0XFF,0XC0,0X03,0XFF,0XFF,0XFF,0XE2,0X73,0XCF,
0XFF,0XFF,0XF8,0X00,0X1C,0X3F,0XF3,0XF8,0X00,0X03,0XFF,0XFF,0XFF,0XE4,0X37,0XCF,
0XFF,0XFF,0XF8,0X00,0X3C,0XFF,0XF3,0XC0,0X00,0X03,0XFF,0XFF,0XFF,0XE4,0XB7,0X9F,
0XFF,0XFF,0XF0,0X00,0X7D,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0XFF,0XF0,0XDB,0X3F,
0XFF,0XFF,0XF0,0X00,0XFF,0XF0,0XFF,0XE0,0X01,0X81,0XFF,0XFF,0XFF,0XF0,0XDA,0X3F,
0XFF,0XFF,0XF0,0X01,0XFC,0X00,0XFF,0XC0,0X0C,0X81,0XFF,0XFF,0XFF,0XFC,0XD8,0X7F,
0XFF,0XFF,0XE0,0X03,0XC0,0X00,0X7F,0XEB,0XDE,0X80,0X7F,0XFF,0XFF,0XFC,0XEC,0XFF,
0XFF,0XFF,0XF0,0X03,0XC0,0X00,0X78,0X19,0XFC,0X80,0XFF,0XFF,0XFF,0XFC,0XEC,0XFF,
0XFF,0XFF,0XF0,0X03,0XC0,0X00,0XF1,0X04,0XF9,0X80,0X3F,0XFF,0XFF,0XFD,0XED,0XFF,
0XFF,0XFF,0XF0,0X03,0XE0,0X06,0XE1,0X42,0X03,0XC0,0X0F,0XFF,0XFF,0XFD,0XF5,0XFF,
0XFF,0XFF,0XE0,0X03,0XE0,0XE7,0X63,0X11,0X0F,0XE0,0X07,0XFF,0XFF,0XFD,0XF6,0XFF,
0XFF,0XFF,0XF0,0X03,0XFD,0XFF,0X4C,0X6D,0XFF,0XF0,0X07,0XFF,0XFF,0XFD,0XF7,0XFF,
0XFF,0XFF,0XF0,0X01,0XF8,0XFE,0XC2,0X90,0XFF,0XF0,0X03,0XFF,0XFF,0XFD,0XF3,0XFF,
0XFF,0XFF,0XF0,0X01,0XFE,0XFC,0XCA,0X24,0X7F,0XF0,0X07,0XFF,0XFF,0XFD,0XF3,0XFF,
0XFF,0XFF,0XF0,0X01,0XFF,0X01,0XCA,0X4D,0X3F,0XF0,0X03,0XFF,0XFF,0XFD,0XFB,0XFF,
0XFF,0XFF,0XF0,0X00,0XFF,0X83,0XC4,0X82,0X1F,0X38,0X03,0XFF,0XFF,0XFD,0XF9,0XFF,
0XFF,0XFF,0XE0,0X00,0XFF,0XFF,0XD2,0X29,0X5C,0X38,0X37,0XFF,0XFF,0XFD,0XF9,0XFF,
0XFF,0XFF,0XF0,0X00,0XFF,0XFF,0X35,0XD3,0X40,0X38,0X37,0XFF,0XFF,0XFD,0XFA,0XFF,
0XFF,0XFF,0XF0,0X00,0XFF,0XFF,0X61,0X16,0X00,0X00,0X03,0XFF,0XFF,0XFD,0XFB,0X7F,
0XFF,0XFF,0XF8,0X00,0X7F,0XFF,0X0D,0X48,0X80,0X00,0X07,0XFF,0XFF,0XFD,0XB9,0X3F,
0XFF,0XFF,0XF8,0X00,0X73,0XFE,0X62,0X33,0X00,0X00,0X0F,0XFF,0XFF,0XFC,0X39,0X9F,
0XFF,0XFF,0XF8,0X00,0X3F,0XF0,0X0D,0X66,0X00,0X00,0X03,0XFF,0XFF,0XFE,0X39,0XDF,
0XFF,0XFF,0XFC,0X00,0X3C,0X00,0X0A,0X44,0X00,0X00,0X01,0XFF,0XFF,0XFE,0X39,0XCF,
0XFF,0XFF,0XF0,0X00,0X1C,0X00,0X01,0X58,0X00,0X00,0X00,0XFF,0XFF,0XFF,0X19,0XE7,
0XFF,0XFF,0XF1,0XC0,0X8E,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFE,0X6B,0XF7,
0XFF,0XFF,0XF7,0XE0,0XCE,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFE,0X6B,0XFF,
0XFF,0XFF,0XE7,0XE0,0X7C,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFC,0XE3,0XFF,
0XFF,0XFF,0XF6,0XE0,0X70,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFC,0XF3,0XFF,
0XFF,0XFF,0XE4,0X70,0X60,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XF9,0XF3,0XFF,
0XFF,0XFF,0XF4,0XB0,0X00,0X00,0X00,0X07,0XE0,0X00,0X00,0X3F,0XFF,0XF9,0XFB,0XFF,
0XFF,0XFF,0XF5,0X98,0X00,0X00,0X00,0X06,0X00,0X00,0X00,0X9F,0XFF,0XF3,0XFF,0XFF,
0XFF,0XFF,0XE4,0X80,0X00,0X00,0X03,0X0A,0X80,0X00,0X01,0XBF,0XFF,0XF7,0XFF,0XFF,
0XFF,0XFF,0XF4,0X90,0X00,0X00,0X02,0XB4,0X20,0X20,0X00,0X9F,0XFF,0XE7,0XFF,0XFF,
0XFF,0XFF,0XF6,0XB0,0X00,0X00,0X01,0X41,0XCC,0X17,0X00,0XDF,0XFF,0XE7,0XFF,0XFF,
0XFF,0XFF,0XF3,0X60,0X00,0X00,0X06,0X97,0X19,0X27,0X07,0XDF,0XFF,0XEF,0XFF,0XFF,
0XFF,0XFF,0XFB,0X80,0X00,0X00,0X09,0X50,0X7F,0XE7,0X07,0XCF,0XFF,0XCF,0XFF,0XF7,
0XFF,0XFF,0XFB,0X80,0X00,0X00,0X12,0X4F,0XFC,0X3B,0X03,0XCF,0XFF,0XDE,0XFF,0XEF,
0XFF,0XFF,0XF9,0X00,0X00,0X08,0X28,0X7F,0X83,0XFB,0X80,0XCF,0XFF,0XDC,0XFF,0X97,
0XFF,0XFF,0XFD,0XA6,0X00,0X18,0X27,0XF0,0X7F,0XFF,0X80,0X0F,0XFF,0X9D,0XFF,0X57,
0XFF,0XFF,0XFC,0XC6,0XF0,0X7A,0XBF,0X87,0XFF,0XFF,0X80,0X0F,0XFF,0X99,0XFF,0X2F,
0XFF,0XFF,0XFC,0X7C,0XFC,0XFC,0XF8,0X7F,0XFF,0X7F,0X80,0X27,0XFF,0XB1,0XFC,0XC7,
0XFF,0XFF,0XFE,0X1B,0XFF,0X79,0XC3,0XFF,0XFC,0X7F,0X81,0XE7,0XFF,0XA3,0XF9,0X9F,
0XFF,0XFF,0XFF,0X87,0XFF,0X37,0X1F,0XFF,0XC1,0XFF,0X80,0X77,0XFF,0X8B,0XF3,0XA7,
0XFF,0XFF,0XFF,0XAF,0XFF,0X9C,0XFF,0XFE,0X01,0XFF,0XC0,0X33,0XFF,0XD3,0XCE,0X2F,
0XFF,0XFF,0XFF,0X0F,0XFF,0XDB,0X7F,0X80,0X00,0XFF,0XE0,0X17,0XFF,0XF7,0XB9,0XAF,
0XFF,0XFF,0XFE,0X3B,0XFF,0XCE,0X7F,0X80,0X00,0XFF,0X80,0X01,0XFF,0XF7,0XA2,0X4F,
0XFF,0XFF,0XFC,0X73,0XFF,0XE7,0XFF,0XC0,0X00,0X78,0X00,0X00,0XFF,0XE7,0X6A,0X97,
0XFF,0XFF,0XFC,0XCF,0XFF,0XF7,0XFF,0XE0,0X00,0X60,0X00,0X00,0X7F,0XEE,0XAB,0X57,
0XFF,0XFF,0XFD,0X9D,0XFF,0XF3,0XFF,0XE0,0X00,0X00,0X00,0X00,0X7F,0XE8,0XDA,0X4F,
0XFF,0XFF,0XFC,0X3F,0XFF,0XB9,0XFF,0XE0,0X00,0X00,0X00,0X01,0X0F,0XEF,0XE2,0X97,
0XFF,0XFF,0XFE,0X7E,0XFF,0XFC,0XFF,0XE0,0X00,0X00,0X00,0X17,0XC3,0XE8,0X8D,0X37,
0XFF,0XFF,0XFC,0XFF,0X7B,0XFC,0X8F,0XC0,0X00,0X00,0X00,0X3F,0XF0,0XE3,0X52,0X4F,
0XFF,0XFF,0XF8,0XFF,0XFF,0XFE,0X06,0X00,0X00,0X00,0X00,0X0F,0XFC,0X2C,0X95,0X57,
0XFF,0XFF,0XF9,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0X09,0X52,0X4F,
0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XD2,0X96,0XCF,
0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XE5,0X20,0X17,
0XFF,0XFF,0XE7,0XFF,0XF7,0XDF,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XD9,0X5B,0X6F,
0XFF,0XFF,0XEF,0XFF,0XE7,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XC2,0X52,0X8F,
0XFF,0XFF,0XEF,0XFF,0XEF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X7F,0X9A,0XD2,0X37,
0XFF,0XFF,0XCF,0XFF,0X6F,0X7F,0X80,0X00,0X00,0X00,0X00,0X00,0X3F,0XA6,0X26,0XCF,
0XFF,0XFF,0XEF,0X7F,0XFB,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X1B,0XD9,0XA8,0X27,
0XFF,0XFF,0XC6,0X77,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X20,0X1F,0X16,0X2A,0XCF,
0XFF,0XFF,0XE0,0XFE,0XDE,0XFF,0X80,0X00,0X00,0X00,0X00,0X3F,0X7E,0XB0,0XAA,0XAF,
0XFF,0XFF,0XF4,0XF6,0XDD,0XF7,0XC0,0X00,0X00,0X00,0X00,0X3F,0XF9,0X6D,0X51,0X57,
0XFF,0XFF,0XFE,0XFE,0XBB,0XEF,0XC0,0X00,0X00,0X00,0X00,0X3F,0XE5,0X82,0X8A,0X2F,
0XFF,0XFF,0XFE,0XF6,0XBF,0XCF,0XC0,0X00,0X00,0X00,0X00,0X3F,0XCE,0X2C,0XAA,0XD7,
0XFF,0XFF,0XFE,0X75,0XEF,0X9F,0XC0,0X00,0X00,0X00,0X00,0X3F,0X99,0X69,0X8A,0X27,
0XFF,0XFF,0XFE,0X3B,0X6F,0X3F,0XC0,0X00,0X00,0X00,0X00,0X3E,0XBA,0X8A,0X34,0XCF,
0XFF,0XFF,0XFF,0X9B,0XDC,0X7F,0XE0,0X00,0X00,0X00,0X00,0X3F,0X62,0X6A,0XC9,0X2F,
0XFF,0XFF,0XFF,0XDB,0XB9,0XFF,0XE0,0X00,0X00,0X01,0X30,0X3C,0XD4,0X89,0X2A,0XA7,
0XFF,0XFF,0XFF,0XDF,0X33,0XFF,0XE0,0X00,0X00,0X01,0X9C,0X3E,0X92,0XA9,0X48,0XAF,
0XFF,0XFF,0XFF,0XCF,0X6F,0XC0,0X70,0X00,0X00,0X03,0XBF,0XFD,0XA5,0X4A,0X96,0X97,
0XFF,0XFF,0XFF,0XCF,0XDE,0X00,0X00,0X00,0X00,0X03,0X1F,0XF2,0XA8,0XB2,0X65,0X27,
0XFF,0XFF,0XFF,0XE7,0XD1,0XFF,0XE0,0X00,0X00,0X07,0XDF,0XDD,0X2B,0X25,0X48,0X6F,
0XFF,0XFF,0XFF,0XEF,0XA7,0X00,0X78,0X01,0X00,0X07,0XDF,0XF9,0XAA,0X65,0X55,0XC7,
0XFF,0XFF,0XFF,0XEF,0XCC,0X09,0X08,0X0F,0X80,0X0F,0X8F,0XFA,0X21,0X4A,0X8A,0X2F,
0XFF,0XFF,0XFF,0XE3,0X93,0XFF,0XE8,0X0F,0XE0,0X07,0XCF,0XF7,0X56,0X28,0X71,0X4F,
0XFF,0XFF,0XFF,0XF1,0XAF,0XCF,0XFC,0X8F,0XF8,0X0F,0XCF,0XEC,0X48,0XD5,0X86,0X57,
0XFF,0XFF,0XFF,0XFD,0X5F,0X0F,0XFE,0X7F,0XFC,0X0F,0XEF,0XE4,0XAB,0X25,0X14,0XCF,
0XFF,0XFF,0XFF,0XFC,0X1C,0X7F,0XFE,0X7F,0XFF,0X8F,0XC7,0XD9,0X94,0X49,0X69,0X17,
0XFF,0XFF,0XFF,0XFE,0XB3,0XFF,0XFF,0X3F,0XFF,0XFF,0XE7,0XE6,0X53,0XAA,0X54,0XEF,
0XFF,0XFF,0XFF,0XFE,0X2F,0XFB,0XFF,0X8F,0XFF,0XFF,0XE7,0XCA,0X94,0X24,0XA3,0X0F,
0XFF,0XFF,0XFF,0XFE,0X7F,0XD3,0XFF,0X87,0XFF,0XFF,0XF3,0XD5,0XA9,0XCC,0XA6,0X5F,
0XFF,0XFF,0XFF,0XFE,0X7F,0XBF,0XFF,0XC7,0XFF,0XFF,0XFB,0XEA,0X4A,0X11,0XA8,0XA7,
0XFF,0XFF,0XFF,0XFE,0XFE,0X77,0XDF,0XE7,0XFF,0XFF,0XF3,0XCA,0XA5,0X6A,0X16,0XAF,
0XFF,0XFF,0XFF,0XFE,0XFF,0XC7,0XFF,0XF3,0XFF,0XFF,0XF1,0XA9,0X55,0X4A,0XE4,0X87,
0XFF,0XFF,0XFF,0XFE,0XFF,0X9F,0XFF,0XF8,0XFF,0XFF,0XFF,0X49,0X12,0X49,0X15,0X5F,
0XFF,0XFF,0XFF,0XFE,0XFE,0X3F,0XFF,0XFD,0X7F,0XFF,0XF8,0XB3,0X65,0X52,0XA5,0X27,
0XFF,0XFF,0XFF,0XFE,0XFC,0XFB,0XBF,0XFC,0XFF,0XFF,0XFA,0X48,0X88,0X95,0X54,0X97,
0XFF,0XFF,0XFF,0XFC,0XF3,0XE3,0XFF,0XFE,0X1F,0XFF,0XF5,0X4A,0X9B,0X35,0X15,0X37,
0XFF,0XFF,0XFF,0XFC,0XCF,0X8F,0XFF,0XFF,0X3F,0XFF,0XE5,0X52,0X92,0XA1,0X30,0X67,
0XFF,0XFF,0XFF,0XFC,0X9F,0X3B,0XFB,0XFF,0X9F,0XFF,0XD8,0X95,0X64,0X4E,0X4B,0X8F,
0XFF,0XFF,0XFF,0XFC,0X7E,0XE7,0X8F,0XBF,0XC7,0XFF,0XC6,0XAA,0X5B,0XB1,0XA8,0X67,
0XFF,0XFF,0XFF,0XFC,0XFD,0XCE,0X3F,0XFF,0XE3,0XFF,0X94,0X92,0X92,0X25,0X2B,0X4F,
0XFF,0XFF,0XFF,0XFC,0XFF,0XB8,0XFF,0XFF,0XE1,0XFF,0X14,0X92,0X25,0X25,0X22,0X4F,
0XFF,0XFF,0XFF,0XFD,0XEE,0X73,0XFF,0XFF,0XF0,0XFE,0X65,0XB5,0X58,0X4A,0XCC,0XB7,
0XFF,0XFF,0XFF,0XFC,0XFF,0XC6,0X5F,0XFF,0XF8,0X7E,0X92,0X0A,0XA7,0XB1,0X31,0X0F,
0XFF,0XFF,0XFF,0XFC,0XF7,0X1D,0X9F,0XFD,0XFC,0X7D,0X54,0XB4,0X90,0X25,0X47,0X6F,
0XFF,0XFF,0XFF,0XFC,0XEC,0X73,0X3A,0XFF,0XFC,0X3C,0X51,0XA8,0X96,0XA5,0X2C,0X4F,
0XFF,0XFF,0XFF,0XFC,0XD0,0XCC,0XC0,0X6F,0XFE,0X19,0X96,0X0B,0XB2,0XAC,0XAB,0XFF,
0XFF,0XFF,0XFF,0XF9,0XC7,0XAA,0X8F,0XFF,0XFE,0X1A,0X49,0XE4,0X29,0X49,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFC,0X9F,0XBB,0XBF,0XFF,0XFF,0X12,0X92,0X15,0X42,0X53,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFD,0X3F,0X65,0X6F,0XFF,0XFF,0X82,0X96,0XD2,0X5A,0XC5,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0XFC,0XDB,0XBF,0XFE,0XFF,0XD6,0X69,0X14,0XA2,0X17,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0XFF,0X27,0XB7,0XBF,0XFF,0XC1,0X44,0XD2,0X9D,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XFC,0X7E,0XFD,0X7F,0XF7,0XED,0X4B,0X26,0XB3,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0XD9,0XF7,0XAB,0X7F,0XFF,0XE9,0X4A,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XF3,0XAE,0XFF,0XFF,0XFF,0XF2,0X15,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0XFE,0XBB,0XD7,0XF7,0XFF,0XE9,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0XFD,0XFB,0XBF,0XFF,0XFF,0XEB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFB,0XF7,0XAF,0XFF,0XFF,0XFF,0XEB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0XEF,0XFF,0XFF,0XFF,0XFF,0XD7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0X9D,0X7F,0XFF,0XFF,0XFF,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XAF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0XFD,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X7B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X77,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0X83,0X81,0XFF,0XFF,0XF0,0X70,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X07,0XFF,0XFE,0X01,0X00,0XFF,0XFF,0XC0,0X20,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X03,0XFF,0XFC,0X00,0X00,0X7F,0XFF,0X80,0X00,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0X01,0XFF,0XFC,0X00,0X00,0X3F,0XFF,0X00,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0XC1,0XFD,0XF8,0X10,0X10,0X3F,0XBF,0X02,0X03,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE1,0XE1,0XF0,0XF8,0X38,0X3C,0X3E,0X1F,0X0F,0X07,0X87,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE1,0XE0,0XF0,0XF8,0X7C,0X3E,0X1E,0X1F,0X0F,0X07,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE1,0XE0,0XF0,0X78,0X78,0X3C,0X3E,0X1E,0X0F,0X87,0X87,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE7,0XE1,0XF0,0XF8,0X7C,0X3C,0X1E,0X1F,0X0F,0X07,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0XF0,0XF8,0X78,0X3C,0X1E,0X1F,0X0F,0X07,0X87,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF1,0XF0,0XF8,0X7C,0X3C,0X3E,0X1F,0X0F,0X07,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0XF0,0XF8,0X78,0X3C,0X1E,0X1E,0X0F,0X8F,0X87,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0XF0,0X78,0X7C,0X3C,0X3E,0X1F,0X0F,0X07,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE1,0XF0,0XF8,0X78,0X3C,0X1E,0X1F,0X0F,0X87,0X87,0XE7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0XF0,0XF8,0X7C,0X3C,0X3E,0X1F,0X0F,0X07,0X83,0XC3,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0XF0,0XF8,0X78,0X3C,0X1E,0X1E,0X0F,0X87,0X87,0XC3,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0XF0,0X70,0X7C,0X7E,0X1E,0X0F,0X0F,0X8F,0X83,0XC3,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0XE0,0X20,0X7F,0XFE,0X08,0X0C,0X0F,0XDF,0XC1,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0XFF,0XFE,0X00,0X00,0X1F,0XFF,0XC0,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XE0,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFC,0X02,0X03,0XFF,0XFF,0X80,0X40,0X3F,0XFF,0XF0,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0F,0X07,0XFF,0XFF,0XC3,0XE0,0XFF,0XFF,0XFA,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
};