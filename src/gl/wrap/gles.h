#ifndef USE_ES2
#include "../gl.h"

#ifndef GLESWRAP_H
#define GLESWRAP_H

typedef struct {
    int format;
    void *func;
    void *args;
} UnknownCall;

enum FORMAT {
    FORMAT_void_GLenum,
    FORMAT_void_GLenum_GLclampf,
    FORMAT_void_GLenum_GLclampx,
    FORMAT_void_GLenum_GLuint,
    FORMAT_void_GLenum_GLenum,
    FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum,
    FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__,
    FORMAT_void_GLbitfield,
    FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf,
    FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx,
    FORMAT_void_GLclampf,
    FORMAT_void_GLclampx,
    FORMAT_void_GLint,
    FORMAT_void_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_const_GLfixed___GENPT__,
    FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte,
    FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean,
    FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLsizei_const_GLuint___GENPT__,
    FORMAT_void_GLboolean,
    FORMAT_void_GLclampf_GLclampf,
    FORMAT_void_GLclampx_GLclampx,
    FORMAT_void_GLenum_GLint_GLsizei,
    FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__,
    FORMAT_void,
    FORMAT_void_GLenum_GLfloat,
    FORMAT_void_GLenum_GLfixed,
    FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLsizei_GLuint___GENPT__,
    FORMAT_void_GLenum_GLboolean___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLfixed___GENPT__,
    FORMAT_GLenum,
    FORMAT_void_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfixed___GENPT__,
    FORMAT_void_GLenum_GLvoid___GENPT____GENPT__,
    FORMAT_const_GLubyte___GENPT___GLenum,
    FORMAT_GLboolean_GLuint,
    FORMAT_GLboolean_GLenum,
    FORMAT_void_GLenum_GLenum_GLfloat,
    FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfixed,
    FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__,
    FORMAT_void_GLfloat,
    FORMAT_void_GLfixed,
    FORMAT_void_const_GLfloat___GENPT__,
    FORMAT_void_const_GLfixed___GENPT__,
    FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint,
    FORMAT_void_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__,
    FORMAT_void_GLclampf_GLboolean,
    FORMAT_void_GLclampx_GLboolean,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLenum_GLint_GLuint,
    FORMAT_void_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLenum_GLint,
    FORMAT_void_GLenum_GLenum_const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__,
};

typedef void (*FUNC_void_GLenum)(GLenum texture);
typedef struct {
    GLenum a1;
} ARGS_void_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum func;
    ARGS_void_GLenum args;
} PACKED_void_GLenum;
typedef void (*FUNC_void_GLenum_GLclampf)(GLenum func, GLclampf ref);
typedef struct {
    GLenum a1;
    GLclampf a2;
} ARGS_void_GLenum_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLenum_GLclampf func;
    ARGS_void_GLenum_GLclampf args;
} PACKED_void_GLenum_GLclampf;
typedef void (*FUNC_void_GLenum_GLclampx)(GLenum func, GLclampx ref);
typedef struct {
    GLenum a1;
    GLclampx a2;
} ARGS_void_GLenum_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLenum_GLclampx func;
    ARGS_void_GLenum_GLclampx args;
} PACKED_void_GLenum_GLclampx;
typedef void (*FUNC_void_GLenum_GLuint)(GLenum target, GLuint buffer);
typedef struct {
    GLenum a1;
    GLuint a2;
} ARGS_void_GLenum_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLuint func;
    ARGS_void_GLenum_GLuint args;
} PACKED_void_GLenum_GLuint;
typedef void (*FUNC_void_GLenum_GLenum)(GLenum sfactor, GLenum dfactor);
typedef struct {
    GLenum a1;
    GLenum a2;
} ARGS_void_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum func;
    ARGS_void_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum)(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage);
typedef struct {
    GLenum a1;
    GLsizeiptr a2;
    const GLvoid * a3;
    GLenum a4;
} ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum func;
    ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args;
} PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef void (*FUNC_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLintptr a2;
    GLsizeiptr a3;
    const GLvoid * a4;
} ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLbitfield)(GLbitfield mask);
typedef struct {
    GLbitfield a1;
} ARGS_void_GLbitfield;
typedef struct {
    int format;
    FUNC_void_GLbitfield func;
    ARGS_void_GLbitfield args;
} PACKED_void_GLbitfield;
typedef void (*FUNC_void_GLclampf_GLclampf_GLclampf_GLclampf)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef struct {
    GLclampf a1;
    GLclampf a2;
    GLclampf a3;
    GLclampf a4;
} ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLclampf_GLclampf_GLclampf func;
    ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef void (*FUNC_void_GLclampx_GLclampx_GLclampx_GLclampx)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef struct {
    GLclampx a1;
    GLclampx a2;
    GLclampx a3;
    GLclampx a4;
} ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLclampx_GLclampx_GLclampx func;
    ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx args;
} PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx;
typedef void (*FUNC_void_GLclampf)(GLclampf depth);
typedef struct {
    GLclampf a1;
} ARGS_void_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf func;
    ARGS_void_GLclampf args;
} PACKED_void_GLclampf;
typedef void (*FUNC_void_GLclampx)(GLclampx depth);
typedef struct {
    GLclampx a1;
} ARGS_void_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx func;
    ARGS_void_GLclampx args;
} PACKED_void_GLclampx;
typedef void (*FUNC_void_GLint)(GLint s);
typedef struct {
    GLint a1;
} ARGS_void_GLint;
typedef struct {
    int format;
    FUNC_void_GLint func;
    ARGS_void_GLint args;
} PACKED_void_GLint;
typedef void (*FUNC_void_GLenum_const_GLfloat___GENPT__)(GLenum plane, const GLfloat * equation);
typedef struct {
    GLenum a1;
    const GLfloat * a2;
} ARGS_void_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_const_GLfloat___GENPT__ func;
    ARGS_void_GLenum_const_GLfloat___GENPT__ args;
} PACKED_void_GLenum_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_const_GLfixed___GENPT__)(GLenum plane, const GLfixed * equation);
typedef struct {
    GLenum a1;
    const GLfixed * a2;
} ARGS_void_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_const_GLfixed___GENPT__ func;
    ARGS_void_GLenum_const_GLfixed___GENPT__ args;
} PACKED_void_GLenum_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLubyte_GLubyte_GLubyte_GLubyte)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef struct {
    GLubyte a1;
    GLubyte a2;
    GLubyte a3;
    GLubyte a4;
} ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte;
typedef struct {
    int format;
    FUNC_void_GLubyte_GLubyte_GLubyte_GLubyte func;
    ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte args;
} PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
} ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed func;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLboolean_GLboolean_GLboolean_GLboolean)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef struct {
    GLboolean a1;
    GLboolean a2;
    GLboolean a3;
    GLboolean a4;
} ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLboolean_GLboolean_GLboolean_GLboolean func;
    ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args;
} PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef void (*FUNC_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLint a1;
    GLenum a2;
    GLsizei a3;
    const GLvoid * a4;
} ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLint a2;
    GLenum a3;
    GLsizei a4;
    GLsizei a5;
    GLint a6;
    GLsizei a7;
    const GLvoid * a8;
} ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLsizei a5;
    GLsizei a6;
    GLenum a7;
    GLsizei a8;
    const GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef struct {
    GLenum a1;
    GLint a2;
    GLenum a3;
    GLint a4;
    GLint a5;
    GLsizei a6;
    GLsizei a7;
    GLint a8;
} ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint func;
    ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args;
} PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLint a5;
    GLint a6;
    GLsizei a7;
    GLsizei a8;
} ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT__)(GLsizei n, const GLuint * buffers);
typedef struct {
    GLsizei a1;
    const GLuint * a2;
} ARGS_void_GLsizei_const_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLsizei_const_GLuint___GENPT__ func;
    ARGS_void_GLsizei_const_GLuint___GENPT__ args;
} PACKED_void_GLsizei_const_GLuint___GENPT__;
typedef void (*FUNC_void_GLboolean)(GLboolean flag);
typedef struct {
    GLboolean a1;
} ARGS_void_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLboolean func;
    ARGS_void_GLboolean args;
} PACKED_void_GLboolean;
typedef void (*FUNC_void_GLclampf_GLclampf)(GLclampf near, GLclampf far);
typedef struct {
    GLclampf a1;
    GLclampf a2;
} ARGS_void_GLclampf_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLclampf func;
    ARGS_void_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf;
typedef void (*FUNC_void_GLclampx_GLclampx)(GLclampx near, GLclampx far);
typedef struct {
    GLclampx a1;
    GLclampx a2;
} ARGS_void_GLclampx_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLclampx func;
    ARGS_void_GLclampx_GLclampx args;
} PACKED_void_GLclampx_GLclampx;
typedef void (*FUNC_void_GLenum_GLint_GLsizei)(GLenum mode, GLint first, GLsizei count);
typedef struct {
    GLenum a1;
    GLint a2;
    GLsizei a3;
} ARGS_void_GLenum_GLint_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLsizei func;
    ARGS_void_GLenum_GLint_GLsizei args;
} PACKED_void_GLenum_GLint_GLsizei;
typedef void (*FUNC_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
typedef struct {
    GLenum a1;
    GLsizei a2;
    GLenum a3;
    const GLvoid * a4;
} ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void)();
typedef struct {
} ARGS_void;
typedef struct {
    int format;
    FUNC_void func;
    ARGS_void args;
} PACKED_void;
typedef void (*FUNC_void_GLenum_GLfloat)(GLenum pname, GLfloat param);
typedef struct {
    GLenum a1;
    GLfloat a2;
} ARGS_void_GLenum_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat func;
    ARGS_void_GLenum_GLfloat args;
} PACKED_void_GLenum_GLfloat;
typedef void (*FUNC_void_GLenum_GLfixed)(GLenum pname, GLfixed param);
typedef struct {
    GLenum a1;
    GLfixed a2;
} ARGS_void_GLenum_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed func;
    ARGS_void_GLenum_GLfixed args;
} PACKED_void_GLenum_GLfixed;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat)(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
    GLfloat a6;
} ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
    GLfixed a5;
    GLfixed a6;
} ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed func;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLsizei_GLuint___GENPT__)(GLsizei n, GLuint * buffers);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLsizei_GLuint___GENPT__ func;
    ARGS_void_GLsizei_GLuint___GENPT__ args;
} PACKED_void_GLsizei_GLuint___GENPT__;
typedef void (*FUNC_void_GLenum_GLboolean___GENPT__)(GLenum pname, GLboolean * params);
typedef struct {
    GLenum a1;
    GLboolean * a2;
} ARGS_void_GLenum_GLboolean___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLboolean___GENPT__ func;
    ARGS_void_GLenum_GLboolean___GENPT__ args;
} PACKED_void_GLenum_GLboolean___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint___GENPT__)(GLenum target, GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint___GENPT__ func;
    ARGS_void_GLenum_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLfloat___GENPT__)(GLenum plane, GLfloat * equation);
typedef struct {
    GLenum a1;
    GLfloat * a2;
} ARGS_void_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat___GENPT__ func;
    ARGS_void_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLfixed___GENPT__)(GLenum plane, GLfixed * equation);
typedef struct {
    GLenum a1;
    GLfixed * a2;
} ARGS_void_GLenum_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed___GENPT__ func;
    ARGS_void_GLenum_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLfixed___GENPT__;
typedef GLenum (*FUNC_GLenum)();
typedef struct {
} ARGS_GLenum;
typedef struct {
    int format;
    FUNC_GLenum func;
    ARGS_GLenum args;
} PACKED_GLenum;
typedef void (*FUNC_void_GLenum_GLint___GENPT__)(GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLint * a2;
} ARGS_void_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint___GENPT__ func;
    ARGS_void_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat___GENPT__)(GLenum light, GLenum pname, GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLenum_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfloat___GENPT__ func;
    ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfixed___GENPT__)(GLenum light, GLenum pname, GLfixed * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfixed * a3;
} ARGS_void_GLenum_GLenum_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfixed___GENPT__ func;
    ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLfixed___GENPT__;
typedef void (*FUNC_void_GLenum_GLvoid___GENPT____GENPT__)(GLenum pname, GLvoid ** params);
typedef struct {
    GLenum a1;
    GLvoid ** a2;
} ARGS_void_GLenum_GLvoid___GENPT____GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLvoid___GENPT____GENPT__ func;
    ARGS_void_GLenum_GLvoid___GENPT____GENPT__ args;
} PACKED_void_GLenum_GLvoid___GENPT____GENPT__;
typedef const GLubyte * (*FUNC_const_GLubyte___GENPT___GLenum)(GLenum name);
typedef struct {
    GLenum a1;
} ARGS_const_GLubyte___GENPT___GLenum;
typedef struct {
    int format;
    FUNC_const_GLubyte___GENPT___GLenum func;
    ARGS_const_GLubyte___GENPT___GLenum args;
} PACKED_const_GLubyte___GENPT___GLenum;
typedef GLboolean (*FUNC_GLboolean_GLuint)(GLuint buffer);
typedef struct {
    GLuint a1;
} ARGS_GLboolean_GLuint;
typedef struct {
    int format;
    FUNC_GLboolean_GLuint func;
    ARGS_GLboolean_GLuint args;
} PACKED_GLboolean_GLuint;
typedef GLboolean (*FUNC_GLboolean_GLenum)(GLenum cap);
typedef struct {
    GLenum a1;
} ARGS_GLboolean_GLenum;
typedef struct {
    int format;
    FUNC_GLboolean_GLenum func;
    ARGS_GLboolean_GLenum args;
} PACKED_GLboolean_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat)(GLenum light, GLenum pname, GLfloat param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat a3;
} ARGS_void_GLenum_GLenum_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfloat func;
    ARGS_void_GLenum_GLenum_GLfloat args;
} PACKED_void_GLenum_GLenum_GLfloat;
typedef void (*FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__)(GLenum light, GLenum pname, const GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    const GLfloat * a3;
} ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__ func;
    ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfixed)(GLenum light, GLenum pname, GLfixed param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfixed a3;
} ARGS_void_GLenum_GLenum_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfixed func;
    ARGS_void_GLenum_GLenum_GLfixed args;
} PACKED_void_GLenum_GLenum_GLfixed;
typedef void (*FUNC_void_GLenum_GLenum_const_GLfixed___GENPT__)(GLenum light, GLenum pname, const GLfixed * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    const GLfixed * a3;
} ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLfixed___GENPT__ func;
    ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLfloat)(GLfloat width);
