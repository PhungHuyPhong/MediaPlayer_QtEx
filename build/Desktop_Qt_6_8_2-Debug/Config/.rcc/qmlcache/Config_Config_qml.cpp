// /qt/qml/Config/Config.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qt_qml_Config_Config_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x42,0x0,0x0,0x0,0x2,0x8,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x80,0x8,0x0,0x0,0x30,0x61,0x38,0x31,
0x33,0x39,0x63,0x35,0x37,0x34,0x66,0x65,
0x31,0x35,0x30,0x61,0x62,0x61,0x39,0x32,
0x64,0x35,0x66,0x32,0x34,0x38,0x34,0x61,
0x38,0x66,0x33,0x66,0x64,0x62,0x37,0x37,
0x34,0x39,0x37,0x37,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xaa,0xba,0x7b,0xd8,
0x5,0x30,0xac,0xf8,0x5b,0xfc,0x7f,0xe2,
0x85,0x2a,0xf3,0xb9,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x27,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x58,0x3,0x0,0x0,
0x5,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x1,0x0,0x0,
0xf,0x0,0x0,0x0,0xc,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x48,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x7,0x0,0x0,
0x50,0x1,0x0,0x0,0xa8,0x1,0x0,0x0,
0x10,0x2,0x0,0x0,0x68,0x2,0x0,0x0,
0xc0,0x2,0x0,0x0,0x43,0x1,0x0,0x0,
0x30,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x53,0x1,0x0,0x0,0x60,0x1,0x0,0x0,
0x70,0x1,0x0,0x0,0x53,0x1,0x0,0x0,
0x60,0x1,0x0,0x0,0x70,0x1,0x0,0x0,
0x63,0x0,0x0,0x0,0x63,0x0,0x0,0x0,
0x63,0x0,0x0,0x0,0x43,0x1,0x0,0x0,
0x30,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xd,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x3c,0x1,
0x3c,0x2,0x18,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x9,0x0,0x0,0x0,
0xf,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x3,0x3c,0x4,
0x3c,0x5,0x18,0x7,0x12,0x18,0x6c,0x7,
0x4e,0xc,0x2e,0x6,0x3c,0x7,0x3c,0x8,
0x18,0x8,0x12,0x19,0x6c,0x8,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x10,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x9,0x50,0x4,
0x12,0x1a,0x4c,0x2,0x12,0x1b,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x11,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0xa,0x50,0x4,
0x12,0x1b,0x4c,0x2,0x12,0x1a,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x37,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x1,0x0,0x2,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x48,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0xff,0xff,0xff,0xff,0xd,0x0,0x0,0x0,
0x14,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x9,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x16,0x7,0x54,0x3,0x8,0x18,0x7,0x12,
0x0,0x18,0x9,0x1a,0x6,0xa,0x12,0x0,
0x18,0xb,0x2e,0xb,0x18,0xc,0x2e,0xc,
0x3c,0xd,0x3c,0xe,0x6c,0xc,0x50,0x8,
0x16,0x7,0x50,0x4,0x12,0x1c,0x4c,0x2,
0x12,0x1d,0x18,0xc,0x12,0x0,0x80,0xc,
0x80,0xb,0x80,0xa,0x80,0x9,0x2,0x0,
0xd0,0x3,0x0,0x0,0xd8,0x3,0x0,0x0,
0xf0,0x3,0x0,0x0,0x8,0x4,0x0,0x0,
0x18,0x4,0x0,0x0,0x28,0x4,0x0,0x0,
0x38,0x4,0x0,0x0,0x58,0x4,0x0,0x0,
0x98,0x4,0x0,0x0,0xc0,0x4,0x0,0x0,
0x0,0x5,0x0,0x0,0x10,0x5,0x0,0x0,
0x28,0x5,0x0,0x0,0x60,0x5,0x0,0x0,
0x88,0x5,0x0,0x0,0xc8,0x5,0x0,0x0,
0xf0,0x5,0x0,0x0,0x8,0x6,0x0,0x0,
0x20,0x6,0x0,0x0,0x38,0x6,0x0,0x0,
0x50,0x6,0x0,0x0,0x68,0x6,0x0,0x0,
0x78,0x6,0x0,0x0,0x90,0x6,0x0,0x0,
0xa0,0x6,0x0,0x0,0xb8,0x6,0x0,0x0,
0xc8,0x6,0x0,0x0,0xe0,0x6,0x0,0x0,
0xf8,0x6,0x0,0x0,0x10,0x7,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x4f,0x0,0x62,0x0,0x6a,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x54,0x0,0x68,0x0,
0x65,0x0,0x6d,0x0,0x65,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x4c,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x44,0x0,0x61,0x0,
0x72,0x0,0x6b,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x61,0x0,0x63,0x0,
0x74,0x0,0x69,0x0,0x76,0x0,0x65,0x0,
0x54,0x0,0x68,0x0,0x65,0x0,0x6d,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x61,0x0,0x63,0x0,0x74,0x0,
0x69,0x0,0x76,0x0,0x65,0x0,0x54,0x0,
0x68,0x0,0x65,0x0,0x6d,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x69,0x0,0x73,0x0,
0x4d,0x0,0x6f,0x0,0x62,0x0,0x69,0x0,
0x6c,0x0,0x65,0x0,0x54,0x0,0x61,0x0,
0x72,0x0,0x67,0x0,0x65,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x69,0x0,0x73,0x0,0x4d,0x0,
0x6f,0x0,0x62,0x0,0x69,0x0,0x6c,0x0,
0x65,0x0,0x54,0x0,0x61,0x0,0x72,0x0,
0x67,0x0,0x65,0x0,0x74,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6d,0x0,0x61,0x0,
0x69,0x0,0x6e,0x0,0x43,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6d,0x0,0x61,0x0,0x69,0x0,
0x6e,0x0,0x43,0x0,0x6f,0x0,0x6c,0x0,
0x6f,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x73,0x0,0x65,0x0,
0x63,0x0,0x6f,0x0,0x6e,0x0,0x64,0x0,
0x61,0x0,0x72,0x0,0x79,0x0,0x43,0x0,
0x6f,0x0,0x6c,0x0,0x6f,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x73,0x0,0x65,0x0,0x63,0x0,
0x6f,0x0,0x6e,0x0,0x64,0x0,0x61,0x0,
0x72,0x0,0x79,0x0,0x43,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x68,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x6c,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x43,0x0,
0x6f,0x0,0x6c,0x0,0x6f,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x34,0x0,
0x31,0x0,0x43,0x0,0x44,0x0,0x35,0x0,
0x32,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x69,0x0,0x63,0x0,
0x6f,0x0,0x6e,0x0,0x4e,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x65,0x0,0x4e,0x0,0x61,0x0,
0x6d,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x61,0x0,0x64,0x0,
0x64,0x0,0x53,0x0,0x75,0x0,0x66,0x0,
0x66,0x0,0x69,0x0,0x78,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x43,0x0,0x6f,0x0,
0x6e,0x0,0x66,0x0,0x69,0x0,0x67,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x70,0x0,0x6c,0x0,
0x61,0x0,0x74,0x0,0x66,0x0,0x6f,0x0,
0x72,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x6f,0x0,0x73,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x64,0x0,0x72,0x0,0x6f,0x0,0x69,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x69,0x0,0x6f,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x30,0x0,
0x39,0x0,0x31,0x0,0x30,0x0,0x32,0x0,
0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x46,0x0,
0x46,0x0,0x46,0x0,0x46,0x0,0x46,0x0,
0x46,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x5f,0x0,0x44,0x0,
0x61,0x0,0x72,0x0,0x6b,0x0,0x2e,0x0,
0x73,0x0,0x76,0x0,0x67,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x2e,0x0,0x73,0x0,
0x76,0x0,0x67,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x28,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x1,0x0,0x5,0x0,0x54,0x0,0x0,0x0,
0x58,0x0,0x0,0x0,0x94,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x94,0x0,0x0,0x0,
0x98,0x0,0x0,0x0,0x0,0x0,0x5,0x0,
0x98,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x1,0x0,0x0,0x7,0x0,0x10,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x2,0x0,0x0,0x20,
0xd,0x0,0x50,0x0,0x8,0x0,0x0,0x0,
0x3,0x0,0x0,0xa0,0xf,0x0,0x50,0x0,
0xb,0x0,0x0,0x0,0xa,0x0,0x0,0x80,
0x10,0x0,0x50,0x0,0xd,0x0,0x0,0x0,
0xa,0x0,0x0,0x80,0x11,0x0,0x50,0x0,
0xf,0x0,0x0,0x0,0xa,0x0,0x0,0x80,
0x12,0x0,0x50,0x0,0x10,0x1,0x0,0x0,
0xf,0x0,0x0,0x0,0x8,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x12,0x0,0xd0,0x1,0x12,0x0,0xe0,0x2,
0xd,0x0,0x0,0x0,0x8,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0xd0,0x1,0x11,0x0,0xe0,0x2,
0xb,0x0,0x0,0x0,0x8,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0xd0,0x1,0x10,0x0,0x90,0x2,
0x8,0x0,0x0,0x0,0x8,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0xc0,0x1,0xf,0x0,0xd0,0x2,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x20,0x1,0xd,0x0,0x0,0x2,
0x3,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x90,0x0,
0x5,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0xa,0x0,0x90,0x0,0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType::fromType<int>();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for activeTheme at line 13, column 5
int r2_0;
{
}
{
}
// generate_GetLookup
r2_0 = 1;
{
}
{
}
// generate_Ret
if (argv[0]) {
    *static_cast<int *>(argv[0]) = r2_0;
}
return;
}
 },{ 1, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType::fromType<bool>();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for isMobileTarget at line 15, column 5
QObject *r2_5;
QObject *r2_0;
QVariant r2_2;
QVariant r2_6;
QVariant r7_0;
QString r2_3;
QVariant r8_0;
bool r2_4;
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadSingletonLookup(3, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadSingletonLookup(3, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(4, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(4, r2_0, []() { static const auto t = QMetaType::fromName("QQmlPlatform*"); return t; }());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(6);
#endif
while (!aotContext->getObjectLookup(5, r2_1, &r2_2)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(6);
#endif
aotContext->initGetObjectLookup(5, r2_1, QMetaType::fromType<QVariant>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_StoreReg
r7_0 = std::move(r2_2);
{
}
// generate_LoadRuntimeString
r2_3 = QStringLiteral("android");
{
}
// generate_CmpStrictEqual
r2_4 = QJSPrimitiveValue(r2_3).strictlyEquals(aotContext->engine->fromVariant<QJSPrimitiveValue>(r7_0));
{
}
// generate_JumpTrue
if (r2_4) {
    goto label_0;
}
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
while (!aotContext->loadSingletonLookup(6, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
aotContext->initLoadSingletonLookup(6, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
while (!aotContext->getObjectLookup(7, r2_0, &r2_5)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
aotContext->initGetObjectLookup(7, r2_0, []() { static const auto t = QMetaType::fromName("QQmlPlatform*"); return t; }());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
while (!aotContext->getObjectLookup(8, r2_5, &r2_6)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
aotContext->initGetObjectLookup(8, r2_5, QMetaType::fromType<QVariant>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_StoreReg
r8_0 = std::move(r2_6);
{
}
// generate_LoadRuntimeString
r2_3 = QStringLiteral("ios");
{
}
// generate_CmpStrictEqual
r2_4 = QJSPrimitiveValue(r2_3).strictlyEquals(aotContext->engine->fromVariant<QJSPrimitiveValue>(r8_0));
{
}
label_0:;
{
}
// generate_Ret
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = r2_4;
}
return;
}
 },{ 2, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = []() { static const auto t = QMetaType::fromName("QColor"); return t; }();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for mainColor at line 16, column 5
bool r2_0;
QVariant r2_1;
// generate_LoadQmlContextPropertyLookup
{
int retrieved;
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(9, &retrieved)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(9, QMetaType::fromType<int>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    const QMetaType returnType = []() { static const auto t = QMetaType::fromName("QColor"); return t; }();
    returnType.destruct(argv[0]);
    returnType.construct(argv[0]);
 }
return;
}
}
r2_0 = bool(std::move(retrieved));
}
{
}
// generate_JumpFalse
if (!r2_0) {
    goto label_0;
}
{
}
// generate_LoadRuntimeString
r2_1 = [&](){ auto arg = QStringLiteral("#09102B"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 1, &arg); }();
{
}
// generate_Jump
{
    goto label_1;
}
label_0:;
// generate_LoadRuntimeString
r2_1 = [&](){ auto arg = QStringLiteral("#FFFFFF"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 1, &arg); }();
{
}
label_1:;
{
}
// generate_Ret
if (argv[0]) {
    if (!r2_1.isValid())
        aotContext->setReturnValueUndefined();
    const QMetaType returnType = r2_1.metaType();
    returnType.destruct(argv[0]);
    returnType.construct(argv[0], r2_1.data());
}
return;
}
 },{ 3, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = []() { static const auto t = QMetaType::fromName("QColor"); return t; }();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for secondaryColor at line 17, column 5
QVariant r2_1;
bool r2_0;
// generate_LoadQmlContextPropertyLookup
{
int retrieved;
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(10, &retrieved)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(10, QMetaType::fromType<int>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    const QMetaType returnType = []() { static const auto t = QMetaType::fromName("QColor"); return t; }();
    returnType.destruct(argv[0]);
    returnType.construct(argv[0]);
 }
return;
}
}
r2_0 = bool(std::move(retrieved));
}
{
}
// generate_JumpFalse
if (!r2_0) {
    goto label_0;
}
{
}
// generate_LoadRuntimeString
r2_1 = [&](){ auto arg = QStringLiteral("#FFFFFF"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 1, &arg); }();
{
}
// generate_Jump
{
    goto label_1;
}
label_0:;
// generate_LoadRuntimeString
r2_1 = [&](){ auto arg = QStringLiteral("#09102B"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 1, &arg); }();
{
}
label_1:;
{
}
// generate_Ret
if (argv[0]) {
    if (!r2_1.isValid())
        aotContext->setReturnValueUndefined();
    const QMetaType returnType = r2_1.metaType();
    returnType.destruct(argv[0]);
    returnType.construct(argv[0], r2_1.data());
}
return;
}
 },{ 0, 0, nullptr, nullptr }};
QT_WARNING_POP
}
}
