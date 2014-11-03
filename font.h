//font.h
//28.09.2014

#include <avr/pgmspace.h>

static const uint8_t PROGMEM font8x8[] =
{
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // space //32
0x00,0x00,0x00,0xF2,0xF2,0x00,0x00,0x00, // !
0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00, // "
0x28,0xFE,0xFE,0x28,0x28,0xFE,0xFE,0x28, // #
0x00,0x48,0x5C,0xD6,0xD6,0x74,0x24,0x00, // $
0x00,0xC6,0x66,0x30,0x18,0xCC,0xC6,0x00, // %
0x0A,0x4E,0xEE,0xB2,0xB2,0xFE,0x4C,0x00, // &
0x00,0x80,0xC0,0x60,0x20,0x00,0x00,0x00, // '
0x00,0x00,0x82,0xC6,0x7C,0x38,0x00,0x00, // (
0x00,0x00,0x38,0x7C,0xC6,0x82,0x00,0x00, // )
0x10,0x54,0x7C,0x38,0x38,0x7C,0x54,0x10, // *
0x00,0x10,0x10,0x7C,0x7C,0x10,0x10,0x00, // +
0x00,0x00,0x00,0x06,0x07,0x01,0x00,0x00, // ,
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x00, // -
0x00,0x00,0x00,0x06,0x06,0x00,0x00,0x00, // .
0x40,0x60,0x30,0x18,0x0C,0x06,0x02,0x00, // /
0x00,0x7C,0xFE,0xA2,0x92,0xFE,0x7C,0x00, // 0
0x00,0x02,0x02,0xFE,0xFE,0x22,0x02,0x00, // 1
0x00,0x62,0xF2,0x92,0x8A,0xCE,0x46,0x00, // 2
0x00,0x6C,0xFE,0x92,0x92,0xC6,0x44,0x00, // 3
0x08,0xFE,0xFE,0x68,0x28,0x18,0x18,0x00, // 4
0x00,0x9C,0xBE,0xA2,0xA2,0xE6,0xE4,0x00, // 5
0x00,0x4C,0xDE,0x92,0x92,0xFE,0x7C,0x00, // 6
0x00,0xC0,0xE0,0xBE,0x9E,0xC0,0xC0,0x00, // 7
0x00,0x6C,0xFE,0x92,0x92,0xFE,0x6C,0x00, // 8
0x00,0x7C,0xFE,0x92,0x92,0xF6,0x64,0x00, // 9
0x00,0x00,0x00,0x24,0x24,0x00,0x00,0x00, // :
0x00,0x00,0x00,0x26,0x27,0x01,0x00,0x00, // ;
0x00,0x82,0x82,0xC6,0x6C,0x38,0x10,0x00, // <
0x00,0x28,0x28,0x28,0x28,0x28,0x28,0x00, // =
0x00,0x10,0x38,0x6C,0xC6,0x82,0x82,0x00, // >
0x00,0x60,0xF0,0x9A,0x8A,0xC0,0x40,0x00, // ?
0x00,0x74,0xF2,0xB2,0x82,0xFE,0x7C,0x00, // @
0x00,0x3E,0x7E,0xD0,0xD0,0x7E,0x3E,0x00, // A
0x00,0x6C,0xFE,0x92,0x92,0xFE,0xFE,0x00, // B
0x00,0x44,0xC6,0x82,0x82,0xFE,0x7C,0x00, // C
0x00,0x38,0x7C,0xC6,0x82,0xFE,0xFE,0x00, // D
0x00,0x82,0x82,0x92,0x92,0xFE,0xFE,0x00, // E
0x00,0x80,0x80,0x90,0x90,0xFE,0xFE,0x00, // F
0x00,0x5C,0xDE,0x92,0x82,0xFE,0x7C,0x00, // G
0x00,0xFE,0xFE,0x10,0x10,0xFE,0xFE,0x00, // H
0x00,0x00,0x82,0xFE,0xFE,0x82,0x00,0x00, // I
0x00,0x80,0xFC,0xFE,0x82,0x06,0x04,0x00, // J
0x00,0x82,0xC6,0x6C,0x38,0xFE,0xFE,0x00, // K
0x00,0x02,0x02,0x02,0x02,0xFE,0xFE,0x00, // L
0xFE,0xFE,0x60,0x30,0x60,0xFE,0xFE,0x00, // M
0x00,0xFE,0xFE,0x38,0x70,0xFE,0xFE,0x00, // N
0x00,0x7C,0xFE,0x82,0x82,0xFE,0x7C,0x00, // O
0x00,0x60,0xF0,0x90,0x90,0xFE,0xFE,0x00, // P
0x00,0x7A,0xFE,0x86,0x84,0xFC,0x78,0x00, // Q
0x00,0x62,0xF6,0x9C,0x98,0xFE,0xFE,0x00, // R
0x00,0x4C,0xDE,0x92,0x92,0xF6,0x64,0x00, // S
0x00,0x80,0x80,0xFE,0xFE,0x80,0x80,0x00, // T
0x00,0xFC,0xFE,0x02,0x02,0xFE,0xFC,0x00, // U
0x00,0xF8,0xFC,0x06,0x06,0xFC,0xF8,0x00, // V
0xFE,0xFE,0x0C,0x18,0x0C,0xFE,0xFE,0x00, // W
0x00,0xC6,0xEE,0x38,0x38,0xEE,0xC6,0x00, // X
0x00,0xE0,0xF0,0x1E,0x1E,0xF0,0xE0,0x00, // Y
0x00,0xC2,0xE2,0xB2,0x9A,0x8E,0x86,0x00, // Z
0x00,0x00,0x82,0x82,0xFE,0xFE,0x00,0x00, // [
0x00,0x06,0x0C,0x18,0x30,0x60,0xC0,0x80, // backslash
0x00,0x00,0xFE,0xFE,0x82,0x82,0x00,0x00, // ]
0x00,0x10,0x30,0x60,0xC0,0x60,0x30,0x10, // ^
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01, // _
0x00,0x00,0x00,0x20,0xE0,0xC0,0x00,0x00, // `
0x00,0x1E,0x3E,0x2A,0x2A,0x2E,0x04,0x00, // a
0x00,0x0C,0x1E,0x12,0x12,0x7E,0x7E,0x00, // b
0x00,0x00,0x22,0x22,0x22,0x3E,0x1C,0x00, // c
0x00,0x7E,0x7E,0x12,0x12,0x1E,0x0C,0x00, // d
0x00,0x18,0x3A,0x2A,0x2A,0x3E,0x1C,0x00, // e
0x00,0x50,0x50,0x7E,0x3E,0x10,0x00,0x00, // f
0x00,0x3E,0x3F,0x25,0x25,0x3D,0x19,0x00, // g
0x00,0x0E,0x1E,0x10,0x10,0x7E,0x7E,0x00, // h
0x00,0x00,0x02,0x5E,0x5E,0x12,0x00,0x00, // i
0x00,0x5E,0x5F,0x01,0x01,0x01,0x00,0x00, // j
0x00,0x02,0x16,0x1C,0x08,0x7E,0x7E,0x00, // k
0x00,0x00,0x02,0x7E,0x7E,0x42,0x00,0x00, // l
0x1E,0x3E,0x38,0x1C,0x18,0x3E,0x3E,0x00, // m
0x00,0x1E,0x3E,0x20,0x20,0x3E,0x3E,0x00, // n
0x00,0x1C,0x3E,0x22,0x22,0x3E,0x1C,0x00, // o
0x00,0x18,0x3C,0x24,0x24,0x3F,0x3F,0x00, // p
0x00,0x3F,0x3F,0x24,0x24,0x3C,0x18,0x00, // q
0x00,0x10,0x30,0x20,0x20,0x3E,0x3E,0x00, // r
0x00,0x24,0x2E,0x2A,0x2A,0x3A,0x12,0x00, // s
0x00,0x22,0x22,0x7E,0x7C,0x20,0x20,0x00, // t
0x00,0x3E,0x3E,0x02,0x02,0x3E,0x3C,0x00, // u
0x00,0x38,0x3C,0x06,0x06,0x3C,0x38,0x00, // v
0x38,0x3E,0x0E,0x1C,0x0E,0x3E,0x38,0x00, // w
0x00,0x22,0x36,0x1C,0x1C,0x36,0x22,0x00, // x
0x00,0x3C,0x3E,0x07,0x05,0x3D,0x39,0x00, // y
0x00,0x22,0x32,0x3A,0x2E,0x26,0x22,0x00, // z
0x00,0x00,0x82,0x82,0xEE,0x7C,0x10,0x10, // {
0x00,0x00,0x00,0xEE,0xEE,0x00,0x00,0x00, // |
0x00,0x00,0x10,0x10,0x7C,0xEE,0x82,0x82, // }
0x00,0x80,0xC0,0x40,0xC0,0x80,0xC0,0x40, // ~
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // del

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 128
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 129
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 130
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 131
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 132
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 133
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 134
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 135
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 136
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 137
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 138
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 139
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 140
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 141
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 142
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 143
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 144
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 145
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 146
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 147
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 148
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 149
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 150
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 151
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 152
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 153
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 154
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 155
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 156
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 157
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 158
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 159

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 160
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 161
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 162
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 163
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 164
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 165
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 166
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 167
0x00,0xC2,0xD2,0x52,0xD2,0xFE,0x7E,0x00, // 168 Ё
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 169
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 170
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 171
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 172
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 173
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 174
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 175
0x00,0x00,0x00,0x60,0x90,0x90,0x60,0x00, // 176 °
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 177
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 178
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 179
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 180
0x00,0x3E,0x3E,0x02,0x02,0x3F,0x3F,0x00, // 181 µ
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 182
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 183
0x00,0x18,0xBA,0x2A,0x2A,0xBE,0x1C,0x00, // 184 ё
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 185
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 186
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 187
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 188
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 189
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 190
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 191

0x00,0xFE,0xFE,0x88,0xC8,0x7E,0x3E,0x00, // 192 А
0x00,0x0C,0x9E,0x92,0x92,0xFE,0xFE,0x00, // 193 Б
0x00,0x6C,0xFE,0x92,0x92,0xFE,0xFE,0x00, // 194 В
0x00,0x80,0x80,0x80,0x80,0xFE,0xFE,0x00, // 195 Г
0x00,0x03,0x7F,0xFE,0x82,0xFE,0x7F,0x03, // 196 Д
0x00,0x82,0x92,0x92,0x92,0xFE,0xFE,0x00, // 197 Е
0xC6,0xEE,0x38,0xFE,0xFE,0x38,0xEE,0xC6, // 198 Ж
0x00,0x6C,0xFE,0x92,0x92,0xC6,0x44,0x00, // 199 З
0x00,0xFE,0xFE,0x30,0x18,0xFE,0xFE,0x00, // 200 И
0x00,0x7E,0xFE,0xB0,0x98,0xFE,0x7E,0x00, // 201 Й
0x00,0x82,0xC6,0x6C,0x38,0xFE,0xFE,0x00, // 202 К
0x00,0xFE,0xFE,0x80,0xC0,0x7E,0x3E,0x00, // 203 Л
0x00,0xFE,0xFE,0x70,0x38,0x70,0xFE,0xFE, // 204 М
0x00,0xFE,0xFE,0x10,0x10,0xFE,0xFE,0x00, // 205 Н
0x00,0x7C,0xFE,0x82,0x82,0xFE,0x7C,0x00, // 206 О
0x00,0xFE,0xFE,0x80,0x80,0xFE,0xFE,0x00, // 207 П
0x00,0x70,0xF8,0x88,0x88,0xFE,0xFE,0x00, // 208 Р
0x00,0x44,0xC6,0x82,0x82,0xFE,0x7C,0x00, // 209 С
0x00,0x80,0x80,0xFE,0xFE,0x80,0x80,0x00, // 210 Т
0x00,0xFC,0xFE,0x12,0x12,0xF6,0xE4,0x00, // 211 У
0x70,0xF8,0x88,0xFE,0xFE,0x88,0xF8,0x70, // 212 Ф
0x00,0xC6,0xEE,0x38,0x38,0xEE,0xC6,0x00, // 213 Х
0x03,0xFF,0xFE,0x02,0x02,0xFE,0xFE,0x00, // 214 Ц
0x00,0xFE,0xFE,0x10,0x10,0xF0,0xE0,0x00, // 215 Ч
0xFE,0xFE,0x02,0xFE,0xFE,0x02,0xFE,0xFE, // 216 Ш
0xFF,0xFF,0x02,0xFE,0xFE,0x02,0xFE,0xFE, // 217 Щ
0x00,0x0C,0x1E,0x12,0x12,0xFE,0xFE,0x80, // 218 Ъ
0x00,0xFE,0xFE,0x0C,0x1E,0x12,0xFE,0xFE, // 219 Ы
0x00,0x0C,0x1E,0x12,0x12,0xFE,0xFE,0x00, // 220 Ь
0x00,0x38,0x7C,0xD6,0x92,0x92,0x82,0x44, // 221 Э
0x7C,0xFE,0x82,0xFE,0x7C,0x10,0xFE,0xFE, // 222 Ю
0x00,0xFE,0xFE,0x88,0x8C,0xFE,0x72,0x00, // 223 Я
0x00,0x02,0x1E,0x3C,0x2A,0x2A,0x2E,0x04, // 224 а
0x00,0x0C,0x5E,0x52,0x52,0x7E,0x2C,0x00, // 225 б
0x00,0x14,0x3E,0x2A,0x2A,0x3E,0x3E,0x00, // 226 в
0x00,0x20,0x20,0x20,0x20,0x3E,0x3E,0x00, // 227 г
0x00,0x03,0x3F,0x3E,0x22,0x3E,0x1F,0x03, // 228 д
0x00,0x18,0x3A,0x2A,0x2A,0x3E,0x1C,0x00, // 229 е
0x22,0x36,0x1C,0x3E,0x3E,0x1C,0x36,0x22, // 230 ж
0x00,0x14,0x3E,0x2A,0x22,0x36,0x14,0x00, // 231 з
0x00,0x3E,0x3E,0x18,0x0C,0x3E,0x3E,0x00, // 232 и
0x00,0x3E,0x3E,0x58,0x4C,0x3E,0x3E,0x00, // 233 й
0x00,0x22,0x36,0x1C,0x08,0x3E,0x3E,0x00, // 234 к
0x00,0x3E,0x3E,0x20,0x30,0x1E,0x0E,0x00, // 235 л
0x00,0x3E,0x3E,0x18,0x1C,0x18,0x3E,0x3E, // 236 м
0x00,0x3E,0x3E,0x08,0x08,0x3E,0x3E,0x00, // 237 н
0x00,0x1C,0x3E,0x22,0x22,0x3E,0x1C,0x00, // 238 о
0x00,0x3E,0x3E,0x20,0x20,0x3E,0x3E,0x00, // 239 п
0x00,0x18,0x3C,0x24,0x24,0x3E,0x3E,0x00, // 240 р
0x00,0x14,0x36,0x22,0x22,0x3E,0x1C,0x00, // 241 с
0x00,0x20,0x20,0x3E,0x3E,0x20,0x20,0x00, // 242 т
0x00,0x3C,0x3E,0x0A,0x0A,0x3A,0x30,0x00, // 243 у
0x18,0x3C,0x24,0x3E,0x3E,0x24,0x3C,0x18, // 244 ф
0x00,0x22,0x36,0x1C,0x1C,0x36,0x22,0x00, // 245 х
0x03,0x3F,0x3E,0x02,0x02,0x3E,0x3E,0x00, // 246 ц
0x00,0x3E,0x3E,0x08,0x08,0x38,0x30,0x00, // 247 ч
0x3E,0x3E,0x02,0x3E,0x3E,0x02,0x3E,0x3E, // 248 ш
0x3F,0x3F,0x02,0x3E,0x3E,0x02,0x3E,0x3E, // 249 щ
0x00,0x04,0x0E,0x0A,0x0A,0x3E,0x3E,0x20, // 250 ъ
0x00,0x3E,0x3E,0x04,0x0E,0x0A,0x3E,0x3E, // 251 ы
0x00,0x04,0x0E,0x0A,0x0A,0x3E,0x3E,0x00, // 252 ь
0x00,0x1C,0x3E,0x2A,0x2A,0x2A,0x22,0x00, // 253 э
0x1C,0x3E,0x22,0x3E,0x1C,0x08,0x3E,0x3E, // 254 ю
0x00,0x3E,0x3E,0x28,0x2C,0x3E,0x12,0x00	 // 255 я
};