typedef struct {
    GLfloat a1;
} ARGS_void_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat func;
    ARGS_void_GLfloat args;
} PACKED_void_GLfloat;
typedef void (*FUNC_void_GLfixed)(GLfixed width);
typedef struct {
    GLfixed a1;
} ARGS_void_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed func;
    ARGS_void_GLfixed args;
} PACKED_void_GLfixed;
typedef void (*FUNC_void_const_GLfloat___GENPT__)(const GLfloat * m);
typedef struct {
    const GLfloat * a1;
} ARGS_void_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_const_GLfloat___GENPT__ func;
    ARGS_void_const_GLfloat___GENPT__ args;
} PACKED_void_const_GLfloat___GENPT__;
typedef void (*FUNC_void_const_GLfixed___GENPT__)(const GLfixed * m);
typedef struct {
    const GLfixed * a1;
} ARGS_void_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_const_GLfixed___GENPT__ func;
    ARGS_void_const_GLfixed___GENPT__ args;
} PACKED_void_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef struct {
    GLenum a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed)(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef struct {
    GLenum a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
    GLfixed a5;
} ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed func;
    ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
} ARGS_void_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed func;
    ARGS_void_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLenum_GLsizei_const_GLvoid___GENPT__)(GLenum type, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLenum a1;
    GLsizei a2;
    const GLvoid * a3;
} ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint)(GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLint a2;
} ARGS_void_GLenum_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint func;
    ARGS_void_GLenum_GLint args;
} PACKED_void_GLenum_GLint;
typedef void (*FUNC_void_GLfloat_GLfloat)(GLfloat factor, GLfloat units);
typedef struct {
    GLfloat a1;
    GLfloat a2;
} ARGS_void_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat func;
    ARGS_void_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed)(GLfixed factor, GLfixed units);
typedef struct {
    GLfixed a1;
    GLfixed a2;
} ARGS_void_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed func;
    ARGS_void_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed;
typedef void (*FUNC_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
typedef struct {
    GLint a1;
    GLint a2;
    GLsizei a3;
    GLsizei a4;
    GLenum a5;
    GLenum a6;
    GLvoid * a7;
} ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ func;
    ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef void (*FUNC_void_GLclampf_GLboolean)(GLclampf value, GLboolean invert);
typedef struct {
    GLclampf a1;
    GLboolean a2;
} ARGS_void_GLclampf_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLboolean func;
    ARGS_void_GLclampf_GLboolean args;
} PACKED_void_GLclampf_GLboolean;
typedef void (*FUNC_void_GLclampx_GLboolean)(GLclampx value, GLboolean invert);
typedef struct {
    GLclampx a1;
    GLboolean a2;
} ARGS_void_GLclampx_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLboolean func;
    ARGS_void_GLclampx_GLboolean args;
} PACKED_void_GLclampx_GLboolean;
typedef void (*FUNC_void_GLint_GLint_GLsizei_GLsizei)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef struct {
    GLint a1;
    GLint a2;
    GLsizei a3;
    GLsizei a4;
} ARGS_void_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLsizei_GLsizei func;
    ARGS_void_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei;
typedef void (*FUNC_void_GLenum_GLint_GLuint)(GLenum func, GLint ref, GLuint mask);
typedef struct {
    GLenum a1;
    GLint a2;
    GLuint a3;
} ARGS_void_GLenum_GLint_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLuint func;
    ARGS_void_GLenum_GLint_GLuint args;
} PACKED_void_GLenum_GLint_GLuint;
typedef void (*FUNC_void_GLuint)(GLuint mask);
typedef struct {
    GLuint a1;
} ARGS_void_GLuint;
typedef struct {
    int format;
    FUNC_void_GLuint func;
    ARGS_void_GLuint args;
} PACKED_void_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLenum)(GLenum fail, GLenum zfail, GLenum zpass);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
} ARGS_void_GLenum_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum func;
    ARGS_void_GLenum_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLint)(GLenum target, GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint a3;
} ARGS_void_GLenum_GLenum_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint func;
    ARGS_void_GLenum_GLenum_GLint args;
} PACKED_void_GLenum_GLenum_GLint;
typedef void (*FUNC_void_GLenum_GLenum_const_GLint___GENPT__)(GLenum target, GLenum pname, const GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    const GLint * a3;
} ARGS_void_GLenum_GLenum_const_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLint___GENPT__ func;
    ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLsizei a4;
    GLsizei a5;
    GLint a6;
    GLenum a7;
    GLenum a8;
    const GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLsizei a5;
    GLsizei a6;
    GLenum a7;
    GLenum a8;
    const GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;

extern void glPushCall(void *data);
void glPackedCall(const UnknownCall *packed);

#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_PACKED PACKED_void_GLenum
#define glActiveTexture_FORMAT FORMAT_void_GLenum
#define glAlphaFunc_RETURN void
#define glAlphaFunc_ARG_NAMES func, ref
#define glAlphaFunc_ARG_EXPAND GLenum func, GLclampf ref
#define glAlphaFunc_PACKED PACKED_void_GLenum_GLclampf
#define glAlphaFunc_FORMAT FORMAT_void_GLenum_GLclampf
#define glAlphaFuncx_RETURN void
#define glAlphaFuncx_ARG_NAMES func, ref
#define glAlphaFuncx_ARG_EXPAND GLenum func, GLclampx ref
#define glAlphaFuncx_PACKED PACKED_void_GLenum_GLclampx
#define glAlphaFuncx_FORMAT FORMAT_void_GLenum_GLclampx
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindBuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_PACKED PACKED_void_GLenum_GLuint
#define glBindTexture_FORMAT FORMAT_void_GLenum_GLuint
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_PACKED PACKED_void_GLenum_GLenum
#define glBlendFunc_FORMAT FORMAT_void_GLenum_GLenum
#define glBufferData_RETURN void
#define glBufferData_ARG_NAMES target, size, data, usage
#define glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define glBufferData_PACKED PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferData_FORMAT FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferSubData_RETURN void
#define glBufferSubData_ARG_NAMES target, offset, size, data
#define glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define glBufferSubData_PACKED PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glBufferSubData_FORMAT FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glClear_RETURN void
#define glClear_ARG_NAMES mask
#define glClear_ARG_EXPAND GLbitfield mask
#define glClear_PACKED PACKED_void_GLbitfield
#define glClear_FORMAT FORMAT_void_GLbitfield
#define glClearColor_RETURN void
#define glClearColor_ARG_NAMES red, green, blue, alpha
#define glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glClearColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColorx_RETURN void
#define glClearColorx_ARG_NAMES red, green, blue, alpha
#define glClearColorx_ARG_EXPAND GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha
#define glClearColorx_PACKED PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx
#define glClearColorx_FORMAT FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_PACKED PACKED_void_GLclampf
#define glClearDepthf_FORMAT FORMAT_void_GLclampf
#define glClearDepthx_RETURN void
#define glClearDepthx_ARG_NAMES depth
#define glClearDepthx_ARG_EXPAND GLclampx depth
#define glClearDepthx_PACKED PACKED_void_GLclampx
#define glClearDepthx_FORMAT FORMAT_void_GLclampx
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_PACKED PACKED_void_GLint
#define glClearStencil_FORMAT FORMAT_void_GLint
#define glClientActiveTexture_RETURN void
#define glClientActiveTexture_ARG_NAMES texture
#define glClientActiveTexture_ARG_EXPAND GLenum texture
#define glClientActiveTexture_PACKED PACKED_void_GLenum
#define glClientActiveTexture_FORMAT FORMAT_void_GLenum
#define glClipPlanef_RETURN void
#define glClipPlanef_ARG_NAMES plane, equation
#define glClipPlanef_ARG_EXPAND GLenum plane, const GLfloat * equation
#define glClipPlanef_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glClipPlanef_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glClipPlanex_RETURN void
#define glClipPlanex_ARG_NAMES plane, equation
#define glClipPlanex_ARG_EXPAND GLenum plane, const GLfixed * equation
#define glClipPlanex_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glClipPlanex_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glColor4f_RETURN void
#define glColor4f_ARG_NAMES red, green, blue, alpha
#define glColor4f_ARG_EXPAND GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha
#define glColor4f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glColor4f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glColor4ub_RETURN void
#define glColor4ub_ARG_NAMES red, green, blue, alpha
#define glColor4ub_ARG_EXPAND GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha
#define glColor4ub_PACKED PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte
#define glColor4ub_FORMAT FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte
#define glColor4x_RETURN void
#define glColor4x_ARG_NAMES red, green, blue, alpha
#define glColor4x_ARG_EXPAND GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha
#define glColor4x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glColor4x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_PACKED PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorMask_FORMAT FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorPointer_RETURN void
#define glColorPointer_ARG_NAMES size, type, stride, pointer
#define glColorPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glColorPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glColorPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_RETURN void
#define glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define glCompressedTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_RETURN void
#define glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define glCompressedTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCopyTexImage2D_RETURN void
#define glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define glCopyTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexSubImage2D_RETURN void
#define glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define glCopyTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCopyTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_PACKED PACKED_void_GLenum
#define glCullFace_FORMAT FORMAT_void_GLenum
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffers
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffers
#define glDeleteBuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteBuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_RETURN void
#define glDeleteTextures_ARG_NAMES n, textures
#define glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define glDeleteTextures_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDepthFunc_RETURN void
#define glDepthFunc_ARG_NAMES func
#define glDepthFunc_ARG_EXPAND GLenum func
#define glDepthFunc_PACKED PACKED_void_GLenum
#define glDepthFunc_FORMAT FORMAT_void_GLenum
#define glDepthMask_RETURN void
#define glDepthMask_ARG_NAMES flag
#define glDepthMask_ARG_EXPAND GLboolean flag
#define glDepthMask_PACKED PACKED_void_GLboolean
#define glDepthMask_FORMAT FORMAT_void_GLboolean
#define glDepthRangef_RETURN void
#define glDepthRangef_ARG_NAMES near, far
#define glDepthRangef_ARG_EXPAND GLclampf near, GLclampf far
#define glDepthRangef_PACKED PACKED_void_GLclampf_GLclampf
#define glDepthRangef_FORMAT FORMAT_void_GLclampf_GLclampf
#define glDepthRangex_RETURN void
#define glDepthRangex_ARG_NAMES near, far
#define glDepthRangex_ARG_EXPAND GLclampx near, GLclampx far
#define glDepthRangex_PACKED PACKED_void_GLclampx_GLclampx
#define glDepthRangex_FORMAT FORMAT_void_GLclampx_GLclampx
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_PACKED PACKED_void_GLenum
#define glDisable_FORMAT FORMAT_void_GLenum
#define glDisableClientState_RETURN void
#define glDisableClientState_ARG_NAMES array
#define glDisableClientState_ARG_EXPAND GLenum array
#define glDisableClientState_PACKED PACKED_void_GLenum
#define glDisableClientState_FORMAT FORMAT_void_GLenum
#define glDrawArrays_RETURN void
#define glDrawArrays_ARG_NAMES mode, first, count
#define glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define glDrawArrays_PACKED PACKED_void_GLenum_GLint_GLsizei
#define glDrawArrays_FORMAT FORMAT_void_GLenum_GLint_GLsizei
#define glDrawElements_RETURN void
#define glDrawElements_ARG_NAMES mode, count, type, indices
#define glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define glDrawElements_PACKED PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glDrawElements_FORMAT FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glEnable_RETURN void
#define glEnable_ARG_NAMES cap
#define glEnable_ARG_EXPAND GLenum cap
#define glEnable_PACKED PACKED_void_GLenum
#define glEnable_FORMAT FORMAT_void_GLenum
#define glEnableClientState_RETURN void
#define glEnableClientState_ARG_NAMES array
#define glEnableClientState_ARG_EXPAND GLenum array
#define glEnableClientState_PACKED PACKED_void_GLenum
#define glEnableClientState_FORMAT FORMAT_void_GLenum
#define glFinish_RETURN void
#define glFinish_ARG_NAMES 
#define glFinish_ARG_EXPAND 
#define glFinish_PACKED PACKED_void
#define glFinish_FORMAT FORMAT_void
#define glFlush_RETURN void
#define glFlush_ARG_NAMES 
#define glFlush_ARG_EXPAND 
#define glFlush_PACKED PACKED_void
#define glFlush_FORMAT FORMAT_void
#define glFogf_RETURN void
#define glFogf_ARG_NAMES pname, param
#define glFogf_ARG_EXPAND GLenum pname, GLfloat param
#define glFogf_PACKED PACKED_void_GLenum_GLfloat
#define glFogf_FORMAT FORMAT_void_GLenum_GLfloat
#define glFogfv_RETURN void
#define glFogfv_ARG_NAMES pname, params
#define glFogfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glFogfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glFogfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glFogx_RETURN void
#define glFogx_ARG_NAMES pname, param
#define glFogx_ARG_EXPAND GLenum pname, GLfixed param
#define glFogx_PACKED PACKED_void_GLenum_GLfixed
#define glFogx_FORMAT FORMAT_void_GLenum_GLfixed
#define glFogxv_RETURN void
#define glFogxv_ARG_NAMES pname, params
#define glFogxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glFogxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glFogxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_PACKED PACKED_void_GLenum
#define glFrontFace_FORMAT FORMAT_void_GLenum
#define glFrustumf_RETURN void
#define glFrustumf_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumf_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glFrustumf_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glFrustumf_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glFrustumx_RETURN void
#define glFrustumx_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumx_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glFrustumx_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glFrustumx_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffers
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffers
#define glGenBuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenBuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenTextures_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGetBooleanv_RETURN void
#define glGetBooleanv_ARG_NAMES pname, params
#define glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define glGetBooleanv_PACKED PACKED_void_GLenum_GLboolean___GENPT__
#define glGetBooleanv_FORMAT FORMAT_void_GLenum_GLboolean___GENPT__
#define glGetBufferParameteriv_RETURN void
#define glGetBufferParameteriv_ARG_NAMES target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetBufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetBufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetClipPlanef_RETURN void
#define glGetClipPlanef_ARG_NAMES plane, equation
#define glGetClipPlanef_ARG_EXPAND GLenum plane, GLfloat * equation
#define glGetClipPlanef_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetClipPlanef_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetClipPlanex_RETURN void
#define glGetClipPlanex_ARG_NAMES plane, equation
#define glGetClipPlanex_ARG_EXPAND GLenum plane, GLfixed * equation
#define glGetClipPlanex_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define glGetClipPlanex_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_PACKED PACKED_GLenum
#define glGetError_FORMAT FORMAT_GLenum
#define glGetFixedv_RETURN void
#define glGetFixedv_ARG_NAMES pname, params
#define glGetFixedv_ARG_EXPAND GLenum pname, GLfixed * params
#define glGetFixedv_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define glGetFixedv_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetFloatv_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_PACKED PACKED_void_GLenum_GLint___GENPT__
#define glGetIntegerv_FORMAT FORMAT_void_GLenum_GLint___GENPT__
#define glGetLightfv_RETURN void
#define glGetLightfv_ARG_NAMES light, pname, params
#define glGetLightfv_ARG_EXPAND GLenum light, GLenum pname, GLfloat * params
#define glGetLightfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetLightfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetLightxv_RETURN void
#define glGetLightxv_ARG_NAMES light, pname, params
#define glGetLightxv_ARG_EXPAND GLenum light, GLenum pname, GLfixed * params
#define glGetLightxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetLightxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetMaterialfv_RETURN void
#define glGetMaterialfv_ARG_NAMES face, pname, params
#define glGetMaterialfv_ARG_EXPAND GLenum face, GLenum pname, GLfloat * params
#define glGetMaterialfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetMaterialxv_RETURN void
#define glGetMaterialxv_ARG_NAMES face, pname, params
#define glGetMaterialxv_ARG_EXPAND GLenum face, GLenum pname, GLfixed * params
#define glGetMaterialxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetPointerv_RETURN void
#define glGetPointerv_ARG_NAMES pname, params
#define glGetPointerv_ARG_EXPAND GLenum pname, GLvoid ** params
#define glGetPointerv_PACKED PACKED_void_GLenum_GLvoid___GENPT____GENPT__
#define glGetPointerv_FORMAT FORMAT_void_GLenum_GLvoid___GENPT____GENPT__
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_PACKED PACKED_const_GLubyte___GENPT___GLenum
#define glGetString_FORMAT FORMAT_const_GLubyte___GENPT___GLenum
#define glGetTexEnvfv_RETURN void
#define glGetTexEnvfv_ARG_NAMES target, pname, params
#define glGetTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexEnvfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexEnviv_RETURN void
#define glGetTexEnviv_ARG_NAMES target, pname, params
#define glGetTexEnviv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexEnviv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexEnvxv_RETURN void
#define glGetTexEnvxv_ARG_NAMES target, pname, params
#define glGetTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexEnvxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexParameterfv_RETURN void
#define glGetTexParameterfv_ARG_NAMES target, pname, params
#define glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexParameterfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameteriv_RETURN void
#define glGetTexParameteriv_ARG_NAMES target, pname, params
#define glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameterxv_RETURN void
#define glGetTexParameterxv_ARG_NAMES target, pname, params
#define glGetTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexParameterxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glHint_RETURN void
#define glHint_ARG_NAMES target, mode
#define glHint_ARG_EXPAND GLenum target, GLenum mode
#define glHint_PACKED PACKED_void_GLenum_GLenum
#define glHint_FORMAT FORMAT_void_GLenum_GLenum
#define glIsBuffer_RETURN GLboolean
#define glIsBuffer_ARG_NAMES buffer
#define glIsBuffer_ARG_EXPAND GLuint buffer
#define glIsBuffer_PACKED PACKED_GLboolean_GLuint
#define glIsBuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsEnabled_RETURN GLboolean
#define glIsEnabled_ARG_NAMES cap
#define glIsEnabled_ARG_EXPAND GLenum cap
#define glIsEnabled_PACKED PACKED_GLboolean_GLenum
#define glIsEnabled_FORMAT FORMAT_GLboolean_GLenum
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_PACKED PACKED_GLboolean_GLuint
#define glIsTexture_FORMAT FORMAT_GLboolean_GLuint
#define glLightModelf_RETURN void
#define glLightModelf_ARG_NAMES pname, param
#define glLightModelf_ARG_EXPAND GLenum pname, GLfloat param
#define glLightModelf_PACKED PACKED_void_GLenum_GLfloat
#define glLightModelf_FORMAT FORMAT_void_GLenum_GLfloat
#define glLightModelfv_RETURN void
#define glLightModelfv_ARG_NAMES pname, params
#define glLightModelfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glLightModelfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glLightModelfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glLightModelx_RETURN void
#define glLightModelx_ARG_NAMES pname, param
#define glLightModelx_ARG_EXPAND GLenum pname, GLfixed param
#define glLightModelx_PACKED PACKED_void_GLenum_GLfixed
#define glLightModelx_FORMAT FORMAT_void_GLenum_GLfixed
#define glLightModelxv_RETURN void
#define glLightModelxv_ARG_NAMES pname, params
#define glLightModelxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glLightModelxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glLightModelxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glLightf_RETURN void
#define glLightf_ARG_NAMES light, pname, param
#define glLightf_ARG_EXPAND GLenum light, GLenum pname, GLfloat param
#define glLightf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glLightf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glLightfv_RETURN void
#define glLightfv_ARG_NAMES light, pname, params
#define glLightfv_ARG_EXPAND GLenum light, GLenum pname, const GLfloat * params
#define glLightfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glLightfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glLightx_RETURN void
#define glLightx_ARG_NAMES light, pname, param
#define glLightx_ARG_EXPAND GLenum light, GLenum pname, GLfixed param
#define glLightx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glLightx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glLightxv_RETURN void
#define glLightxv_ARG_NAMES light, pname, params
#define glLightxv_ARG_EXPAND GLenum light, GLenum pname, const GLfixed * params
#define glLightxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glLightxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_PACKED PACKED_void_GLfloat
#define glLineWidth_FORMAT FORMAT_void_GLfloat
#define glLineWidthx_RETURN void
#define glLineWidthx_ARG_NAMES width
#define glLineWidthx_ARG_EXPAND GLfixed width
#define glLineWidthx_PACKED PACKED_void_GLfixed
#define glLineWidthx_FORMAT FORMAT_void_GLfixed
#define glLoadIdentity_RETURN void
#define glLoadIdentity_ARG_NAMES 
#define glLoadIdentity_ARG_EXPAND 
#define glLoadIdentity_PACKED PACKED_void
#define glLoadIdentity_FORMAT FORMAT_void
#define glLoadMatrixf_RETURN void
#define glLoadMatrixf_ARG_NAMES m
#define glLoadMatrixf_ARG_EXPAND const GLfloat * m
#define glLoadMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define glLoadMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define glLoadMatrixx_RETURN void
#define glLoadMatrixx_ARG_NAMES m
#define glLoadMatrixx_ARG_EXPAND const GLfixed * m
#define glLoadMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define glLoadMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define glLogicOp_RETURN void
#define glLogicOp_ARG_NAMES opcode
#define glLogicOp_ARG_EXPAND GLenum opcode
#define glLogicOp_PACKED PACKED_void_GLenum
#define glLogicOp_FORMAT FORMAT_void_GLenum
#define glMaterialf_RETURN void
#define glMaterialf_ARG_NAMES face, pname, param
#define glMaterialf_ARG_EXPAND GLenum face, GLenum pname, GLfloat param
#define glMaterialf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glMaterialf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glMaterialfv_RETURN void
#define glMaterialfv_ARG_NAMES face, pname, params
#define glMaterialfv_ARG_EXPAND GLenum face, GLenum pname, const GLfloat * params
#define glMaterialfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glMaterialx_RETURN void
#define glMaterialx_ARG_NAMES face, pname, param
#define glMaterialx_ARG_EXPAND GLenum face, GLenum pname, GLfixed param
#define glMaterialx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glMaterialx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glMaterialxv_RETURN void
#define glMaterialxv_ARG_NAMES face, pname, params
#define glMaterialxv_ARG_EXPAND GLenum face, GLenum pname, const GLfixed * params
#define glMaterialxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glMatrixMode_RETURN void
#define glMatrixMode_ARG_NAMES mode
#define glMatrixMode_ARG_EXPAND GLenum mode
#define glMatrixMode_PACKED PACKED_void_GLenum
#define glMatrixMode_FORMAT FORMAT_void_GLenum
#define glMultMatrixf_RETURN void
#define glMultMatrixf_ARG_NAMES m
#define glMultMatrixf_ARG_EXPAND const GLfloat * m
#define glMultMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define glMultMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define glMultMatrixx_RETURN void
#define glMultMatrixx_ARG_NAMES m
#define glMultMatrixx_ARG_EXPAND const GLfixed * m
#define glMultMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define glMultMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define glMultiTexCoord4f_RETURN void
#define glMultiTexCoord4f_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4f_ARG_EXPAND GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q
#define glMultiTexCoord4f_PACKED PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define glMultiTexCoord4f_FORMAT FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define glMultiTexCoord4x_RETURN void
#define glMultiTexCoord4x_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4x_ARG_EXPAND GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q
#define glMultiTexCoord4x_PACKED PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define glMultiTexCoord4x_FORMAT FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define glNormal3f_RETURN void
#define glNormal3f_ARG_NAMES nx, ny, nz
#define glNormal3f_ARG_EXPAND GLfloat nx, GLfloat ny, GLfloat nz
#define glNormal3f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glNormal3f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glNormal3x_RETURN void
#define glNormal3x_ARG_NAMES nx, ny, nz
#define glNormal3x_ARG_EXPAND GLfixed nx, GLfixed ny, GLfixed nz
#define glNormal3x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glNormal3x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glNormalPointer_RETURN void
#define glNormalPointer_ARG_NAMES type, stride, pointer
#define glNormalPointer_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glNormalPointer_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glNormalPointer_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glOrthof_RETURN void
#define glOrthof_ARG_NAMES left, right, bottom, top, near, far
#define glOrthof_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glOrthof_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glOrthof_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glOrthox_RETURN void
#define glOrthox_ARG_NAMES left, right, bottom, top, near, far
#define glOrthox_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glOrthox_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glOrthox_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_PACKED PACKED_void_GLenum_GLint
#define glPixelStorei_FORMAT FORMAT_void_GLenum_GLint
#define glPointParameterf_RETURN void
#define glPointParameterf_ARG_NAMES pname, param
#define glPointParameterf_ARG_EXPAND GLenum pname, GLfloat param
#define glPointParameterf_PACKED PACKED_void_GLenum_GLfloat
#define glPointParameterf_FORMAT FORMAT_void_GLenum_GLfloat
#define glPointParameterfv_RETURN void
#define glPointParameterfv_ARG_NAMES pname, params
#define glPointParameterfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glPointParameterfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glPointParameterfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glPointParameterx_RETURN void
#define glPointParameterx_ARG_NAMES pname, param
#define glPointParameterx_ARG_EXPAND GLenum pname, GLfixed param
#define glPointParameterx_PACKED PACKED_void_GLenum_GLfixed
#define glPointParameterx_FORMAT FORMAT_void_GLenum_GLfixed
#define glPointParameterxv_RETURN void
#define glPointParameterxv_ARG_NAMES pname, params
#define glPointParameterxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glPointParameterxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glPointParameterxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glPointSize_RETURN void
#define glPointSize_ARG_NAMES size
#define glPointSize_ARG_EXPAND GLfloat size
#define glPointSize_PACKED PACKED_void_GLfloat
#define glPointSize_FORMAT FORMAT_void_GLfloat
#define glPointSizePointerOES_RETURN void
#define glPointSizePointerOES_ARG_NAMES type, stride, pointer
#define glPointSizePointerOES_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glPointSizePointerOES_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glPointSizePointerOES_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glPointSizex_RETURN void
#define glPointSizex_ARG_NAMES size
#define glPointSizex_ARG_EXPAND GLfixed size
#define glPointSizex_PACKED PACKED_void_GLfixed
#define glPointSizex_FORMAT FORMAT_void_GLfixed
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_PACKED PACKED_void_GLfloat_GLfloat
#define glPolygonOffset_FORMAT FORMAT_void_GLfloat_GLfloat
#define glPolygonOffsetx_RETURN void
#define glPolygonOffsetx_ARG_NAMES factor, units
#define glPolygonOffsetx_ARG_EXPAND GLfixed factor, GLfixed units
#define glPolygonOffsetx_PACKED PACKED_void_GLfixed_GLfixed
#define glPolygonOffsetx_FORMAT FORMAT_void_GLfixed_GLfixed
#define glPopMatrix_RETURN void
#define glPopMatrix_ARG_NAMES 
#define glPopMatrix_ARG_EXPAND 
#define glPopMatrix_PACKED PACKED_void
#define glPopMatrix_FORMAT FORMAT_void
#define glPushMatrix_RETURN void
#define glPushMatrix_ARG_NAMES 
#define glPushMatrix_ARG_EXPAND 
#define glPushMatrix_PACKED PACKED_void
#define glPushMatrix_FORMAT FORMAT_void
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReadPixels_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glRotatef_RETURN void
#define glRotatef_ARG_NAMES angle, x, y, z
#define glRotatef_ARG_EXPAND GLfloat angle, GLfloat x, GLfloat y, GLfloat z
#define glRotatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glRotatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glRotatex_RETURN void
#define glRotatex_ARG_NAMES angle, x, y, z
#define glRotatex_ARG_EXPAND GLfixed angle, GLfixed x, GLfixed y, GLfixed z
#define glRotatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glRotatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_PACKED PACKED_void_GLclampf_GLboolean
#define glSampleCoverage_FORMAT FORMAT_void_GLclampf_GLboolean
#define glSampleCoveragex_RETURN void
#define glSampleCoveragex_ARG_NAMES value, invert
#define glSampleCoveragex_ARG_EXPAND GLclampx value, GLboolean invert
#define glSampleCoveragex_PACKED PACKED_void_GLclampx_GLboolean
#define glSampleCoveragex_FORMAT FORMAT_void_GLclampx_GLboolean
#define glScalef_RETURN void
#define glScalef_ARG_NAMES x, y, z
#define glScalef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glScalef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glScalef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glScalex_RETURN void
#define glScalex_ARG_NAMES x, y, z
#define glScalex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glScalex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glScalex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glScissor_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define glShadeModel_RETURN void
#define glShadeModel_ARG_NAMES mode
#define glShadeModel_ARG_EXPAND GLenum mode
#define glShadeModel_PACKED PACKED_void_GLenum
#define glShadeModel_FORMAT FORMAT_void_GLenum
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_PACKED PACKED_void_GLenum_GLint_GLuint
#define glStencilFunc_FORMAT FORMAT_void_GLenum_GLint_GLuint
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_PACKED PACKED_void_GLuint
#define glStencilMask_FORMAT FORMAT_void_GLuint
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_PACKED PACKED_void_GLenum_GLenum_GLenum
#define glStencilOp_FORMAT FORMAT_void_GLenum_GLenum_GLenum
#define glTexCoordPointer_RETURN void
#define glTexCoordPointer_ARG_NAMES size, type, stride, pointer
#define glTexCoordPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glTexCoordPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glTexCoordPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glTexEnvf_RETURN void
#define glTexEnvf_ARG_NAMES target, pname, param
#define glTexEnvf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexEnvf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glTexEnvf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glTexEnvfv_RETURN void
#define glTexEnvfv_ARG_NAMES target, pname, params
#define glTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexEnvfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexEnvi_RETURN void
#define glTexEnvi_ARG_NAMES target, pname, param
#define glTexEnvi_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexEnvi_PACKED PACKED_void_GLenum_GLenum_GLint
#define glTexEnvi_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define glTexEnviv_RETURN void
#define glTexEnviv_ARG_NAMES target, pname, params
#define glTexEnviv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexEnviv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexEnvx_RETURN void
#define glTexEnvx_ARG_NAMES target, pname, param
#define glTexEnvx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexEnvx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glTexEnvx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glTexEnvxv_RETURN void
#define glTexEnvxv_ARG_NAMES target, pname, params
#define glTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexEnvxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexImage2D_RETURN void
#define glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define glTexImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexParameterf_RETURN void
#define glTexParameterf_ARG_NAMES target, pname, param
#define glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexParameterf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glTexParameterf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glTexParameterfv_RETURN void
#define glTexParameterfv_ARG_NAMES target, pname, params
#define glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexParameterfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameteri_RETURN void
#define glTexParameteri_ARG_NAMES target, pname, param
#define glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexParameteri_PACKED PACKED_void_GLenum_GLenum_GLint
#define glTexParameteri_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define glTexParameteriv_RETURN void
#define glTexParameteriv_ARG_NAMES target, pname, params
#define glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexParameteriv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameterx_RETURN void
#define glTexParameterx_ARG_NAMES target, pname, param
#define glTexParameterx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexParameterx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glTexParameterx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glTexParameterxv_RETURN void
#define glTexParameterxv_ARG_NAMES target, pname, params
#define glTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexParameterxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTranslatef_RETURN void
#define glTranslatef_ARG_NAMES x, y, z
#define glTranslatef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glTranslatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glTranslatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glTranslatex_RETURN void
#define glTranslatex_ARG_NAMES x, y, z
#define glTranslatex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glTranslatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glTranslatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glVertexPointer_RETURN void
#define glVertexPointer_ARG_NAMES size, type, stride, pointer
#define glVertexPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glVertexPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glVertexPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glViewport_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei

void glActiveTexture(glActiveTexture_ARG_EXPAND);
typedef void (*glesptr_glActiveTexture)(glActiveTexture_ARG_EXPAND);
void glAlphaFunc(glAlphaFunc_ARG_EXPAND);
typedef void (*glesptr_glAlphaFunc)(glAlphaFunc_ARG_EXPAND);
void glAlphaFuncx(glAlphaFuncx_ARG_EXPAND);
typedef void (*glesptr_glAlphaFuncx)(glAlphaFuncx_ARG_EXPAND);
void glBindBuffer(glBindBuffer_ARG_EXPAND);
typedef void (*glesptr_glBindBuffer)(glBindBuffer_ARG_EXPAND);
void glBindTexture(glBindTexture_ARG_EXPAND);
typedef void (*glesptr_glBindTexture)(glBindTexture_ARG_EXPAND);
void glBlendFunc(glBlendFunc_ARG_EXPAND);
typedef void (*glesptr_glBlendFunc)(glBlendFunc_ARG_EXPAND);
void glBufferData(glBufferData_ARG_EXPAND);
typedef void (*glesptr_glBufferData)(glBufferData_ARG_EXPAND);
void glBufferSubData(glBufferSubData_ARG_EXPAND);
typedef void (*glesptr_glBufferSubData)(glBufferSubData_ARG_EXPAND);
void glClear(glClear_ARG_EXPAND);
typedef void (*glesptr_glClear)(glClear_ARG_EXPAND);
void glClearColor(glClearColor_ARG_EXPAND);
typedef void (*glesptr_glClearColor)(glClearColor_ARG_EXPAND);
void glClearColorx(glClearColorx_ARG_EXPAND);
typedef void (*glesptr_glClearColorx)(glClearColorx_ARG_EXPAND);
void glClearDepthf(glClearDepthf_ARG_EXPAND);
typedef void (*glesptr_glClearDepthf)(glClearDepthf_ARG_EXPAND);
void glClearDepthx(glClearDepthx_ARG_EXPAND);
typedef void (*glesptr_glClearDepthx)(glClearDepthx_ARG_EXPAND);
void glClearStencil(glClearStencil_ARG_EXPAND);
typedef void (*glesptr_glClearStencil)(glClearStencil_ARG_EXPAND);
void glClientActiveTexture(glClientActiveTexture_ARG_EXPAND);
typedef void (*glesptr_glClientActiveTexture)(glClientActiveTexture_ARG_EXPAND);
void glClipPlanef(glClipPlanef_ARG_EXPAND);
typedef void (*glesptr_glClipPlanef)(glClipPlanef_ARG_EXPAND);
void glClipPlanex(glClipPlanex_ARG_EXPAND);
typedef void (*glesptr_glClipPlanex)(glClipPlanex_ARG_EXPAND);
void glColor4f(glColor4f_ARG_EXPAND);
typedef void (*glesptr_glColor4f)(glColor4f_ARG_EXPAND);
void glColor4ub(glColor4ub_ARG_EXPAND);
typedef void (*glesptr_glColor4ub)(glColor4ub_ARG_EXPAND);
void glColor4x(glColor4x_ARG_EXPAND);
typedef void (*glesptr_glColor4x)(glColor4x_ARG_EXPAND);
void glColorMask(glColorMask_ARG_EXPAND);
typedef void (*glesptr_glColorMask)(glColorMask_ARG_EXPAND);
void glColorPointer(glColorPointer_ARG_EXPAND);
typedef void (*glesptr_glColorPointer)(glColorPointer_ARG_EXPAND);
void glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
typedef void (*glesptr_glCompressedTexImage2D)(glCompressedTexImage2D_ARG_EXPAND);
void glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glCompressedTexSubImage2D)(glCompressedTexSubImage2D_ARG_EXPAND);
void glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
typedef void (*glesptr_glCopyTexImage2D)(glCopyTexImage2D_ARG_EXPAND);
void glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glCopyTexSubImage2D)(glCopyTexSubImage2D_ARG_EXPAND);
void glCullFace(glCullFace_ARG_EXPAND);
typedef void (*glesptr_glCullFace)(glCullFace_ARG_EXPAND);
void glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
typedef void (*glesptr_glDeleteBuffers)(glDeleteBuffers_ARG_EXPAND);
void glDeleteTextures(glDeleteTextures_ARG_EXPAND);
typedef void (*glesptr_glDeleteTextures)(glDeleteTextures_ARG_EXPAND);
void glDepthFunc(glDepthFunc_ARG_EXPAND);
typedef void (*glesptr_glDepthFunc)(glDepthFunc_ARG_EXPAND);
void glDepthMask(glDepthMask_ARG_EXPAND);
typedef void (*glesptr_glDepthMask)(glDepthMask_ARG_EXPAND);
void glDepthRangef(glDepthRangef_ARG_EXPAND);
typedef void (*glesptr_glDepthRangef)(glDepthRangef_ARG_EXPAND);
void glDepthRangex(glDepthRangex_ARG_EXPAND);
typedef void (*glesptr_glDepthRangex)(glDepthRangex_ARG_EXPAND);
void glDisable(glDisable_ARG_EXPAND);
typedef void (*glesptr_glDisable)(glDisable_ARG_EXPAND);
void glDisableClientState(glDisableClientState_ARG_EXPAND);
typedef void (*glesptr_glDisableClientState)(glDisableClientState_ARG_EXPAND);
void glDrawArrays(glDrawArrays_ARG_EXPAND);
typedef void (*glesptr_glDrawArrays)(glDrawArrays_ARG_EXPAND);
void glDrawElements(glDrawElements_ARG_EXPAND);
typedef void (*glesptr_glDrawElements)(glDrawElements_ARG_EXPAND);
void glEnable(glEnable_ARG_EXPAND);
typedef void (*glesptr_glEnable)(glEnable_ARG_EXPAND);
void glEnableClientState(glEnableClientState_ARG_EXPAND);
typedef void (*glesptr_glEnableClientState)(glEnableClientState_ARG_EXPAND);
void glFinish(glFinish_ARG_EXPAND);
typedef void (*glesptr_glFinish)(glFinish_ARG_EXPAND);
void glFlush(glFlush_ARG_EXPAND);
typedef void (*glesptr_glFlush)(glFlush_ARG_EXPAND);
void glFogf(glFogf_ARG_EXPAND);
typedef void (*glesptr_glFogf)(glFogf_ARG_EXPAND);
void glFogfv(glFogfv_ARG_EXPAND);
typedef void (*glesptr_glFogfv)(glFogfv_ARG_EXPAND);
void glFogx(glFogx_ARG_EXPAND);
typedef void (*glesptr_glFogx)(glFogx_ARG_EXPAND);
void glFogxv(glFogxv_ARG_EXPAND);
typedef void (*glesptr_glFogxv)(glFogxv_ARG_EXPAND);
void glFrontFace(glFrontFace_ARG_EXPAND);
typedef void (*glesptr_glFrontFace)(glFrontFace_ARG_EXPAND);
void glFrustumf(glFrustumf_ARG_EXPAND);
typedef void (*glesptr_glFrustumf)(glFrustumf_ARG_EXPAND);
void glFrustumx(glFrustumx_ARG_EXPAND);
typedef void (*glesptr_glFrustumx)(glFrustumx_ARG_EXPAND);
void glGenBuffers(glGenBuffers_ARG_EXPAND);
typedef void (*glesptr_glGenBuffers)(glGenBuffers_ARG_EXPAND);
void glGenTextures(glGenTextures_ARG_EXPAND);
typedef void (*glesptr_glGenTextures)(glGenTextures_ARG_EXPAND);
void glGetBooleanv(glGetBooleanv_ARG_EXPAND);
typedef void (*glesptr_glGetBooleanv)(glGetBooleanv_ARG_EXPAND);
void glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetBufferParameteriv)(glGetBufferParameteriv_ARG_EXPAND);
void glGetClipPlanef(glGetClipPlanef_ARG_EXPAND);
typedef void (*glesptr_glGetClipPlanef)(glGetClipPlanef_ARG_EXPAND);
void glGetClipPlanex(glGetClipPlanex_ARG_EXPAND);
typedef void (*glesptr_glGetClipPlanex)(glGetClipPlanex_ARG_EXPAND);
GLenum glGetError(glGetError_ARG_EXPAND);
typedef GLenum (*glesptr_glGetError)(glGetError_ARG_EXPAND);
void glGetFixedv(glGetFixedv_ARG_EXPAND);
typedef void (*glesptr_glGetFixedv)(glGetFixedv_ARG_EXPAND);
void glGetFloatv(glGetFloatv_ARG_EXPAND);
typedef void (*glesptr_glGetFloatv)(glGetFloatv_ARG_EXPAND);
void glGetIntegerv(glGetIntegerv_ARG_EXPAND);
typedef void (*glesptr_glGetIntegerv)(glGetIntegerv_ARG_EXPAND);
void glGetLightfv(glGetLightfv_ARG_EXPAND);
typedef void (*glesptr_glGetLightfv)(glGetLightfv_ARG_EXPAND);
void glGetLightxv(glGetLightxv_ARG_EXPAND);
typedef void (*glesptr_glGetLightxv)(glGetLightxv_ARG_EXPAND);
void glGetMaterialfv(glGetMaterialfv_ARG_EXPAND);
typedef void (*glesptr_glGetMaterialfv)(glGetMaterialfv_ARG_EXPAND);
void glGetMaterialxv(glGetMaterialxv_ARG_EXPAND);
typedef void (*glesptr_glGetMaterialxv)(glGetMaterialxv_ARG_EXPAND);
void glGetPointerv(glGetPointerv_ARG_EXPAND);
typedef void (*glesptr_glGetPointerv)(glGetPointerv_ARG_EXPAND);
const GLubyte * glGetString(glGetString_ARG_EXPAND);
typedef const GLubyte * (*glesptr_glGetString)(glGetString_ARG_EXPAND);
void glGetTexEnvfv(glGetTexEnvfv_ARG_EXPAND);
typedef void (*glesptr_glGetTexEnvfv)(glGetTexEnvfv_ARG_EXPAND);
void glGetTexEnviv(glGetTexEnviv_ARG_EXPAND);
typedef void (*glesptr_glGetTexEnviv)(glGetTexEnviv_ARG_EXPAND);
void glGetTexEnvxv(glGetTexEnvxv_ARG_EXPAND);
typedef void (*glesptr_glGetTexEnvxv)(glGetTexEnvxv_ARG_EXPAND);
void glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
typedef void (*glesptr_glGetTexParameterfv)(glGetTexParameterfv_ARG_EXPAND);
void glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetTexParameteriv)(glGetTexParameteriv_ARG_EXPAND);
void glGetTexParameterxv(glGetTexParameterxv_ARG_EXPAND);
typedef void (*glesptr_glGetTexParameterxv)(glGetTexParameterxv_ARG_EXPAND);
void glHint(glHint_ARG_EXPAND);
typedef void (*glesptr_glHint)(glHint_ARG_EXPAND);
GLboolean glIsBuffer(glIsBuffer_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsBuffer)(glIsBuffer_ARG_EXPAND);
GLboolean glIsEnabled(glIsEnabled_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsEnabled)(glIsEnabled_ARG_EXPAND);
GLboolean glIsTexture(glIsTexture_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsTexture)(glIsTexture_ARG_EXPAND);
void glLightModelf(glLightModelf_ARG_EXPAND);
typedef void (*glesptr_glLightModelf)(glLightModelf_ARG_EXPAND);
void glLightModelfv(glLightModelfv_ARG_EXPAND);
typedef void (*glesptr_glLightModelfv)(glLightModelfv_ARG_EXPAND);
void glLightModelx(glLightModelx_ARG_EXPAND);
typedef void (*glesptr_glLightModelx)(glLightModelx_ARG_EXPAND);
void glLightModelxv(glLightModelxv_ARG_EXPAND);
typedef void (*glesptr_glLightModelxv)(glLightModelxv_ARG_EXPAND);
void glLightf(glLightf_ARG_EXPAND);
typedef void (*glesptr_glLightf)(glLightf_ARG_EXPAND);
void glLightfv(glLightfv_ARG_EXPAND);
typedef void (*glesptr_glLightfv)(glLightfv_ARG_EXPAND);
void glLightx(glLightx_ARG_EXPAND);
typedef void (*glesptr_glLightx)(glLightx_ARG_EXPAND);
void glLightxv(glLightxv_ARG_EXPAND);
typedef void (*glesptr_glLightxv)(glLightxv_ARG_EXPAND);
void glLineWidth(glLineWidth_ARG_EXPAND);
typedef void (*glesptr_glLineWidth)(glLineWidth_ARG_EXPAND);
void glLineWidthx(glLineWidthx_ARG_EXPAND);
typedef void (*glesptr_glLineWidthx)(glLineWidthx_ARG_EXPAND);
void glLoadIdentity(glLoadIdentity_ARG_EXPAND);
typedef void (*glesptr_glLoadIdentity)(glLoadIdentity_ARG_EXPAND);
void glLoadMatrixf(glLoadMatrixf_ARG_EXPAND);
typedef void (*glesptr_glLoadMatrixf)(glLoadMatrixf_ARG_EXPAND);
void glLoadMatrixx(glLoadMatrixx_ARG_EXPAND);
typedef void (*glesptr_glLoadMatrixx)(glLoadMatrixx_ARG_EXPAND);
void glLogicOp(glLogicOp_ARG_EXPAND);
typedef void (*glesptr_glLogicOp)(glLogicOp_ARG_EXPAND);
void glMaterialf(glMaterialf_ARG_EXPAND);
typedef void (*glesptr_glMaterialf)(glMaterialf_ARG_EXPAND);
void glMaterialfv(glMaterialfv_ARG_EXPAND);
typedef void (*glesptr_glMaterialfv)(glMaterialfv_ARG_EXPAND);
void glMaterialx(glMaterialx_ARG_EXPAND);
typedef void (*glesptr_glMaterialx)(glMaterialx_ARG_EXPAND);
void glMaterialxv(glMaterialxv_ARG_EXPAND);
typedef void (*glesptr_glMaterialxv)(glMaterialxv_ARG_EXPAND);
void glMatrixMode(glMatrixMode_ARG_EXPAND);
typedef void (*glesptr_glMatrixMode)(glMatrixMode_ARG_EXPAND);
void glMultMatrixf(glMultMatrixf_ARG_EXPAND);
typedef void (*glesptr_glMultMatrixf)(glMultMatrixf_ARG_EXPAND);
void glMultMatrixx(glMultMatrixx_ARG_EXPAND);
typedef void (*glesptr_glMultMatrixx)(glMultMatrixx_ARG_EXPAND);
void glMultiTexCoord4f(glMultiTexCoord4f_ARG_EXPAND);
typedef void (*glesptr_glMultiTexCoord4f)(glMultiTexCoord4f_ARG_EXPAND);
void glMultiTexCoord4x(glMultiTexCoord4x_ARG_EXPAND);
typedef void (*glesptr_glMultiTexCoord4x)(glMultiTexCoord4x_ARG_EXPAND);
void glNormal3f(glNormal3f_ARG_EXPAND);
typedef void (*glesptr_glNormal3f)(glNormal3f_ARG_EXPAND);
void glNormal3x(glNormal3x_ARG_EXPAND);
typedef void (*glesptr_glNormal3x)(glNormal3x_ARG_EXPAND);
void glNormalPointer(glNormalPointer_ARG_EXPAND);
typedef void (*glesptr_glNormalPointer)(glNormalPointer_ARG_EXPAND);
void glOrthof(glOrthof_ARG_EXPAND);
typedef void (*glesptr_glOrthof)(glOrthof_ARG_EXPAND);
void glOrthox(glOrthox_ARG_EXPAND);
typedef void (*glesptr_glOrthox)(glOrthox_ARG_EXPAND);
void glPixelStorei(glPixelStorei_ARG_EXPAND);
typedef void (*glesptr_glPixelStorei)(glPixelStorei_ARG_EXPAND);
void glPointParameterf(glPointParameterf_ARG_EXPAND);
typedef void (*glesptr_glPointParameterf)(glPointParameterf_ARG_EXPAND);
void glPointParameterfv(glPointParameterfv_ARG_EXPAND);
typedef void (*glesptr_glPointParameterfv)(glPointParameterfv_ARG_EXPAND);
void glPointParameterx(glPointParameterx_ARG_EXPAND);
typedef void (*glesptr_glPointParameterx)(glPointParameterx_ARG_EXPAND);
void glPointParameterxv(glPointParameterxv_ARG_EXPAND);
typedef void (*glesptr_glPointParameterxv)(glPointParameterxv_ARG_EXPAND);
void glPointSize(glPointSize_ARG_EXPAND);
typedef void (*glesptr_glPointSize)(glPointSize_ARG_EXPAND);
void glPointSizePointerOES(glPointSizePointerOES_ARG_EXPAND);
typedef void (*glesptr_glPointSizePointerOES)(glPointSizePointerOES_ARG_EXPAND);
void glPointSizex(glPointSizex_ARG_EXPAND);
typedef void (*glesptr_glPointSizex)(glPointSizex_ARG_EXPAND);
void glPolygonOffset(glPolygonOffset_ARG_EXPAND);
typedef void (*glesptr_glPolygonOffset)(glPolygonOffset_ARG_EXPAND);
void glPolygonOffsetx(glPolygonOffsetx_ARG_EXPAND);
typedef void (*glesptr_glPolygonOffsetx)(glPolygonOffsetx_ARG_EXPAND);
void glPopMatrix(glPopMatrix_ARG_EXPAND);
typedef void (*glesptr_glPopMatrix)(glPopMatrix_ARG_EXPAND);
void glPushMatrix(glPushMatrix_ARG_EXPAND);
typedef void (*glesptr_glPushMatrix)(glPushMatrix_ARG_EXPAND);
void glReadPixels(glReadPixels_ARG_EXPAND);
typedef void (*glesptr_glReadPixels)(glReadPixels_ARG_EXPAND);
void glRotatef(glRotatef_ARG_EXPAND);
typedef void (*glesptr_glRotatef)(glRotatef_ARG_EXPAND);
void glRotatex(glRotatex_ARG_EXPAND);
typedef void (*glesptr_glRotatex)(glRotatex_ARG_EXPAND);
void glSampleCoverage(glSampleCoverage_ARG_EXPAND);
typedef void (*glesptr_glSampleCoverage)(glSampleCoverage_ARG_EXPAND);
void glSampleCoveragex(glSampleCoveragex_ARG_EXPAND);
typedef void (*glesptr_glSampleCoveragex)(glSampleCoveragex_ARG_EXPAND);
void glScalef(glScalef_ARG_EXPAND);
typedef void (*glesptr_glScalef)(glScalef_ARG_EXPAND);
void glScalex(glScalex_ARG_EXPAND);
typedef void (*glesptr_glScalex)(glScalex_ARG_EXPAND);
void glScissor(glScissor_ARG_EXPAND);
typedef void (*glesptr_glScissor)(glScissor_ARG_EXPAND);
void glShadeModel(glShadeModel_ARG_EXPAND);
typedef void (*glesptr_glShadeModel)(glShadeModel_ARG_EXPAND);
void glStencilFunc(glStencilFunc_ARG_EXPAND);
typedef void (*glesptr_glStencilFunc)(glStencilFunc_ARG_EXPAND);
void glStencilMask(glStencilMask_ARG_EXPAND);
typedef void (*glesptr_glStencilMask)(glStencilMask_ARG_EXPAND);
void glStencilOp(glStencilOp_ARG_EXPAND);
typedef void (*glesptr_glStencilOp)(glStencilOp_ARG_EXPAND);
void glTexCoordPointer(glTexCoordPointer_ARG_EXPAND);
typedef void (*glesptr_glTexCoordPointer)(glTexCoordPointer_ARG_EXPAND);
void glTexEnvf(glTexEnvf_ARG_EXPAND);
typedef void (*glesptr_glTexEnvf)(glTexEnvf_ARG_EXPAND);
void glTexEnvfv(glTexEnvfv_ARG_EXPAND);
typedef void (*glesptr_glTexEnvfv)(glTexEnvfv_ARG_EXPAND);
void glTexEnvi(glTexEnvi_ARG_EXPAND);
typedef void (*glesptr_glTexEnvi)(glTexEnvi_ARG_EXPAND);
void glTexEnviv(glTexEnviv_ARG_EXPAND);
typedef void (*glesptr_glTexEnviv)(glTexEnviv_ARG_EXPAND);
void glTexEnvx(glTexEnvx_ARG_EXPAND);
typedef void (*glesptr_glTexEnvx)(glTexEnvx_ARG_EXPAND);
void glTexEnvxv(glTexEnvxv_ARG_EXPAND);
typedef void (*glesptr_glTexEnvxv)(glTexEnvxv_ARG_EXPAND);
void glTexImage2D(glTexImage2D_ARG_EXPAND);
typedef void (*glesptr_glTexImage2D)(glTexImage2D_ARG_EXPAND);
void glTexParameterf(glTexParameterf_ARG_EXPAND);
typedef void (*glesptr_glTexParameterf)(glTexParameterf_ARG_EXPAND);
void glTexParameterfv(glTexParameterfv_ARG_EXPAND);
typedef void (*glesptr_glTexParameterfv)(glTexParameterfv_ARG_EXPAND);
void glTexParameteri(glTexParameteri_ARG_EXPAND);
typedef void (*glesptr_glTexParameteri)(glTexParameteri_ARG_EXPAND);
void glTexParameteriv(glTexParameteriv_ARG_EXPAND);
typedef void (*glesptr_glTexParameteriv)(glTexParameteriv_ARG_EXPAND);
void glTexParameterx(glTexParameterx_ARG_EXPAND);
typedef void (*glesptr_glTexParameterx)(glTexParameterx_ARG_EXPAND);
void glTexParameterxv(glTexParameterxv_ARG_EXPAND);
typedef void (*glesptr_glTexParameterxv)(glTexParameterxv_ARG_EXPAND);
void glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glTexSubImage2D)(glTexSubImage2D_ARG_EXPAND);
void glTranslatef(glTranslatef_ARG_EXPAND);
typedef void (*glesptr_glTranslatef)(glTranslatef_ARG_EXPAND);
void glTranslatex(glTranslatex_ARG_EXPAND);
typedef void (*glesptr_glTranslatex)(glTranslatex_ARG_EXPAND);
void glVertexPointer(glVertexPointer_ARG_EXPAND);
typedef void (*glesptr_glVertexPointer)(glVertexPointer_ARG_EXPAND);
void glViewport(glViewport_ARG_EXPAND);
typedef void (*glesptr_glViewport)(glViewport_ARG_EXPAND);

#ifndef direct_glActiveTexture
static inline void push_glActiveTexture(glActiveTexture_ARG_EXPAND) {
    glActiveTexture_PACKED *packed_data = malloc(sizeof(glActiveTexture_PACKED));
    packed_data->format = glActiveTexture_FORMAT;
    packed_data->func = glActiveTexture;
    packed_data->args.a1 = texture;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glAlphaFunc
static inline void push_glAlphaFunc(glAlphaFunc_ARG_EXPAND) {
    glAlphaFunc_PACKED *packed_data = malloc(sizeof(glAlphaFunc_PACKED));
    packed_data->format = glAlphaFunc_FORMAT;
    packed_data->func = glAlphaFunc;
    packed_data->args.a1 = func;
    packed_data->args.a2 = ref;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glAlphaFuncx
static inline void push_glAlphaFuncx(glAlphaFuncx_ARG_EXPAND) {
    glAlphaFuncx_PACKED *packed_data = malloc(sizeof(glAlphaFuncx_PACKED));
    packed_data->format = glAlphaFuncx_FORMAT;
    packed_data->func = glAlphaFuncx;
    packed_data->args.a1 = func;
    packed_data->args.a2 = ref;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBindBuffer
static inline void push_glBindBuffer(glBindBuffer_ARG_EXPAND) {
    glBindBuffer_PACKED *packed_data = malloc(sizeof(glBindBuffer_PACKED));
    packed_data->format = glBindBuffer_FORMAT;
    packed_data->func = glBindBuffer;
    packed_data->args.a1 = target;
    packed_data->args.a2 = buffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBindTexture
static inline void push_glBindTexture(glBindTexture_ARG_EXPAND) {
    glBindTexture_PACKED *packed_data = malloc(sizeof(glBindTexture_PACKED));
    packed_data->format = glBindTexture_FORMAT;
    packed_data->func = glBindTexture;
    packed_data->args.a1 = target;
    packed_data->args.a2 = texture;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBlendFunc
static inline void push_glBlendFunc(glBlendFunc_ARG_EXPAND) {
    glBlendFunc_PACKED *packed_data = malloc(sizeof(glBlendFunc_PACKED));
    packed_data->format = glBlendFunc_FORMAT;
    packed_data->func = glBlendFunc;
    packed_data->args.a1 = sfactor;
    packed_data->args.a2 = dfactor;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBufferData
static inline void push_glBufferData(glBufferData_ARG_EXPAND) {
    glBufferData_PACKED *packed_data = malloc(sizeof(glBufferData_PACKED));
    packed_data->format = glBufferData_FORMAT;
    packed_data->func = glBufferData;
    packed_data->args.a1 = target;
    packed_data->args.a2 = size;
    packed_data->args.a3 = data;
    packed_data->args.a4 = usage;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBufferSubData
static inline void push_glBufferSubData(glBufferSubData_ARG_EXPAND) {
    glBufferSubData_PACKED *packed_data = malloc(sizeof(glBufferSubData_PACKED));
    packed_data->format = glBufferSubData_FORMAT;
    packed_data->func = glBufferSubData;
    packed_data->args.a1 = target;
    packed_data->args.a2 = offset;
    packed_data->args.a3 = size;
    packed_data->args.a4 = data;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClear
static inline void push_glClear(glClear_ARG_EXPAND) {
    glClear_PACKED *packed_data = malloc(sizeof(glClear_PACKED));
    packed_data->format = glClear_FORMAT;
    packed_data->func = glClear;
    packed_data->args.a1 = mask;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClearColor
static inline void push_glClearColor(glClearColor_ARG_EXPAND) {
    glClearColor_PACKED *packed_data = malloc(sizeof(glClearColor_PACKED));
    packed_data->format = glClearColor_FORMAT;
    packed_data->func = glClearColor;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClearColorx
static inline void push_glClearColorx(glClearColorx_ARG_EXPAND) {
    glClearColorx_PACKED *packed_data = malloc(sizeof(glClearColorx_PACKED));
    packed_data->format = glClearColorx_FORMAT;
    packed_data->func = glClearColorx;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClearDepthf
static inline void push_glClearDepthf(glClearDepthf_ARG_EXPAND) {
    glClearDepthf_PACKED *packed_data = malloc(sizeof(glClearDepthf_PACKED));
    packed_data->format = glClearDepthf_FORMAT;
    packed_data->func = glClearDepthf;
    packed_data->args.a1 = depth;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClearDepthx
static inline void push_glClearDepthx(glClearDepthx_ARG_EXPAND) {
    glClearDepthx_PACKED *packed_data = malloc(sizeof(glClearDepthx_PACKED));
    packed_data->format = glClearDepthx_FORMAT;
    packed_data->func = glClearDepthx;
    packed_data->args.a1 = depth;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClearStencil
static inline void push_glClearStencil(glClearStencil_ARG_EXPAND) {
    glClearStencil_PACKED *packed_data = malloc(sizeof(glClearStencil_PACKED));
    packed_data->format = glClearStencil_FORMAT;
    packed_data->func = glClearStencil;
    packed_data->args.a1 = s;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClientActiveTexture
static inline void push_glClientActiveTexture(glClientActiveTexture_ARG_EXPAND) {
    glClientActiveTexture_PACKED *packed_data = malloc(sizeof(glClientActiveTexture_PACKED));
    packed_data->format = glClientActiveTexture_FORMAT;
    packed_data->func = glClientActiveTexture;
    packed_data->args.a1 = texture;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClipPlanef
static inline void push_glClipPlanef(glClipPlanef_ARG_EXPAND) {
    glClipPlanef_PACKED *packed_data = malloc(sizeof(glClipPlanef_PACKED));
    packed_data->format = glClipPlanef_FORMAT;
    packed_data->func = glClipPlanef;
    packed_data->args.a1 = plane;
    packed_data->args.a2 = equation;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glClipPlanex
static inline void push_glClipPlanex(glClipPlanex_ARG_EXPAND) {
    glClipPlanex_PACKED *packed_data = malloc(sizeof(glClipPlanex_PACKED));
    packed_data->format = glClipPlanex_FORMAT;
    packed_data->func = glClipPlanex;
    packed_data->args.a1 = plane;
    packed_data->args.a2 = equation;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glColor4f
static inline void push_glColor4f(glColor4f_ARG_EXPAND) {
    glColor4f_PACKED *packed_data = malloc(sizeof(glColor4f_PACKED));
    packed_data->format = glColor4f_FORMAT;
    packed_data->func = glColor4f;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glColor4ub
static inline void push_glColor4ub(glColor4ub_ARG_EXPAND) {
    glColor4ub_PACKED *packed_data = malloc(sizeof(glColor4ub_PACKED));
    packed_data->format = glColor4ub_FORMAT;
    packed_data->func = glColor4ub;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glColor4x
static inline void push_glColor4x(glColor4x_ARG_EXPAND) {
    glColor4x_PACKED *packed_data = malloc(sizeof(glColor4x_PACKED));
    packed_data->format = glColor4x_FORMAT;
    packed_data->func = glColor4x;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glColorMask
static inline void push_glColorMask(glColorMask_ARG_EXPAND) {
    glColorMask_PACKED *packed_data = malloc(sizeof(glColorMask_PACKED));
    packed_data->format = glColorMask_FORMAT;
    packed_data->func = glColorMask;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glColorPointer
static inline void push_glColorPointer(glColorPointer_ARG_EXPAND) {
    glColorPointer_PACKED *packed_data = malloc(sizeof(glColorPointer_PACKED));
    packed_data->format = glColorPointer_FORMAT;
    packed_data->func = glColorPointer;
    packed_data->args.a1 = size;
    packed_data->args.a2 = type;
    packed_data->args.a3 = stride;
    packed_data->args.a4 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCompressedTexImage2D
static inline void push_glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND) {
    glCompressedTexImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexImage2D_PACKED));
    packed_data->format = glCompressedTexImage2D_FORMAT;
    packed_data->func = glCompressedTexImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = internalformat;
    packed_data->args.a4 = width;
    packed_data->args.a5 = height;
    packed_data->args.a6 = border;
    packed_data->args.a7 = imageSize;
    packed_data->args.a8 = data;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCompressedTexSubImage2D
static inline void push_glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND) {
    glCompressedTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexSubImage2D_PACKED));
    packed_data->format = glCompressedTexSubImage2D_FORMAT;
    packed_data->func = glCompressedTexSubImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = xoffset;
    packed_data->args.a4 = yoffset;
    packed_data->args.a5 = width;
    packed_data->args.a6 = height;
    packed_data->args.a7 = format;
    packed_data->args.a8 = imageSize;
    packed_data->args.a9 = data;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCopyTexImage2D
static inline void push_glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND) {
    glCopyTexImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexImage2D_PACKED));
    packed_data->format = glCopyTexImage2D_FORMAT;
    packed_data->func = glCopyTexImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = internalformat;
    packed_data->args.a4 = x;
    packed_data->args.a5 = y;
    packed_data->args.a6 = width;
    packed_data->args.a7 = height;
    packed_data->args.a8 = border;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCopyTexSubImage2D
static inline void push_glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND) {
    glCopyTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexSubImage2D_PACKED));
    packed_data->format = glCopyTexSubImage2D_FORMAT;
    packed_data->func = glCopyTexSubImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = xoffset;
    packed_data->args.a4 = yoffset;
    packed_data->args.a5 = x;
    packed_data->args.a6 = y;
    packed_data->args.a7 = width;
    packed_data->args.a8 = height;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCullFace
static inline void push_glCullFace(glCullFace_ARG_EXPAND) {
    glCullFace_PACKED *packed_data = malloc(sizeof(glCullFace_PACKED));
    packed_data->format = glCullFace_FORMAT;
    packed_data->func = glCullFace;
    packed_data->args.a1 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteBuffers
static inline void push_glDeleteBuffers(glDeleteBuffers_ARG_EXPAND) {
    glDeleteBuffers_PACKED *packed_data = malloc(sizeof(glDeleteBuffers_PACKED));
    packed_data->format = glDeleteBuffers_FORMAT;
    packed_data->func = glDeleteBuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = buffers;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteTextures
static inline void push_glDeleteTextures(glDeleteTextures_ARG_EXPAND) {
    glDeleteTextures_PACKED *packed_data = malloc(sizeof(glDeleteTextures_PACKED));
    packed_data->format = glDeleteTextures_FORMAT;
    packed_data->func = glDeleteTextures;
    packed_data->args.a1 = n;
    packed_data->args.a2 = textures;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDepthFunc
static inline void push_glDepthFunc(glDepthFunc_ARG_EXPAND) {
    glDepthFunc_PACKED *packed_data = malloc(sizeof(glDepthFunc_PACKED));
    packed_data->format = glDepthFunc_FORMAT;
    packed_data->func = glDepthFunc;
    packed_data->args.a1 = func;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDepthMask
static inline void push_glDepthMask(glDepthMask_ARG_EXPAND) {
    glDepthMask_PACKED *packed_data = malloc(sizeof(glDepthMask_PACKED));
    packed_data->format = glDepthMask_FORMAT;
    packed_data->func = glDepthMask;
    packed_data->args.a1 = flag;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDepthRangef
static inline void push_glDepthRangef(glDepthRangef_ARG_EXPAND) {
    glDepthRangef_PACKED *packed_data = malloc(sizeof(glDepthRangef_PACKED));
    packed_data->format = glDepthRangef_FORMAT;
    packed_data->func = glDepthRangef;
    packed_data->args.a1 = near;
    packed_data->args.a2 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDepthRangex
static inline void push_glDepthRangex(glDepthRangex_ARG_EXPAND) {
    glDepthRangex_PACKED *packed_data = malloc(sizeof(glDepthRangex_PACKED));
    packed_data->format = glDepthRangex_FORMAT;
    packed_data->func = glDepthRangex;
    packed_data->args.a1 = near;
    packed_data->args.a2 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDisable
static inline void push_glDisable(glDisable_ARG_EXPAND) {
    glDisable_PACKED *packed_data = malloc(sizeof(glDisable_PACKED));
    packed_data->format = glDisable_FORMAT;
    packed_data->func = glDisable;
    packed_data->args.a1 = cap;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDisableClientState
static inline void push_glDisableClientState(glDisableClientState_ARG_EXPAND) {
    glDisableClientState_PACKED *packed_data = malloc(sizeof(glDisableClientState_PACKED));
    packed_data->format = glDisableClientState_FORMAT;
    packed_data->func = glDisableClientState;
    packed_data->args.a1 = array;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDrawArrays
static inline void push_glDrawArrays(glDrawArrays_ARG_EXPAND) {
    glDrawArrays_PACKED *packed_data = malloc(sizeof(glDrawArrays_PACKED));
    packed_data->format = glDrawArrays_FORMAT;
    packed_data->func = glDrawArrays;
    packed_data->args.a1 = mode;
    packed_data->args.a2 = first;
    packed_data->args.a3 = count;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDrawElements
static inline void push_glDrawElements(glDrawElements_ARG_EXPAND) {
    glDrawElements_PACKED *packed_data = malloc(sizeof(glDrawElements_PACKED));
    packed_data->format = glDrawElements_FORMAT;
    packed_data->func = glDrawElements;
    packed_data->args.a1 = mode;
    packed_data->args.a2 = count;
    packed_data->args.a3 = type;
    packed_data->args.a4 = indices;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glEnable
static inline void push_glEnable(glEnable_ARG_EXPAND) {
    glEnable_PACKED *packed_data = malloc(sizeof(glEnable_PACKED));
    packed_data->format = glEnable_FORMAT;
    packed_data->func = glEnable;
    packed_data->args.a1 = cap;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glEnableClientState
static inline void push_glEnableClientState(glEnableClientState_ARG_EXPAND) {
    glEnableClientState_PACKED *packed_data = malloc(sizeof(glEnableClientState_PACKED));
    packed_data->format = glEnableClientState_FORMAT;
    packed_data->func = glEnableClientState;
    packed_data->args.a1 = array;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFinish
static inline void push_glFinish(glFinish_ARG_EXPAND) {
    glFinish_PACKED *packed_data = malloc(sizeof(glFinish_PACKED));
    packed_data->format = glFinish_FORMAT;
    packed_data->func = glFinish;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFlush
static inline void push_glFlush(glFlush_ARG_EXPAND) {
    glFlush_PACKED *packed_data = malloc(sizeof(glFlush_PACKED));
    packed_data->format = glFlush_FORMAT;
    packed_data->func = glFlush;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFogf
static inline void push_glFogf(glFogf_ARG_EXPAND) {
    glFogf_PACKED *packed_data = malloc(sizeof(glFogf_PACKED));
    packed_data->format = glFogf_FORMAT;
    packed_data->func = glFogf;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFogfv
static inline void push_glFogfv(glFogfv_ARG_EXPAND) {
    glFogfv_PACKED *packed_data = malloc(sizeof(glFogfv_PACKED));
    packed_data->format = glFogfv_FORMAT;
    packed_data->func = glFogfv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFogx
static inline void push_glFogx(glFogx_ARG_EXPAND) {
    glFogx_PACKED *packed_data = malloc(sizeof(glFogx_PACKED));
    packed_data->format = glFogx_FORMAT;
    packed_data->func = glFogx;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFogxv
static inline void push_glFogxv(glFogxv_ARG_EXPAND) {
    glFogxv_PACKED *packed_data = malloc(sizeof(glFogxv_PACKED));
    packed_data->format = glFogxv_FORMAT;
    packed_data->func = glFogxv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFrontFace
static inline void push_glFrontFace(glFrontFace_ARG_EXPAND) {
    glFrontFace_PACKED *packed_data = malloc(sizeof(glFrontFace_PACKED));
    packed_data->format = glFrontFace_FORMAT;
    packed_data->func = glFrontFace;
    packed_data->args.a1 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFrustumf
static inline void push_glFrustumf(glFrustumf_ARG_EXPAND) {
    glFrustumf_PACKED *packed_data = malloc(sizeof(glFrustumf_PACKED));
    packed_data->format = glFrustumf_FORMAT;
    packed_data->func = glFrustumf;
    packed_data->args.a1 = left;
    packed_data->args.a2 = right;
    packed_data->args.a3 = bottom;
    packed_data->args.a4 = top;
    packed_data->args.a5 = near;
    packed_data->args.a6 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFrustumx
static inline void push_glFrustumx(glFrustumx_ARG_EXPAND) {
    glFrustumx_PACKED *packed_data = malloc(sizeof(glFrustumx_PACKED));
    packed_data->format = glFrustumx_FORMAT;
    packed_data->func = glFrustumx;
    packed_data->args.a1 = left;
    packed_data->args.a2 = right;
    packed_data->args.a3 = bottom;
    packed_data->args.a4 = top;
    packed_data->args.a5 = near;
    packed_data->args.a6 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGenBuffers
static inline void push_glGenBuffers(glGenBuffers_ARG_EXPAND) {
    glGenBuffers_PACKED *packed_data = malloc(sizeof(glGenBuffers_PACKED));
    packed_data->format = glGenBuffers_FORMAT;
    packed_data->func = glGenBuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = buffers;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGenTextures
static inline void push_glGenTextures(glGenTextures_ARG_EXPAND) {
    glGenTextures_PACKED *packed_data = malloc(sizeof(glGenTextures_PACKED));
    packed_data->format = glGenTextures_FORMAT;
    packed_data->func = glGenTextures;
    packed_data->args.a1 = n;
    packed_data->args.a2 = textures;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetBooleanv
static inline void push_glGetBooleanv(glGetBooleanv_ARG_EXPAND) {
    glGetBooleanv_PACKED *packed_data = malloc(sizeof(glGetBooleanv_PACKED));
    packed_data->format = glGetBooleanv_FORMAT;
    packed_data->func = glGetBooleanv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetBufferParameteriv
static inline void push_glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND) {
    glGetBufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetBufferParameteriv_PACKED));
    packed_data->format = glGetBufferParameteriv_FORMAT;
    packed_data->func = glGetBufferParameteriv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetClipPlanef
static inline void push_glGetClipPlanef(glGetClipPlanef_ARG_EXPAND) {
    glGetClipPlanef_PACKED *packed_data = malloc(sizeof(glGetClipPlanef_PACKED));
    packed_data->format = glGetClipPlanef_FORMAT;
    packed_data->func = glGetClipPlanef;
    packed_data->args.a1 = plane;
    packed_data->args.a2 = equation;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetClipPlanex
static inline void push_glGetClipPlanex(glGetClipPlanex_ARG_EXPAND) {
    glGetClipPlanex_PACKED *packed_data = malloc(sizeof(glGetClipPlanex_PACKED));
    packed_data->format = glGetClipPlanex_FORMAT;
    packed_data->func = glGetClipPlanex;
    packed_data->args.a1 = plane;
    packed_data->args.a2 = equation;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetError
static inline void push_glGetError(glGetError_ARG_EXPAND) {
    glGetError_PACKED *packed_data = malloc(sizeof(glGetError_PACKED));
    packed_data->format = glGetError_FORMAT;
    packed_data->func = glGetError;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetFixedv
static inline void push_glGetFixedv(glGetFixedv_ARG_EXPAND) {
    glGetFixedv_PACKED *packed_data = malloc(sizeof(glGetFixedv_PACKED));
    packed_data->format = glGetFixedv_FORMAT;
    packed_data->func = glGetFixedv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetFloatv
static inline void push_glGetFloatv(glGetFloatv_ARG_EXPAND) {
    glGetFloatv_PACKED *packed_data = malloc(sizeof(glGetFloatv_PACKED));
    packed_data->format = glGetFloatv_FORMAT;
    packed_data->func = glGetFloatv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetIntegerv
static inline void push_glGetIntegerv(glGetIntegerv_ARG_EXPAND) {
    glGetIntegerv_PACKED *packed_data = malloc(sizeof(glGetIntegerv_PACKED));
    packed_data->format = glGetIntegerv_FORMAT;
    packed_data->func = glGetIntegerv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetLightfv
static inline void push_glGetLightfv(glGetLightfv_ARG_EXPAND) {
    glGetLightfv_PACKED *packed_data = malloc(sizeof(glGetLightfv_PACKED));
    packed_data->format = glGetLightfv_FORMAT;
    packed_data->func = glGetLightfv;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetLightxv
static inline void push_glGetLightxv(glGetLightxv_ARG_EXPAND) {
    glGetLightxv_PACKED *packed_data = malloc(sizeof(glGetLightxv_PACKED));
    packed_data->format = glGetLightxv_FORMAT;
    packed_data->func = glGetLightxv;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetMaterialfv
static inline void push_glGetMaterialfv(glGetMaterialfv_ARG_EXPAND) {
    glGetMaterialfv_PACKED *packed_data = malloc(sizeof(glGetMaterialfv_PACKED));
    packed_data->format = glGetMaterialfv_FORMAT;
    packed_data->func = glGetMaterialfv;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetMaterialxv
static inline void push_glGetMaterialxv(glGetMaterialxv_ARG_EXPAND) {
    glGetMaterialxv_PACKED *packed_data = malloc(sizeof(glGetMaterialxv_PACKED));
    packed_data->format = glGetMaterialxv_FORMAT;
    packed_data->func = glGetMaterialxv;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetPointerv
static inline void push_glGetPointerv(glGetPointerv_ARG_EXPAND) {
    glGetPointerv_PACKED *packed_data = malloc(sizeof(glGetPointerv_PACKED));
    packed_data->format = glGetPointerv_FORMAT;
    packed_data->func = glGetPointerv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetString
static inline void push_glGetString(glGetString_ARG_EXPAND) {
    glGetString_PACKED *packed_data = malloc(sizeof(glGetString_PACKED));
    packed_data->format = glGetString_FORMAT;
    packed_data->func = glGetString;
    packed_data->args.a1 = name;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexEnvfv
static inline void push_glGetTexEnvfv(glGetTexEnvfv_ARG_EXPAND) {
    glGetTexEnvfv_PACKED *packed_data = malloc(sizeof(glGetTexEnvfv_PACKED));
    packed_data->format = glGetTexEnvfv_FORMAT;
    packed_data->func = glGetTexEnvfv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexEnviv
static inline void push_glGetTexEnviv(glGetTexEnviv_ARG_EXPAND) {
    glGetTexEnviv_PACKED *packed_data = malloc(sizeof(glGetTexEnviv_PACKED));
    packed_data->format = glGetTexEnviv_FORMAT;
    packed_data->func = glGetTexEnviv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexEnvxv
static inline void push_glGetTexEnvxv(glGetTexEnvxv_ARG_EXPAND) {
    glGetTexEnvxv_PACKED *packed_data = malloc(sizeof(glGetTexEnvxv_PACKED));
    packed_data->format = glGetTexEnvxv_FORMAT;
    packed_data->func = glGetTexEnvxv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexParameterfv
static inline void push_glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND) {
    glGetTexParameterfv_PACKED *packed_data = malloc(sizeof(glGetTexParameterfv_PACKED));
    packed_data->format = glGetTexParameterfv_FORMAT;
    packed_data->func = glGetTexParameterfv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexParameteriv
static inline void push_glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND) {
    glGetTexParameteriv_PACKED *packed_data = malloc(sizeof(glGetTexParameteriv_PACKED));
    packed_data->format = glGetTexParameteriv_FORMAT;
    packed_data->func = glGetTexParameteriv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetTexParameterxv
static inline void push_glGetTexParameterxv(glGetTexParameterxv_ARG_EXPAND) {
    glGetTexParameterxv_PACKED *packed_data = malloc(sizeof(glGetTexParameterxv_PACKED));
    packed_data->format = glGetTexParameterxv_FORMAT;
    packed_data->func = glGetTexParameterxv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glHint
static inline void push_glHint(glHint_ARG_EXPAND) {
    glHint_PACKED *packed_data = malloc(sizeof(glHint_PACKED));
    packed_data->format = glHint_FORMAT;
    packed_data->func = glHint;
    packed_data->args.a1 = target;
    packed_data->args.a2 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsBuffer
static inline void push_glIsBuffer(glIsBuffer_ARG_EXPAND) {
    glIsBuffer_PACKED *packed_data = malloc(sizeof(glIsBuffer_PACKED));
    packed_data->format = glIsBuffer_FORMAT;
    packed_data->func = glIsBuffer;
    packed_data->args.a1 = buffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsEnabled
static inline void push_glIsEnabled(glIsEnabled_ARG_EXPAND) {
    glIsEnabled_PACKED *packed_data = malloc(sizeof(glIsEnabled_PACKED));
    packed_data->format = glIsEnabled_FORMAT;
    packed_data->func = glIsEnabled;
    packed_data->args.a1 = cap;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsTexture
static inline void push_glIsTexture(glIsTexture_ARG_EXPAND) {
    glIsTexture_PACKED *packed_data = malloc(sizeof(glIsTexture_PACKED));
    packed_data->format = glIsTexture_FORMAT;
    packed_data->func = glIsTexture;
    packed_data->args.a1 = texture;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightModelf
static inline void push_glLightModelf(glLightModelf_ARG_EXPAND) {
    glLightModelf_PACKED *packed_data = malloc(sizeof(glLightModelf_PACKED));
    packed_data->format = glLightModelf_FORMAT;
    packed_data->func = glLightModelf;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightModelfv
static inline void push_glLightModelfv(glLightModelfv_ARG_EXPAND) {
    glLightModelfv_PACKED *packed_data = malloc(sizeof(glLightModelfv_PACKED));
    packed_data->format = glLightModelfv_FORMAT;
    packed_data->func = glLightModelfv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightModelx
static inline void push_glLightModelx(glLightModelx_ARG_EXPAND) {
    glLightModelx_PACKED *packed_data = malloc(sizeof(glLightModelx_PACKED));
    packed_data->format = glLightModelx_FORMAT;
    packed_data->func = glLightModelx;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightModelxv
static inline void push_glLightModelxv(glLightModelxv_ARG_EXPAND) {
    glLightModelxv_PACKED *packed_data = malloc(sizeof(glLightModelxv_PACKED));
    packed_data->format = glLightModelxv_FORMAT;
    packed_data->func = glLightModelxv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightf
static inline void push_glLightf(glLightf_ARG_EXPAND) {
    glLightf_PACKED *packed_data = malloc(sizeof(glLightf_PACKED));
    packed_data->format = glLightf_FORMAT;
    packed_data->func = glLightf;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightfv
static inline void push_glLightfv(glLightfv_ARG_EXPAND) {
    glLightfv_PACKED *packed_data = malloc(sizeof(glLightfv_PACKED));
    packed_data->format = glLightfv_FORMAT;
    packed_data->func = glLightfv;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightx
static inline void push_glLightx(glLightx_ARG_EXPAND) {
    glLightx_PACKED *packed_data = malloc(sizeof(glLightx_PACKED));
    packed_data->format = glLightx_FORMAT;
    packed_data->func = glLightx;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLightxv
static inline void push_glLightxv(glLightxv_ARG_EXPAND) {
    glLightxv_PACKED *packed_data = malloc(sizeof(glLightxv_PACKED));
    packed_data->format = glLightxv_FORMAT;
    packed_data->func = glLightxv;
    packed_data->args.a1 = light;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLineWidth
static inline void push_glLineWidth(glLineWidth_ARG_EXPAND) {
    glLineWidth_PACKED *packed_data = malloc(sizeof(glLineWidth_PACKED));
    packed_data->format = glLineWidth_FORMAT;
    packed_data->func = glLineWidth;
    packed_data->args.a1 = width;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLineWidthx
static inline void push_glLineWidthx(glLineWidthx_ARG_EXPAND) {
    glLineWidthx_PACKED *packed_data = malloc(sizeof(glLineWidthx_PACKED));
    packed_data->format = glLineWidthx_FORMAT;
    packed_data->func = glLineWidthx;
    packed_data->args.a1 = width;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLoadIdentity
static inline void push_glLoadIdentity(glLoadIdentity_ARG_EXPAND) {
    glLoadIdentity_PACKED *packed_data = malloc(sizeof(glLoadIdentity_PACKED));
    packed_data->format = glLoadIdentity_FORMAT;
    packed_data->func = glLoadIdentity;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLoadMatrixf
static inline void push_glLoadMatrixf(glLoadMatrixf_ARG_EXPAND) {
    glLoadMatrixf_PACKED *packed_data = malloc(sizeof(glLoadMatrixf_PACKED));
    packed_data->format = glLoadMatrixf_FORMAT;
    packed_data->func = glLoadMatrixf;
    packed_data->args.a1 = m;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLoadMatrixx
static inline void push_glLoadMatrixx(glLoadMatrixx_ARG_EXPAND) {
    glLoadMatrixx_PACKED *packed_data = malloc(sizeof(glLoadMatrixx_PACKED));
    packed_data->format = glLoadMatrixx_FORMAT;
    packed_data->func = glLoadMatrixx;
    packed_data->args.a1 = m;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLogicOp
static inline void push_glLogicOp(glLogicOp_ARG_EXPAND) {
    glLogicOp_PACKED *packed_data = malloc(sizeof(glLogicOp_PACKED));
    packed_data->format = glLogicOp_FORMAT;
    packed_data->func = glLogicOp;
    packed_data->args.a1 = opcode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMaterialf
static inline void push_glMaterialf(glMaterialf_ARG_EXPAND) {
    glMaterialf_PACKED *packed_data = malloc(sizeof(glMaterialf_PACKED));
    packed_data->format = glMaterialf_FORMAT;
    packed_data->func = glMaterialf;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMaterialfv
static inline void push_glMaterialfv(glMaterialfv_ARG_EXPAND) {
    glMaterialfv_PACKED *packed_data = malloc(sizeof(glMaterialfv_PACKED));
    packed_data->format = glMaterialfv_FORMAT;
    packed_data->func = glMaterialfv;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMaterialx
static inline void push_glMaterialx(glMaterialx_ARG_EXPAND) {
    glMaterialx_PACKED *packed_data = malloc(sizeof(glMaterialx_PACKED));
    packed_data->format = glMaterialx_FORMAT;
    packed_data->func = glMaterialx;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMaterialxv
static inline void push_glMaterialxv(glMaterialxv_ARG_EXPAND) {
    glMaterialxv_PACKED *packed_data = malloc(sizeof(glMaterialxv_PACKED));
    packed_data->format = glMaterialxv_FORMAT;
    packed_data->func = glMaterialxv;
    packed_data->args.a1 = face;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMatrixMode
static inline void push_glMatrixMode(glMatrixMode_ARG_EXPAND) {
    glMatrixMode_PACKED *packed_data = malloc(sizeof(glMatrixMode_PACKED));
    packed_data->format = glMatrixMode_FORMAT;
    packed_data->func = glMatrixMode;
    packed_data->args.a1 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMultMatrixf
static inline void push_glMultMatrixf(glMultMatrixf_ARG_EXPAND) {
    glMultMatrixf_PACKED *packed_data = malloc(sizeof(glMultMatrixf_PACKED));
    packed_data->format = glMultMatrixf_FORMAT;
    packed_data->func = glMultMatrixf;
    packed_data->args.a1 = m;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMultMatrixx
static inline void push_glMultMatrixx(glMultMatrixx_ARG_EXPAND) {
    glMultMatrixx_PACKED *packed_data = malloc(sizeof(glMultMatrixx_PACKED));
    packed_data->format = glMultMatrixx_FORMAT;
    packed_data->func = glMultMatrixx;
    packed_data->args.a1 = m;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMultiTexCoord4f
static inline void push_glMultiTexCoord4f(glMultiTexCoord4f_ARG_EXPAND) {
    glMultiTexCoord4f_PACKED *packed_data = malloc(sizeof(glMultiTexCoord4f_PACKED));
    packed_data->format = glMultiTexCoord4f_FORMAT;
    packed_data->func = glMultiTexCoord4f;
    packed_data->args.a1 = target;
    packed_data->args.a2 = s;
    packed_data->args.a3 = t;
    packed_data->args.a4 = r;
    packed_data->args.a5 = q;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glMultiTexCoord4x
static inline void push_glMultiTexCoord4x(glMultiTexCoord4x_ARG_EXPAND) {
    glMultiTexCoord4x_PACKED *packed_data = malloc(sizeof(glMultiTexCoord4x_PACKED));
    packed_data->format = glMultiTexCoord4x_FORMAT;
    packed_data->func = glMultiTexCoord4x;
    packed_data->args.a1 = target;
    packed_data->args.a2 = s;
    packed_data->args.a3 = t;
    packed_data->args.a4 = r;
    packed_data->args.a5 = q;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glNormal3f
static inline void push_glNormal3f(glNormal3f_ARG_EXPAND) {
    glNormal3f_PACKED *packed_data = malloc(sizeof(glNormal3f_PACKED));
    packed_data->format = glNormal3f_FORMAT;
    packed_data->func = glNormal3f;
    packed_data->args.a1 = nx;
    packed_data->args.a2 = ny;
    packed_data->args.a3 = nz;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glNormal3x
static inline void push_glNormal3x(glNormal3x_ARG_EXPAND) {
    glNormal3x_PACKED *packed_data = malloc(sizeof(glNormal3x_PACKED));
    packed_data->format = glNormal3x_FORMAT;
    packed_data->func = glNormal3x;
    packed_data->args.a1 = nx;
    packed_data->args.a2 = ny;
    packed_data->args.a3 = nz;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glNormalPointer
static inline void push_glNormalPointer(glNormalPointer_ARG_EXPAND) {
    glNormalPointer_PACKED *packed_data = malloc(sizeof(glNormalPointer_PACKED));
    packed_data->format = glNormalPointer_FORMAT;
    packed_data->func = glNormalPointer;
    packed_data->args.a1 = type;
    packed_data->args.a2 = stride;
    packed_data->args.a3 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glOrthof
static inline void push_glOrthof(glOrthof_ARG_EXPAND) {
    glOrthof_PACKED *packed_data = malloc(sizeof(glOrthof_PACKED));
    packed_data->format = glOrthof_FORMAT;
    packed_data->func = glOrthof;
    packed_data->args.a1 = left;
    packed_data->args.a2 = right;
    packed_data->args.a3 = bottom;
    packed_data->args.a4 = top;
    packed_data->args.a5 = near;
    packed_data->args.a6 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glOrthox
static inline void push_glOrthox(glOrthox_ARG_EXPAND) {
    glOrthox_PACKED *packed_data = malloc(sizeof(glOrthox_PACKED));
    packed_data->format = glOrthox_FORMAT;
    packed_data->func = glOrthox;
    packed_data->args.a1 = left;
    packed_data->args.a2 = right;
    packed_data->args.a3 = bottom;
    packed_data->args.a4 = top;
    packed_data->args.a5 = near;
    packed_data->args.a6 = far;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPixelStorei
static inline void push_glPixelStorei(glPixelStorei_ARG_EXPAND) {
    glPixelStorei_PACKED *packed_data = malloc(sizeof(glPixelStorei_PACKED));
    packed_data->format = glPixelStorei_FORMAT;
    packed_data->func = glPixelStorei;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointParameterf
static inline void push_glPointParameterf(glPointParameterf_ARG_EXPAND) {
    glPointParameterf_PACKED *packed_data = malloc(sizeof(glPointParameterf_PACKED));
    packed_data->format = glPointParameterf_FORMAT;
    packed_data->func = glPointParameterf;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointParameterfv
static inline void push_glPointParameterfv(glPointParameterfv_ARG_EXPAND) {
    glPointParameterfv_PACKED *packed_data = malloc(sizeof(glPointParameterfv_PACKED));
    packed_data->format = glPointParameterfv_FORMAT;
    packed_data->func = glPointParameterfv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointParameterx
static inline void push_glPointParameterx(glPointParameterx_ARG_EXPAND) {
    glPointParameterx_PACKED *packed_data = malloc(sizeof(glPointParameterx_PACKED));
    packed_data->format = glPointParameterx_FORMAT;
    packed_data->func = glPointParameterx;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointParameterxv
static inline void push_glPointParameterxv(glPointParameterxv_ARG_EXPAND) {
    glPointParameterxv_PACKED *packed_data = malloc(sizeof(glPointParameterxv_PACKED));
    packed_data->format = glPointParameterxv_FORMAT;
    packed_data->func = glPointParameterxv;
    packed_data->args.a1 = pname;
    packed_data->args.a2 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointSize
static inline void push_glPointSize(glPointSize_ARG_EXPAND) {
    glPointSize_PACKED *packed_data = malloc(sizeof(glPointSize_PACKED));
    packed_data->format = glPointSize_FORMAT;
    packed_data->func = glPointSize;
    packed_data->args.a1 = size;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointSizePointerOES
static inline void push_glPointSizePointerOES(glPointSizePointerOES_ARG_EXPAND) {
    glPointSizePointerOES_PACKED *packed_data = malloc(sizeof(glPointSizePointerOES_PACKED));
    packed_data->format = glPointSizePointerOES_FORMAT;
    packed_data->func = glPointSizePointerOES;
    packed_data->args.a1 = type;
    packed_data->args.a2 = stride;
    packed_data->args.a3 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPointSizex
static inline void push_glPointSizex(glPointSizex_ARG_EXPAND) {
    glPointSizex_PACKED *packed_data = malloc(sizeof(glPointSizex_PACKED));
    packed_data->format = glPointSizex_FORMAT;
    packed_data->func = glPointSizex;
    packed_data->args.a1 = size;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPolygonOffset
static inline void push_glPolygonOffset(glPolygonOffset_ARG_EXPAND) {
    glPolygonOffset_PACKED *packed_data = malloc(sizeof(glPolygonOffset_PACKED));
    packed_data->format = glPolygonOffset_FORMAT;
    packed_data->func = glPolygonOffset;
    packed_data->args.a1 = factor;
    packed_data->args.a2 = units;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPolygonOffsetx
static inline void push_glPolygonOffsetx(glPolygonOffsetx_ARG_EXPAND) {
    glPolygonOffsetx_PACKED *packed_data = malloc(sizeof(glPolygonOffsetx_PACKED));
    packed_data->format = glPolygonOffsetx_FORMAT;
    packed_data->func = glPolygonOffsetx;
    packed_data->args.a1 = factor;
    packed_data->args.a2 = units;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPopMatrix
static inline void push_glPopMatrix(glPopMatrix_ARG_EXPAND) {
    glPopMatrix_PACKED *packed_data = malloc(sizeof(glPopMatrix_PACKED));
    packed_data->format = glPopMatrix_FORMAT;
    packed_data->func = glPopMatrix;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glPushMatrix
static inline void push_glPushMatrix(glPushMatrix_ARG_EXPAND) {
    glPushMatrix_PACKED *packed_data = malloc(sizeof(glPushMatrix_PACKED));
    packed_data->format = glPushMatrix_FORMAT;
    packed_data->func = glPushMatrix;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glReadPixels
static inline void push_glReadPixels(glReadPixels_ARG_EXPAND) {
    glReadPixels_PACKED *packed_data = malloc(sizeof(glReadPixels_PACKED));
    packed_data->format = glReadPixels_FORMAT;
    packed_data->func = glReadPixels;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = width;
    packed_data->args.a4 = height;
    packed_data->args.a5 = format;
    packed_data->args.a6 = type;
    packed_data->args.a7 = pixels;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glRotatef
static inline void push_glRotatef(glRotatef_ARG_EXPAND) {
    glRotatef_PACKED *packed_data = malloc(sizeof(glRotatef_PACKED));
    packed_data->format = glRotatef_FORMAT;
    packed_data->func = glRotatef;
    packed_data->args.a1 = angle;
    packed_data->args.a2 = x;
    packed_data->args.a3 = y;
    packed_data->args.a4 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glRotatex
static inline void push_glRotatex(glRotatex_ARG_EXPAND) {
    glRotatex_PACKED *packed_data = malloc(sizeof(glRotatex_PACKED));
    packed_data->format = glRotatex_FORMAT;
    packed_data->func = glRotatex;
    packed_data->args.a1 = angle;
    packed_data->args.a2 = x;
    packed_data->args.a3 = y;
    packed_data->args.a4 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glSampleCoverage
static inline void push_glSampleCoverage(glSampleCoverage_ARG_EXPAND) {
    glSampleCoverage_PACKED *packed_data = malloc(sizeof(glSampleCoverage_PACKED));
    packed_data->format = glSampleCoverage_FORMAT;
    packed_data->func = glSampleCoverage;
    packed_data->args.a1 = value;
    packed_data->args.a2 = invert;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glSampleCoveragex
static inline void push_glSampleCoveragex(glSampleCoveragex_ARG_EXPAND) {
    glSampleCoveragex_PACKED *packed_data = malloc(sizeof(glSampleCoveragex_PACKED));
    packed_data->format = glSampleCoveragex_FORMAT;
    packed_data->func = glSampleCoveragex;
    packed_data->args.a1 = value;
    packed_data->args.a2 = invert;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glScalef
static inline void push_glScalef(glScalef_ARG_EXPAND) {
    glScalef_PACKED *packed_data = malloc(sizeof(glScalef_PACKED));
    packed_data->format = glScalef_FORMAT;
    packed_data->func = glScalef;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glScalex
static inline void push_glScalex(glScalex_ARG_EXPAND) {
    glScalex_PACKED *packed_data = malloc(sizeof(glScalex_PACKED));
    packed_data->format = glScalex_FORMAT;
    packed_data->func = glScalex;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glScissor
static inline void push_glScissor(glScissor_ARG_EXPAND) {
    glScissor_PACKED *packed_data = malloc(sizeof(glScissor_PACKED));
    packed_data->format = glScissor_FORMAT;
    packed_data->func = glScissor;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = width;
    packed_data->args.a4 = height;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glShadeModel
static inline void push_glShadeModel(glShadeModel_ARG_EXPAND) {
    glShadeModel_PACKED *packed_data = malloc(sizeof(glShadeModel_PACKED));
    packed_data->format = glShadeModel_FORMAT;
    packed_data->func = glShadeModel;
    packed_data->args.a1 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glStencilFunc
static inline void push_glStencilFunc(glStencilFunc_ARG_EXPAND) {
    glStencilFunc_PACKED *packed_data = malloc(sizeof(glStencilFunc_PACKED));
    packed_data->format = glStencilFunc_FORMAT;
    packed_data->func = glStencilFunc;
    packed_data->args.a1 = func;
    packed_data->args.a2 = ref;
    packed_data->args.a3 = mask;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glStencilMask
static inline void push_glStencilMask(glStencilMask_ARG_EXPAND) {
    glStencilMask_PACKED *packed_data = malloc(sizeof(glStencilMask_PACKED));
    packed_data->format = glStencilMask_FORMAT;
    packed_data->func = glStencilMask;
    packed_data->args.a1 = mask;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glStencilOp
static inline void push_glStencilOp(glStencilOp_ARG_EXPAND) {
    glStencilOp_PACKED *packed_data = malloc(sizeof(glStencilOp_PACKED));
    packed_data->format = glStencilOp_FORMAT;
    packed_data->func = glStencilOp;
    packed_data->args.a1 = fail;
    packed_data->args.a2 = zfail;
    packed_data->args.a3 = zpass;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexCoordPointer
static inline void push_glTexCoordPointer(glTexCoordPointer_ARG_EXPAND) {
    glTexCoordPointer_PACKED *packed_data = malloc(sizeof(glTexCoordPointer_PACKED));
    packed_data->format = glTexCoordPointer_FORMAT;
    packed_data->func = glTexCoordPointer;
    packed_data->args.a1 = size;
    packed_data->args.a2 = type;
    packed_data->args.a3 = stride;
    packed_data->args.a4 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnvf
static inline void push_glTexEnvf(glTexEnvf_ARG_EXPAND) {
    glTexEnvf_PACKED *packed_data = malloc(sizeof(glTexEnvf_PACKED));
    packed_data->format = glTexEnvf_FORMAT;
    packed_data->func = glTexEnvf;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnvfv
static inline void push_glTexEnvfv(glTexEnvfv_ARG_EXPAND) {
    glTexEnvfv_PACKED *packed_data = malloc(sizeof(glTexEnvfv_PACKED));
    packed_data->format = glTexEnvfv_FORMAT;
    packed_data->func = glTexEnvfv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnvi
static inline void push_glTexEnvi(glTexEnvi_ARG_EXPAND) {
    glTexEnvi_PACKED *packed_data = malloc(sizeof(glTexEnvi_PACKED));
    packed_data->format = glTexEnvi_FORMAT;
    packed_data->func = glTexEnvi;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnviv
static inline void push_glTexEnviv(glTexEnviv_ARG_EXPAND) {
    glTexEnviv_PACKED *packed_data = malloc(sizeof(glTexEnviv_PACKED));
    packed_data->format = glTexEnviv_FORMAT;
    packed_data->func = glTexEnviv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnvx
static inline void push_glTexEnvx(glTexEnvx_ARG_EXPAND) {
    glTexEnvx_PACKED *packed_data = malloc(sizeof(glTexEnvx_PACKED));
    packed_data->format = glTexEnvx_FORMAT;
    packed_data->func = glTexEnvx;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexEnvxv
static inline void push_glTexEnvxv(glTexEnvxv_ARG_EXPAND) {
    glTexEnvxv_PACKED *packed_data = malloc(sizeof(glTexEnvxv_PACKED));
    packed_data->format = glTexEnvxv_FORMAT;
    packed_data->func = glTexEnvxv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexImage2D
static inline void push_glTexImage2D(glTexImage2D_ARG_EXPAND) {
    glTexImage2D_PACKED *packed_data = malloc(sizeof(glTexImage2D_PACKED));
    packed_data->format = glTexImage2D_FORMAT;
    packed_data->func = glTexImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = internalformat;
    packed_data->args.a4 = width;
    packed_data->args.a5 = height;
    packed_data->args.a6 = border;
    packed_data->args.a7 = format;
    packed_data->args.a8 = type;
    packed_data->args.a9 = pixels;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameterf
static inline void push_glTexParameterf(glTexParameterf_ARG_EXPAND) {
    glTexParameterf_PACKED *packed_data = malloc(sizeof(glTexParameterf_PACKED));
    packed_data->format = glTexParameterf_FORMAT;
    packed_data->func = glTexParameterf;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameterfv
static inline void push_glTexParameterfv(glTexParameterfv_ARG_EXPAND) {
    glTexParameterfv_PACKED *packed_data = malloc(sizeof(glTexParameterfv_PACKED));
    packed_data->format = glTexParameterfv_FORMAT;
    packed_data->func = glTexParameterfv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameteri
static inline void push_glTexParameteri(glTexParameteri_ARG_EXPAND) {
    glTexParameteri_PACKED *packed_data = malloc(sizeof(glTexParameteri_PACKED));
    packed_data->format = glTexParameteri_FORMAT;
    packed_data->func = glTexParameteri;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameteriv
static inline void push_glTexParameteriv(glTexParameteriv_ARG_EXPAND) {
    glTexParameteriv_PACKED *packed_data = malloc(sizeof(glTexParameteriv_PACKED));
    packed_data->format = glTexParameteriv_FORMAT;
    packed_data->func = glTexParameteriv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameterx
static inline void push_glTexParameterx(glTexParameterx_ARG_EXPAND) {
    glTexParameterx_PACKED *packed_data = malloc(sizeof(glTexParameterx_PACKED));
    packed_data->format = glTexParameterx_FORMAT;
    packed_data->func = glTexParameterx;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = param;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexParameterxv
static inline void push_glTexParameterxv(glTexParameterxv_ARG_EXPAND) {
    glTexParameterxv_PACKED *packed_data = malloc(sizeof(glTexParameterxv_PACKED));
    packed_data->format = glTexParameterxv_FORMAT;
    packed_data->func = glTexParameterxv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTexSubImage2D
static inline void push_glTexSubImage2D(glTexSubImage2D_ARG_EXPAND) {
    glTexSubImage2D_PACKED *packed_data = malloc(sizeof(glTexSubImage2D_PACKED));
    packed_data->format = glTexSubImage2D_FORMAT;
    packed_data->func = glTexSubImage2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = level;
    packed_data->args.a3 = xoffset;
    packed_data->args.a4 = yoffset;
    packed_data->args.a5 = width;
    packed_data->args.a6 = height;
    packed_data->args.a7 = format;
    packed_data->args.a8 = type;
    packed_data->args.a9 = pixels;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTranslatef
static inline void push_glTranslatef(glTranslatef_ARG_EXPAND) {
    glTranslatef_PACKED *packed_data = malloc(sizeof(glTranslatef_PACKED));
    packed_data->format = glTranslatef_FORMAT;
    packed_data->func = glTranslatef;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glTranslatex
static inline void push_glTranslatex(glTranslatex_ARG_EXPAND) {
    glTranslatex_PACKED *packed_data = malloc(sizeof(glTranslatex_PACKED));
    packed_data->format = glTranslatex_FORMAT;
    packed_data->func = glTranslatex;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexPointer
static inline void push_glVertexPointer(glVertexPointer_ARG_EXPAND) {
    glVertexPointer_PACKED *packed_data = malloc(sizeof(glVertexPointer_PACKED));
    packed_data->format = glVertexPointer_FORMAT;
    packed_data->func = glVertexPointer;
    packed_data->args.a1 = size;
    packed_data->args.a2 = type;
    packed_data->args.a3 = stride;
    packed_data->args.a4 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glViewport
static inline void push_glViewport(glViewport_ARG_EXPAND) {
    glViewport_PACKED *packed_data = malloc(sizeof(glViewport_PACKED));
    packed_data->format = glViewport_FORMAT;
    packed_data->func = glViewport;
    packed_data->args.a1 = x;
    packed_data->args.a2 = y;
    packed_data->args.a3 = width;
    packed_data->args.a4 = height;
    glPushCall((void *)packed_data);
}
#endif

#endif
#endif
