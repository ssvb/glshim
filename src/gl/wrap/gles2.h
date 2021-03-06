#ifdef USE_ES2
#include "../gl.h"

#ifndef GLES2WRAP_H
#define GLES2WRAP_H

typedef struct {
    int format;
    void *func;
    void *args;
} UnknownCall;

enum FORMAT {
    FORMAT_void_GLenum,
    FORMAT_void_GLuint_GLuint,
    FORMAT_void_GLuint_GLuint_const_GLchar___GENPT__,
    FORMAT_void_GLenum_GLuint,
    FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf,
    FORMAT_void_GLenum_GLenum,
    FORMAT_void_GLenum_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum,
    FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__,
    FORMAT_GLenum_GLenum,
    FORMAT_void_GLbitfield,
    FORMAT_void_GLclampf,
    FORMAT_void_GLint,
    FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean,
    FORMAT_void_GLuint,
    FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei,
    FORMAT_GLuint,
    FORMAT_GLuint_GLenum,
    FORMAT_void_GLsizei_const_GLuint___GENPT__,
    FORMAT_void_GLboolean,
    FORMAT_void_GLclampf_GLclampf,
    FORMAT_void_GLenum_GLint_GLsizei,
    FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__,
    FORMAT_void,
    FORMAT_void_GLenum_GLenum_GLenum_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint,
    FORMAT_void_GLsizei_GLuint___GENPT__,
    FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__,
    FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__,
    FORMAT_GLint_GLuint_const_GLchar___GENPT__,
    FORMAT_void_GLenum_GLboolean___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT__,
    FORMAT_GLenum,
    FORMAT_void_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLint___GENPT__,
    FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__,
    FORMAT_void_GLuint_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__,
    FORMAT_const_GLubyte___GENPT___GLenum,
    FORMAT_void_GLenum_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLint_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLint_GLint___GENPT__,
    FORMAT_void_GLuint_GLenum_GLvoid___GENPT____GENPT__,
    FORMAT_void_GLuint_GLenum_GLfloat___GENPT__,
    FORMAT_GLboolean_GLuint,
    FORMAT_GLboolean_GLenum,
    FORMAT_void_GLfloat,
    FORMAT_void_GLenum_GLint,
    FORMAT_void_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLenum_GLsizei_GLsizei,
    FORMAT_void_GLclampf_GLboolean,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei,
    FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLuint,
    FORMAT_void_GLenum_GLenum_GLint_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfloat,
    FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint,
    FORMAT_void_GLenum_GLenum_const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLint_GLfloat,
    FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__,
    FORMAT_void_GLint_GLint,
    FORMAT_void_GLint_GLsizei_const_GLint___GENPT__,
    FORMAT_void_GLint_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint,
    FORMAT_void_GLint_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint_GLint,
    FORMAT_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint_GLint_GLint,
    FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLfloat,
    FORMAT_void_GLuint_const_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__,
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
typedef void (*FUNC_void_GLuint_GLuint)(GLuint program, GLuint shader);
typedef struct {
    GLuint a1;
    GLuint a2;
} ARGS_void_GLuint_GLuint;
typedef struct {
    int format;
    FUNC_void_GLuint_GLuint func;
    ARGS_void_GLuint_GLuint args;
} PACKED_void_GLuint_GLuint;
typedef void (*FUNC_void_GLuint_GLuint_const_GLchar___GENPT__)(GLuint program, GLuint index, const GLchar * name);
typedef struct {
    GLuint a1;
    GLuint a2;
    const GLchar * a3;
} ARGS_void_GLuint_GLuint_const_GLchar___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLuint_const_GLchar___GENPT__ func;
    ARGS_void_GLuint_GLuint_const_GLchar___GENPT__ args;
} PACKED_void_GLuint_GLuint_const_GLchar___GENPT__;
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
typedef void (*FUNC_void_GLenum_GLenum)(GLenum modeRGB, GLenum modeA);
typedef struct {
    GLenum a1;
    GLenum a2;
} ARGS_void_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum func;
    ARGS_void_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLenum)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLenum a4;
} ARGS_void_GLenum_GLenum_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum_GLenum func;
    ARGS_void_GLenum_GLenum_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum_GLenum_GLenum;
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
typedef GLenum (*FUNC_GLenum_GLenum)(GLenum target);
typedef struct {
    GLenum a1;
} ARGS_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_GLenum_GLenum func;
    ARGS_GLenum_GLenum args;
} PACKED_GLenum_GLenum;
typedef void (*FUNC_void_GLbitfield)(GLbitfield mask);
typedef struct {
    GLbitfield a1;
} ARGS_void_GLbitfield;
typedef struct {
    int format;
    FUNC_void_GLbitfield func;
    ARGS_void_GLbitfield args;
} PACKED_void_GLbitfield;
typedef void (*FUNC_void_GLclampf)(GLclampf depth);
typedef struct {
    GLclampf a1;
} ARGS_void_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf func;
    ARGS_void_GLclampf args;
} PACKED_void_GLclampf;
typedef void (*FUNC_void_GLint)(GLint s);
typedef struct {
    GLint a1;
} ARGS_void_GLint;
typedef struct {
    int format;
    FUNC_void_GLint func;
    ARGS_void_GLint args;
} PACKED_void_GLint;
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
typedef void (*FUNC_void_GLuint)(GLuint shader);
typedef struct {
    GLuint a1;
} ARGS_void_GLuint;
typedef struct {
    int format;
    FUNC_void_GLuint func;
    ARGS_void_GLuint args;
} PACKED_void_GLuint;
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
typedef GLuint (*FUNC_GLuint)();
typedef struct {
} ARGS_GLuint;
typedef struct {
    int format;
    FUNC_GLuint func;
    ARGS_GLuint args;
} PACKED_GLuint;
typedef GLuint (*FUNC_GLuint_GLenum)(GLenum type);
typedef struct {
    GLenum a1;
} ARGS_GLuint_GLenum;
typedef struct {
    int format;
    FUNC_GLuint_GLenum func;
    ARGS_GLuint_GLenum args;
} PACKED_GLuint_GLenum;
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT__)(GLsizei n, const GLuint * buffer);
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
typedef void (*FUNC_void_GLclampf_GLclampf)(GLclampf zNear, GLclampf zFar);
typedef struct {
    GLclampf a1;
    GLclampf a2;
} ARGS_void_GLclampf_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLclampf func;
    ARGS_void_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf;
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
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLuint)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLuint a4;
} ARGS_void_GLenum_GLenum_GLenum_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum_GLuint func;
    ARGS_void_GLenum_GLenum_GLenum_GLuint args;
} PACKED_void_GLenum_GLenum_GLenum_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLuint_GLint)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLuint a4;
    GLint a5;
} ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum_GLuint_GLint func;
    ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint args;
} PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint;
typedef void (*FUNC_void_GLsizei_GLuint___GENPT__)(GLsizei n, GLuint * buffer);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLsizei_GLuint___GENPT__ func;
    ARGS_void_GLsizei_GLuint___GENPT__ args;
} PACKED_void_GLsizei_GLuint___GENPT__;
typedef void (*FUNC_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
typedef struct {
    GLuint a1;
    GLuint a2;
    GLsizei a3;
    GLsizei * a4;
    GLint * a5;
    GLenum * a6;
    GLchar * a7;
} ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ func;
    ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ args;
} PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__;
typedef void (*FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj);
typedef struct {
    GLuint a1;
    GLsizei a2;
    GLsizei * a3;
    GLuint * a4;
} ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ func;
    ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ args;
} PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__;
typedef GLint (*FUNC_GLint_GLuint_const_GLchar___GENPT__)(GLuint program, const GLchar * name);
typedef struct {
    GLuint a1;
    const GLchar * a2;
} ARGS_GLint_GLuint_const_GLchar___GENPT__;
typedef struct {
    int format;
    FUNC_GLint_GLuint_const_GLchar___GENPT__ func;
    ARGS_GLint_GLuint_const_GLchar___GENPT__ args;
} PACKED_GLint_GLuint_const_GLchar___GENPT__;
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
typedef GLenum (*FUNC_GLenum)();
typedef struct {
} ARGS_GLenum;
typedef struct {
    int format;
    FUNC_GLenum func;
    ARGS_GLenum args;
} PACKED_GLenum;
typedef void (*FUNC_void_GLenum_GLfloat___GENPT__)(GLenum pname, GLfloat * params);
typedef struct {
    GLenum a1;
    GLfloat * a2;
} ARGS_void_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat___GENPT__ func;
    ARGS_void_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLint___GENPT__)(GLenum target, GLenum attachment, GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLint * a4;
} ARGS_void_GLenum_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum_GLint___GENPT__ func;
    ARGS_void_GLenum_GLenum_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__;
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
typedef void (*FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef struct {
    GLuint a1;
    GLsizei a2;
    GLsizei * a3;
    GLchar * a4;
} ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ func;
    ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args;
} PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLint___GENPT__)(GLuint program, GLenum pname, GLint * params);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLuint_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLenum_GLint___GENPT__ func;
    ARGS_void_GLuint_GLenum_GLint___GENPT__ args;
} PACKED_void_GLuint_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__)(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
    GLint * a4;
} ARGS_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ func;
    ARGS_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__;
typedef const GLubyte * (*FUNC_const_GLubyte___GENPT___GLenum)(GLenum name);
typedef struct {
    GLenum a1;
} ARGS_const_GLubyte___GENPT___GLenum;
typedef struct {
    int format;
    FUNC_const_GLubyte___GENPT___GLenum func;
    ARGS_const_GLubyte___GENPT___GLenum args;
} PACKED_const_GLubyte___GENPT___GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat___GENPT__)(GLenum target, GLenum pname, GLfloat * params);
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
typedef void (*FUNC_void_GLuint_GLint_GLfloat___GENPT__)(GLuint program, GLint location, GLfloat * params);
typedef struct {
    GLuint a1;
    GLint a2;
    GLfloat * a3;
} ARGS_void_GLuint_GLint_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLint_GLfloat___GENPT__ func;
    ARGS_void_GLuint_GLint_GLfloat___GENPT__ args;
} PACKED_void_GLuint_GLint_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLint_GLint___GENPT__)(GLuint program, GLint location, GLint * params);
typedef struct {
    GLuint a1;
    GLint a2;
    GLint * a3;
} ARGS_void_GLuint_GLint_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLint_GLint___GENPT__ func;
    ARGS_void_GLuint_GLint_GLint___GENPT__ args;
} PACKED_void_GLuint_GLint_GLint___GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLvoid___GENPT____GENPT__)(GLuint index, GLenum pname, GLvoid ** pointer);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLvoid ** a3;
} ARGS_void_GLuint_GLenum_GLvoid___GENPT____GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLenum_GLvoid___GENPT____GENPT__ func;
    ARGS_void_GLuint_GLenum_GLvoid___GENPT____GENPT__ args;
} PACKED_void_GLuint_GLenum_GLvoid___GENPT____GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLfloat___GENPT__)(GLuint index, GLenum pname, GLfloat * params);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLuint_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLenum_GLfloat___GENPT__ func;
    ARGS_void_GLuint_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLuint_GLenum_GLfloat___GENPT__;
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
typedef void (*FUNC_void_GLfloat)(GLfloat width);
typedef struct {
    GLfloat a1;
} ARGS_void_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat func;
    ARGS_void_GLfloat args;
} PACKED_void_GLfloat;
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
typedef void (*FUNC_void_GLenum_GLenum_GLsizei_GLsizei)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLsizei a3;
    GLsizei a4;
} ARGS_void_GLenum_GLenum_GLsizei_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLsizei_GLsizei func;
    ARGS_void_GLenum_GLenum_GLsizei_GLsizei args;
} PACKED_void_GLenum_GLenum_GLsizei_GLsizei;
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
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei)(GLsizei n, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length);
typedef struct {
    GLsizei a1;
    const GLuint * a2;
    GLenum a3;
    const GLvoid * a4;
    GLsizei a5;
} ARGS_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei;
typedef struct {
    int format;
    FUNC_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei func;
    ARGS_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei args;
} PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei;
typedef void (*FUNC_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__)(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length);
typedef struct {
    GLuint a1;
    GLsizei a2;
    const GLchar * const * a3;
    const GLint * a4;
} ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__ func;
    ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__ args;
} PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__;
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
typedef void (*FUNC_void_GLenum_GLenum_GLint_GLuint)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint a3;
    GLuint a4;
} ARGS_void_GLenum_GLenum_GLint_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint_GLuint func;
    ARGS_void_GLenum_GLenum_GLint_GLuint args;
} PACKED_void_GLenum_GLenum_GLint_GLuint;
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
typedef void (*FUNC_void_GLenum_GLenum_GLfloat)(GLenum target, GLenum pname, GLfloat param);
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
typedef void (*FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__)(GLenum target, GLenum pname, const GLfloat * params);
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
typedef void (*FUNC_void_GLint_GLfloat)(GLint location, GLfloat v0);
typedef struct {
    GLint a1;
    GLfloat a2;
} ARGS_void_GLint_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLint_GLfloat func;
    ARGS_void_GLint_GLfloat args;
} PACKED_void_GLint_GLfloat;
typedef void (*FUNC_void_GLint_GLsizei_const_GLfloat___GENPT__)(GLint location, GLsizei count, const GLfloat * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    const GLfloat * a3;
} ARGS_void_GLint_GLsizei_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLsizei_const_GLfloat___GENPT__ func;
    ARGS_void_GLint_GLsizei_const_GLfloat___GENPT__ args;
} PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLint_GLint)(GLint location, GLint v0);
typedef struct {
    GLint a1;
    GLint a2;
} ARGS_void_GLint_GLint;
typedef struct {
    int format;
    FUNC_void_GLint_GLint func;
    ARGS_void_GLint_GLint args;
} PACKED_void_GLint_GLint;
typedef void (*FUNC_void_GLint_GLsizei_const_GLint___GENPT__)(GLint location, GLsizei count, const GLint * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    const GLint * a3;
} ARGS_void_GLint_GLsizei_const_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLsizei_const_GLint___GENPT__ func;
    ARGS_void_GLint_GLsizei_const_GLint___GENPT__ args;
} PACKED_void_GLint_GLsizei_const_GLint___GENPT__;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLint_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLint_GLfloat_GLfloat func;
    ARGS_void_GLint_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
} ARGS_void_GLint_GLint_GLint;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLint func;
    ARGS_void_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLint_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLint_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLint_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1, GLint v2);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
    GLint a4;
} ARGS_void_GLint_GLint_GLint_GLint;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLint_GLint func;
    ARGS_void_GLint_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLint a5;
} ARGS_void_GLint_GLint_GLint_GLint_GLint;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLint_GLint_GLint func;
    ARGS_void_GLint_GLint_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    GLboolean a3;
    const GLfloat * a4;
} ARGS_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ func;
    ARGS_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ args;
} PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLfloat)(GLuint index, GLfloat x);
typedef struct {
    GLuint a1;
    GLfloat a2;
} ARGS_void_GLuint_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLuint_GLfloat func;
    ARGS_void_GLuint_GLfloat args;
} PACKED_void_GLuint_GLfloat;
typedef void (*FUNC_void_GLuint_const_GLfloat___GENPT__)(GLuint index, const GLfloat * v);
typedef struct {
    GLuint a1;
    const GLfloat * a2;
} ARGS_void_GLuint_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_const_GLfloat___GENPT__ func;
    ARGS_void_GLuint_const_GLfloat___GENPT__ args;
} PACKED_void_GLuint_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLuint_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLuint_GLfloat_GLfloat func;
    ARGS_void_GLuint_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLuint_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLuint_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLuint_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat func;
    ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLuint a1;
    GLint a2;
    GLenum a3;
    GLboolean a4;
    GLsizei a5;
    const GLvoid * a6;
} ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ func;
    ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__;

extern void glPushCall(void *data);
void glPackedCall(const UnknownCall *packed);

#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_PACKED PACKED_void_GLenum
#define glActiveTexture_FORMAT FORMAT_void_GLenum
#define glAttachShader_RETURN void
#define glAttachShader_ARG_NAMES program, shader
#define glAttachShader_ARG_EXPAND GLuint program, GLuint shader
#define glAttachShader_PACKED PACKED_void_GLuint_GLuint
#define glAttachShader_FORMAT FORMAT_void_GLuint_GLuint
#define glBindAttribLocation_RETURN void
#define glBindAttribLocation_ARG_NAMES program, index, name
#define glBindAttribLocation_ARG_EXPAND GLuint program, GLuint index, const GLchar * name
#define glBindAttribLocation_PACKED PACKED_void_GLuint_GLuint_const_GLchar___GENPT__
#define glBindAttribLocation_FORMAT FORMAT_void_GLuint_GLuint_const_GLchar___GENPT__
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindBuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindFramebuffer_RETURN void
#define glBindFramebuffer_ARG_NAMES target, framebuffer
#define glBindFramebuffer_ARG_EXPAND GLenum target, GLuint framebuffer
#define glBindFramebuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindFramebuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindRenderbuffer_RETURN void
#define glBindRenderbuffer_ARG_NAMES target, renderbuffer
#define glBindRenderbuffer_ARG_EXPAND GLenum target, GLuint renderbuffer
#define glBindRenderbuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindRenderbuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_PACKED PACKED_void_GLenum_GLuint
#define glBindTexture_FORMAT FORMAT_void_GLenum_GLuint
#define glBlendColor_RETURN void
#define glBlendColor_ARG_NAMES red, green, blue, alpha
#define glBlendColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glBlendColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glBlendColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glBlendEquation_RETURN void
#define glBlendEquation_ARG_NAMES mode
#define glBlendEquation_ARG_EXPAND GLenum mode
#define glBlendEquation_PACKED PACKED_void_GLenum
#define glBlendEquation_FORMAT FORMAT_void_GLenum
#define glBlendEquationSeparate_RETURN void
#define glBlendEquationSeparate_ARG_NAMES modeRGB, modeA
#define glBlendEquationSeparate_ARG_EXPAND GLenum modeRGB, GLenum modeA
#define glBlendEquationSeparate_PACKED PACKED_void_GLenum_GLenum
#define glBlendEquationSeparate_FORMAT FORMAT_void_GLenum_GLenum
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_PACKED PACKED_void_GLenum_GLenum
#define glBlendFunc_FORMAT FORMAT_void_GLenum_GLenum
#define glBlendFuncSeparate_RETURN void
#define glBlendFuncSeparate_ARG_NAMES sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparate_ARG_EXPAND GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define glBlendFuncSeparate_PACKED PACKED_void_GLenum_GLenum_GLenum_GLenum
#define glBlendFuncSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLenum
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
#define glCheckFramebufferStatus_RETURN GLenum
#define glCheckFramebufferStatus_ARG_NAMES target
#define glCheckFramebufferStatus_ARG_EXPAND GLenum target
#define glCheckFramebufferStatus_PACKED PACKED_GLenum_GLenum
#define glCheckFramebufferStatus_FORMAT FORMAT_GLenum_GLenum
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
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_PACKED PACKED_void_GLclampf
#define glClearDepthf_FORMAT FORMAT_void_GLclampf
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_PACKED PACKED_void_GLint
#define glClearStencil_FORMAT FORMAT_void_GLint
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_PACKED PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorMask_FORMAT FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glCompileShader_RETURN void
#define glCompileShader_ARG_NAMES shader
#define glCompileShader_ARG_EXPAND GLuint shader
#define glCompileShader_PACKED PACKED_void_GLuint
#define glCompileShader_FORMAT FORMAT_void_GLuint
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
#define glCreateProgram_RETURN GLuint
#define glCreateProgram_ARG_NAMES 
#define glCreateProgram_ARG_EXPAND 
#define glCreateProgram_PACKED PACKED_GLuint
#define glCreateProgram_FORMAT FORMAT_GLuint
#define glCreateShader_RETURN GLuint
#define glCreateShader_ARG_NAMES type
#define glCreateShader_ARG_EXPAND GLenum type
#define glCreateShader_PACKED PACKED_GLuint_GLenum
#define glCreateShader_FORMAT FORMAT_GLuint_GLenum
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_PACKED PACKED_void_GLenum
#define glCullFace_FORMAT FORMAT_void_GLenum
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffer
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffer
#define glDeleteBuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteBuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteFramebuffers_RETURN void
#define glDeleteFramebuffers_ARG_NAMES n, framebuffers
#define glDeleteFramebuffers_ARG_EXPAND GLsizei n, const GLuint * framebuffers
#define glDeleteFramebuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteFramebuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteProgram_RETURN void
#define glDeleteProgram_ARG_NAMES program
#define glDeleteProgram_ARG_EXPAND GLuint program
#define glDeleteProgram_PACKED PACKED_void_GLuint
#define glDeleteProgram_FORMAT FORMAT_void_GLuint
#define glDeleteRenderbuffers_RETURN void
#define glDeleteRenderbuffers_ARG_NAMES n, renderbuffers
#define glDeleteRenderbuffers_ARG_EXPAND GLsizei n, const GLuint * renderbuffers
#define glDeleteRenderbuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteRenderbuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteShader_RETURN void
#define glDeleteShader_ARG_NAMES program
#define glDeleteShader_ARG_EXPAND GLuint program
#define glDeleteShader_PACKED PACKED_void_GLuint
#define glDeleteShader_FORMAT FORMAT_void_GLuint
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
#define glDepthRangef_ARG_NAMES zNear, zFar
#define glDepthRangef_ARG_EXPAND GLclampf zNear, GLclampf zFar
#define glDepthRangef_PACKED PACKED_void_GLclampf_GLclampf
#define glDepthRangef_FORMAT FORMAT_void_GLclampf_GLclampf
#define glDetachShader_RETURN void
#define glDetachShader_ARG_NAMES program, shader
#define glDetachShader_ARG_EXPAND GLuint program, GLuint shader
#define glDetachShader_PACKED PACKED_void_GLuint_GLuint
#define glDetachShader_FORMAT FORMAT_void_GLuint_GLuint
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_PACKED PACKED_void_GLenum
#define glDisable_FORMAT FORMAT_void_GLenum
#define glDisableVertexAttribArray_RETURN void
#define glDisableVertexAttribArray_ARG_NAMES index
#define glDisableVertexAttribArray_ARG_EXPAND GLuint index
#define glDisableVertexAttribArray_PACKED PACKED_void_GLuint
#define glDisableVertexAttribArray_FORMAT FORMAT_void_GLuint
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
#define glEnableVertexAttribArray_RETURN void
#define glEnableVertexAttribArray_ARG_NAMES index
#define glEnableVertexAttribArray_ARG_EXPAND GLuint index
#define glEnableVertexAttribArray_PACKED PACKED_void_GLuint
#define glEnableVertexAttribArray_FORMAT FORMAT_void_GLuint
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
#define glFramebufferRenderbuffer_RETURN void
#define glFramebufferRenderbuffer_ARG_NAMES target, attachment, renderbuffertarget, renderbuffer
#define glFramebufferRenderbuffer_ARG_EXPAND GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer
#define glFramebufferRenderbuffer_PACKED PACKED_void_GLenum_GLenum_GLenum_GLuint
#define glFramebufferRenderbuffer_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLuint
#define glFramebufferTexture2D_RETURN void
#define glFramebufferTexture2D_ARG_NAMES target, attachment, textarget, texture, level
#define glFramebufferTexture2D_ARG_EXPAND GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level
#define glFramebufferTexture2D_PACKED PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint
#define glFramebufferTexture2D_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_PACKED PACKED_void_GLenum
#define glFrontFace_FORMAT FORMAT_void_GLenum
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffer
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffer
#define glGenBuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenBuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenFramebuffers_RETURN void
#define glGenFramebuffers_ARG_NAMES n, framebuffers
#define glGenFramebuffers_ARG_EXPAND GLsizei n, GLuint * framebuffers
#define glGenFramebuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenFramebuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenRenderbuffers_RETURN void
#define glGenRenderbuffers_ARG_NAMES n, renderbuffers
#define glGenRenderbuffers_ARG_EXPAND GLsizei n, GLuint * renderbuffers
#define glGenRenderbuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenRenderbuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenTextures_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenerateMipmap_RETURN void
#define glGenerateMipmap_ARG_NAMES target
#define glGenerateMipmap_ARG_EXPAND GLenum target
#define glGenerateMipmap_PACKED PACKED_void_GLenum
#define glGenerateMipmap_FORMAT FORMAT_void_GLenum
#define glGetActiveAttrib_RETURN void
#define glGetActiveAttrib_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveAttrib_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveAttrib_PACKED PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveAttrib_FORMAT FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveUniform_RETURN void
#define glGetActiveUniform_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveUniform_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveUniform_PACKED PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveUniform_FORMAT FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetAttachedShaders_RETURN void
#define glGetAttachedShaders_ARG_NAMES program, maxCount, count, obj
#define glGetAttachedShaders_ARG_EXPAND GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj
#define glGetAttachedShaders_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__
#define glGetAttachedShaders_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__
#define glGetAttribLocation_RETURN GLint
#define glGetAttribLocation_ARG_NAMES program, name
#define glGetAttribLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetAttribLocation_PACKED PACKED_GLint_GLuint_const_GLchar___GENPT__
#define glGetAttribLocation_FORMAT FORMAT_GLint_GLuint_const_GLchar___GENPT__
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
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_PACKED PACKED_GLenum
#define glGetError_FORMAT FORMAT_GLenum
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetFloatv_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetFramebufferAttachmentParameteriv_RETURN void
#define glGetFramebufferAttachmentParameteriv_ARG_NAMES target, attachment, pname, params
#define glGetFramebufferAttachmentParameteriv_ARG_EXPAND GLenum target, GLenum attachment, GLenum pname, GLint * params
#define glGetFramebufferAttachmentParameteriv_PACKED PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__
#define glGetFramebufferAttachmentParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLint___GENPT__
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_PACKED PACKED_void_GLenum_GLint___GENPT__
#define glGetIntegerv_FORMAT FORMAT_void_GLenum_GLint___GENPT__
#define glGetProgramInfoLog_RETURN void
#define glGetProgramInfoLog_ARG_NAMES program, bufSize, length, infoLog
#define glGetProgramInfoLog_ARG_EXPAND GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetProgramInfoLog_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetProgramInfoLog_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetProgramiv_RETURN void
#define glGetProgramiv_ARG_NAMES program, pname, params
#define glGetProgramiv_ARG_EXPAND GLuint program, GLenum pname, GLint * params
#define glGetProgramiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetProgramiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
#define glGetRenderbufferParameteriv_RETURN void
#define glGetRenderbufferParameteriv_ARG_NAMES target, pname, params
#define glGetRenderbufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetRenderbufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetRenderbufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetShaderInfoLog_RETURN void
#define glGetShaderInfoLog_ARG_NAMES shader, bufSize, length, infoLog
#define glGetShaderInfoLog_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetShaderInfoLog_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderInfoLog_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderPrecisionFormat_RETURN void
#define glGetShaderPrecisionFormat_ARG_NAMES shadertype, precisiontype, range, precision
#define glGetShaderPrecisionFormat_ARG_EXPAND GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision
#define glGetShaderPrecisionFormat_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__
#define glGetShaderPrecisionFormat_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__
#define glGetShaderSource_RETURN void
#define glGetShaderSource_ARG_NAMES shader, bufSize, length, source
#define glGetShaderSource_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source
#define glGetShaderSource_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderSource_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderiv_RETURN void
#define glGetShaderiv_ARG_NAMES shader, pname, params
#define glGetShaderiv_ARG_EXPAND GLuint shader, GLenum pname, GLint * params
#define glGetShaderiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetShaderiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_PACKED PACKED_const_GLubyte___GENPT___GLenum
#define glGetString_FORMAT FORMAT_const_GLubyte___GENPT___GLenum
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
#define glGetUniformLocation_RETURN GLint
#define glGetUniformLocation_ARG_NAMES program, name
#define glGetUniformLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetUniformLocation_PACKED PACKED_GLint_GLuint_const_GLchar___GENPT__
#define glGetUniformLocation_FORMAT FORMAT_GLint_GLuint_const_GLchar___GENPT__
#define glGetUniformfv_RETURN void
#define glGetUniformfv_ARG_NAMES program, location, params
#define glGetUniformfv_ARG_EXPAND GLuint program, GLint location, GLfloat * params
#define glGetUniformfv_PACKED PACKED_void_GLuint_GLint_GLfloat___GENPT__
#define glGetUniformfv_FORMAT FORMAT_void_GLuint_GLint_GLfloat___GENPT__
#define glGetUniformiv_RETURN void
#define glGetUniformiv_ARG_NAMES program, location, params
#define glGetUniformiv_ARG_EXPAND GLuint program, GLint location, GLint * params
#define glGetUniformiv_PACKED PACKED_void_GLuint_GLint_GLint___GENPT__
#define glGetUniformiv_FORMAT FORMAT_void_GLuint_GLint_GLint___GENPT__
#define glGetVertexAttribPointerv_RETURN void
#define glGetVertexAttribPointerv_ARG_NAMES index, pname, pointer
#define glGetVertexAttribPointerv_ARG_EXPAND GLuint index, GLenum pname, GLvoid ** pointer
#define glGetVertexAttribPointerv_PACKED PACKED_void_GLuint_GLenum_GLvoid___GENPT____GENPT__
#define glGetVertexAttribPointerv_FORMAT FORMAT_void_GLuint_GLenum_GLvoid___GENPT____GENPT__
#define glGetVertexAttribfv_RETURN void
#define glGetVertexAttribfv_ARG_NAMES index, pname, params
#define glGetVertexAttribfv_ARG_EXPAND GLuint index, GLenum pname, GLfloat * params
#define glGetVertexAttribfv_PACKED PACKED_void_GLuint_GLenum_GLfloat___GENPT__
#define glGetVertexAttribfv_FORMAT FORMAT_void_GLuint_GLenum_GLfloat___GENPT__
#define glGetVertexAttribiv_RETURN void
#define glGetVertexAttribiv_ARG_NAMES index, pname, params
#define glGetVertexAttribiv_ARG_EXPAND GLuint index, GLenum pname, GLint * params
#define glGetVertexAttribiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetVertexAttribiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
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
#define glIsFramebuffer_RETURN GLboolean
#define glIsFramebuffer_ARG_NAMES framebuffer
#define glIsFramebuffer_ARG_EXPAND GLuint framebuffer
#define glIsFramebuffer_PACKED PACKED_GLboolean_GLuint
#define glIsFramebuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsProgram_RETURN GLboolean
#define glIsProgram_ARG_NAMES program
#define glIsProgram_ARG_EXPAND GLuint program
#define glIsProgram_PACKED PACKED_GLboolean_GLuint
#define glIsProgram_FORMAT FORMAT_GLboolean_GLuint
#define glIsRenderbuffer_RETURN GLboolean
#define glIsRenderbuffer_ARG_NAMES renderbuffer
#define glIsRenderbuffer_ARG_EXPAND GLuint renderbuffer
#define glIsRenderbuffer_PACKED PACKED_GLboolean_GLuint
#define glIsRenderbuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsShader_RETURN GLboolean
#define glIsShader_ARG_NAMES shader
#define glIsShader_ARG_EXPAND GLuint shader
#define glIsShader_PACKED PACKED_GLboolean_GLuint
#define glIsShader_FORMAT FORMAT_GLboolean_GLuint
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_PACKED PACKED_GLboolean_GLuint
#define glIsTexture_FORMAT FORMAT_GLboolean_GLuint
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_PACKED PACKED_void_GLfloat
#define glLineWidth_FORMAT FORMAT_void_GLfloat
#define glLinkProgram_RETURN void
#define glLinkProgram_ARG_NAMES program
#define glLinkProgram_ARG_EXPAND GLuint program
#define glLinkProgram_PACKED PACKED_void_GLuint
#define glLinkProgram_FORMAT FORMAT_void_GLuint
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_PACKED PACKED_void_GLenum_GLint
#define glPixelStorei_FORMAT FORMAT_void_GLenum_GLint
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_PACKED PACKED_void_GLfloat_GLfloat
#define glPolygonOffset_FORMAT FORMAT_void_GLfloat_GLfloat
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReadPixels_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReleaseShaderCompiler_RETURN void
#define glReleaseShaderCompiler_ARG_NAMES 
#define glReleaseShaderCompiler_ARG_EXPAND 
#define glReleaseShaderCompiler_PACKED PACKED_void
#define glReleaseShaderCompiler_FORMAT FORMAT_void
#define glRenderbufferStorage_RETURN void
#define glRenderbufferStorage_ARG_NAMES target, internalformat, width, height
#define glRenderbufferStorage_ARG_EXPAND GLenum target, GLenum internalformat, GLsizei width, GLsizei height
#define glRenderbufferStorage_PACKED PACKED_void_GLenum_GLenum_GLsizei_GLsizei
#define glRenderbufferStorage_FORMAT FORMAT_void_GLenum_GLenum_GLsizei_GLsizei
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_PACKED PACKED_void_GLclampf_GLboolean
#define glSampleCoverage_FORMAT FORMAT_void_GLclampf_GLboolean
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glScissor_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define glShaderBinary_RETURN void
#define glShaderBinary_ARG_NAMES n, shaders, binaryformat, binary, length
#define glShaderBinary_ARG_EXPAND GLsizei n, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length
#define glShaderBinary_PACKED PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei
#define glShaderBinary_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei
#define glShaderSource_RETURN void
#define glShaderSource_ARG_NAMES shader, count, string, length
#define glShaderSource_ARG_EXPAND GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length
#define glShaderSource_PACKED PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__
#define glShaderSource_FORMAT FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_PACKED PACKED_void_GLenum_GLint_GLuint
#define glStencilFunc_FORMAT FORMAT_void_GLenum_GLint_GLuint
#define glStencilFuncSeparate_RETURN void
#define glStencilFuncSeparate_ARG_NAMES face, func, ref, mask
#define glStencilFuncSeparate_ARG_EXPAND GLenum face, GLenum func, GLint ref, GLuint mask
#define glStencilFuncSeparate_PACKED PACKED_void_GLenum_GLenum_GLint_GLuint
#define glStencilFuncSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLint_GLuint
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_PACKED PACKED_void_GLuint
#define glStencilMask_FORMAT FORMAT_void_GLuint
#define glStencilMaskSeparate_RETURN void
#define glStencilMaskSeparate_ARG_NAMES face, mask
#define glStencilMaskSeparate_ARG_EXPAND GLenum face, GLuint mask
#define glStencilMaskSeparate_PACKED PACKED_void_GLenum_GLuint
#define glStencilMaskSeparate_FORMAT FORMAT_void_GLenum_GLuint
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_PACKED PACKED_void_GLenum_GLenum_GLenum
#define glStencilOp_FORMAT FORMAT_void_GLenum_GLenum_GLenum
#define glStencilOpSeparate_RETURN void
#define glStencilOpSeparate_ARG_NAMES face, sfail, zfail, zpass
#define glStencilOpSeparate_ARG_EXPAND GLenum face, GLenum sfail, GLenum zfail, GLenum zpass
#define glStencilOpSeparate_PACKED PACKED_void_GLenum_GLenum_GLenum_GLenum
#define glStencilOpSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLenum
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
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glUniform1f_RETURN void
#define glUniform1f_ARG_NAMES location, v0
#define glUniform1f_ARG_EXPAND GLint location, GLfloat v0
#define glUniform1f_PACKED PACKED_void_GLint_GLfloat
#define glUniform1f_FORMAT FORMAT_void_GLint_GLfloat
#define glUniform1fv_RETURN void
#define glUniform1fv_ARG_NAMES location, count, value
#define glUniform1fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform1fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform1fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform1i_RETURN void
#define glUniform1i_ARG_NAMES location, v0
#define glUniform1i_ARG_EXPAND GLint location, GLint v0
#define glUniform1i_PACKED PACKED_void_GLint_GLint
#define glUniform1i_FORMAT FORMAT_void_GLint_GLint
#define glUniform1iv_RETURN void
#define glUniform1iv_ARG_NAMES location, count, value
#define glUniform1iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform1iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform1iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform2f_RETURN void
#define glUniform2f_ARG_NAMES location, v0, v1
#define glUniform2f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1
#define glUniform2f_PACKED PACKED_void_GLint_GLfloat_GLfloat
#define glUniform2f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat
#define glUniform2fv_RETURN void
#define glUniform2fv_ARG_NAMES location, count, value
#define glUniform2fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform2fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform2fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform2i_RETURN void
#define glUniform2i_ARG_NAMES location, v0, v1
#define glUniform2i_ARG_EXPAND GLint location, GLint v0, GLint v1
#define glUniform2i_PACKED PACKED_void_GLint_GLint_GLint
#define glUniform2i_FORMAT FORMAT_void_GLint_GLint_GLint
#define glUniform2iv_RETURN void
#define glUniform2iv_ARG_NAMES location, count, value
#define glUniform2iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform2iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform2iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform3f_RETURN void
#define glUniform3f_ARG_NAMES location, v0, v1, v2
#define glUniform3f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2
#define glUniform3f_PACKED PACKED_void_GLint_GLfloat_GLfloat_GLfloat
#define glUniform3f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat_GLfloat
#define glUniform3fv_RETURN void
#define glUniform3fv_ARG_NAMES location, count, value
#define glUniform3fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform3fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform3fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform3i_RETURN void
#define glUniform3i_ARG_NAMES location, v0, v1, v2
#define glUniform3i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2
#define glUniform3i_PACKED PACKED_void_GLint_GLint_GLint_GLint
#define glUniform3i_FORMAT FORMAT_void_GLint_GLint_GLint_GLint
#define glUniform3iv_RETURN void
#define glUniform3iv_ARG_NAMES location, count, value
#define glUniform3iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform3iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform3iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform4f_RETURN void
#define glUniform4f_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3
#define glUniform4f_PACKED PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat
#define glUniform4f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat
#define glUniform4fv_RETURN void
#define glUniform4fv_ARG_NAMES location, count, value
#define glUniform4fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform4fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform4fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform4i_RETURN void
#define glUniform4i_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2, GLint v3
#define glUniform4i_PACKED PACKED_void_GLint_GLint_GLint_GLint_GLint
#define glUniform4i_FORMAT FORMAT_void_GLint_GLint_GLint_GLint_GLint
#define glUniform4iv_RETURN void
#define glUniform4iv_ARG_NAMES location, count, value
#define glUniform4iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform4iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform4iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniformMatrix2fv_RETURN void
#define glUniformMatrix2fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix2fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix2fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix2fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix3fv_RETURN void
#define glUniformMatrix3fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix3fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix3fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix3fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix4fv_RETURN void
#define glUniformMatrix4fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix4fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix4fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix4fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUseProgram_RETURN void
#define glUseProgram_ARG_NAMES program
#define glUseProgram_ARG_EXPAND GLuint program
#define glUseProgram_PACKED PACKED_void_GLuint
#define glUseProgram_FORMAT FORMAT_void_GLuint
#define glValidateProgram_RETURN void
#define glValidateProgram_ARG_NAMES program
#define glValidateProgram_ARG_EXPAND GLuint program
#define glValidateProgram_PACKED PACKED_void_GLuint
#define glValidateProgram_FORMAT FORMAT_void_GLuint
#define glVertexAttrib1f_RETURN void
#define glVertexAttrib1f_ARG_NAMES index, x
#define glVertexAttrib1f_ARG_EXPAND GLuint index, GLfloat x
#define glVertexAttrib1f_PACKED PACKED_void_GLuint_GLfloat
#define glVertexAttrib1f_FORMAT FORMAT_void_GLuint_GLfloat
#define glVertexAttrib1fv_RETURN void
#define glVertexAttrib1fv_ARG_NAMES index, v
#define glVertexAttrib1fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib1fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib1fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib2f_RETURN void
#define glVertexAttrib2f_ARG_NAMES index, x, y
#define glVertexAttrib2f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y
#define glVertexAttrib2f_PACKED PACKED_void_GLuint_GLfloat_GLfloat
#define glVertexAttrib2f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat
#define glVertexAttrib2fv_RETURN void
#define glVertexAttrib2fv_ARG_NAMES index, v
#define glVertexAttrib2fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib2fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib2fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib3f_RETURN void
#define glVertexAttrib3f_ARG_NAMES index, x, y, z
#define glVertexAttrib3f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z
#define glVertexAttrib3f_PACKED PACKED_void_GLuint_GLfloat_GLfloat_GLfloat
#define glVertexAttrib3f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat
#define glVertexAttrib3fv_RETURN void
#define glVertexAttrib3fv_ARG_NAMES index, v
#define glVertexAttrib3fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib3fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib3fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib4f_RETURN void
#define glVertexAttrib4f_ARG_NAMES index, x, y, z, w
#define glVertexAttrib4f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w
#define glVertexAttrib4f_PACKED PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat
#define glVertexAttrib4f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat
#define glVertexAttrib4fv_RETURN void
#define glVertexAttrib4fv_ARG_NAMES index, v
#define glVertexAttrib4fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib4fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib4fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttribPointer_RETURN void
#define glVertexAttribPointer_ARG_NAMES index, size, type, normalized, stride, pointer
#define glVertexAttribPointer_ARG_EXPAND GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer
#define glVertexAttribPointer_PACKED PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__
#define glVertexAttribPointer_FORMAT FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glViewport_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei

void glActiveTexture(glActiveTexture_ARG_EXPAND);
typedef void (*glesptr_glActiveTexture)(glActiveTexture_ARG_EXPAND);
void glAttachShader(glAttachShader_ARG_EXPAND);
typedef void (*glesptr_glAttachShader)(glAttachShader_ARG_EXPAND);
void glBindAttribLocation(glBindAttribLocation_ARG_EXPAND);
typedef void (*glesptr_glBindAttribLocation)(glBindAttribLocation_ARG_EXPAND);
void glBindBuffer(glBindBuffer_ARG_EXPAND);
typedef void (*glesptr_glBindBuffer)(glBindBuffer_ARG_EXPAND);
void glBindFramebuffer(glBindFramebuffer_ARG_EXPAND);
typedef void (*glesptr_glBindFramebuffer)(glBindFramebuffer_ARG_EXPAND);
void glBindRenderbuffer(glBindRenderbuffer_ARG_EXPAND);
typedef void (*glesptr_glBindRenderbuffer)(glBindRenderbuffer_ARG_EXPAND);
void glBindTexture(glBindTexture_ARG_EXPAND);
typedef void (*glesptr_glBindTexture)(glBindTexture_ARG_EXPAND);
void glBlendColor(glBlendColor_ARG_EXPAND);
typedef void (*glesptr_glBlendColor)(glBlendColor_ARG_EXPAND);
void glBlendEquation(glBlendEquation_ARG_EXPAND);
typedef void (*glesptr_glBlendEquation)(glBlendEquation_ARG_EXPAND);
void glBlendEquationSeparate(glBlendEquationSeparate_ARG_EXPAND);
typedef void (*glesptr_glBlendEquationSeparate)(glBlendEquationSeparate_ARG_EXPAND);
void glBlendFunc(glBlendFunc_ARG_EXPAND);
typedef void (*glesptr_glBlendFunc)(glBlendFunc_ARG_EXPAND);
void glBlendFuncSeparate(glBlendFuncSeparate_ARG_EXPAND);
typedef void (*glesptr_glBlendFuncSeparate)(glBlendFuncSeparate_ARG_EXPAND);
void glBufferData(glBufferData_ARG_EXPAND);
typedef void (*glesptr_glBufferData)(glBufferData_ARG_EXPAND);
void glBufferSubData(glBufferSubData_ARG_EXPAND);
typedef void (*glesptr_glBufferSubData)(glBufferSubData_ARG_EXPAND);
GLenum glCheckFramebufferStatus(glCheckFramebufferStatus_ARG_EXPAND);
typedef GLenum (*glesptr_glCheckFramebufferStatus)(glCheckFramebufferStatus_ARG_EXPAND);
void glClear(glClear_ARG_EXPAND);
typedef void (*glesptr_glClear)(glClear_ARG_EXPAND);
void glClearColor(glClearColor_ARG_EXPAND);
typedef void (*glesptr_glClearColor)(glClearColor_ARG_EXPAND);
void glClearDepthf(glClearDepthf_ARG_EXPAND);
typedef void (*glesptr_glClearDepthf)(glClearDepthf_ARG_EXPAND);
void glClearStencil(glClearStencil_ARG_EXPAND);
typedef void (*glesptr_glClearStencil)(glClearStencil_ARG_EXPAND);
void glColorMask(glColorMask_ARG_EXPAND);
typedef void (*glesptr_glColorMask)(glColorMask_ARG_EXPAND);
void glCompileShader(glCompileShader_ARG_EXPAND);
typedef void (*glesptr_glCompileShader)(glCompileShader_ARG_EXPAND);
void glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
typedef void (*glesptr_glCompressedTexImage2D)(glCompressedTexImage2D_ARG_EXPAND);
void glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glCompressedTexSubImage2D)(glCompressedTexSubImage2D_ARG_EXPAND);
void glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
typedef void (*glesptr_glCopyTexImage2D)(glCopyTexImage2D_ARG_EXPAND);
void glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glCopyTexSubImage2D)(glCopyTexSubImage2D_ARG_EXPAND);
GLuint glCreateProgram(glCreateProgram_ARG_EXPAND);
typedef GLuint (*glesptr_glCreateProgram)(glCreateProgram_ARG_EXPAND);
GLuint glCreateShader(glCreateShader_ARG_EXPAND);
typedef GLuint (*glesptr_glCreateShader)(glCreateShader_ARG_EXPAND);
void glCullFace(glCullFace_ARG_EXPAND);
typedef void (*glesptr_glCullFace)(glCullFace_ARG_EXPAND);
void glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
typedef void (*glesptr_glDeleteBuffers)(glDeleteBuffers_ARG_EXPAND);
void glDeleteFramebuffers(glDeleteFramebuffers_ARG_EXPAND);
typedef void (*glesptr_glDeleteFramebuffers)(glDeleteFramebuffers_ARG_EXPAND);
void glDeleteProgram(glDeleteProgram_ARG_EXPAND);
typedef void (*glesptr_glDeleteProgram)(glDeleteProgram_ARG_EXPAND);
void glDeleteRenderbuffers(glDeleteRenderbuffers_ARG_EXPAND);
typedef void (*glesptr_glDeleteRenderbuffers)(glDeleteRenderbuffers_ARG_EXPAND);
void glDeleteShader(glDeleteShader_ARG_EXPAND);
typedef void (*glesptr_glDeleteShader)(glDeleteShader_ARG_EXPAND);
void glDeleteTextures(glDeleteTextures_ARG_EXPAND);
typedef void (*glesptr_glDeleteTextures)(glDeleteTextures_ARG_EXPAND);
void glDepthFunc(glDepthFunc_ARG_EXPAND);
typedef void (*glesptr_glDepthFunc)(glDepthFunc_ARG_EXPAND);
void glDepthMask(glDepthMask_ARG_EXPAND);
typedef void (*glesptr_glDepthMask)(glDepthMask_ARG_EXPAND);
void glDepthRangef(glDepthRangef_ARG_EXPAND);
typedef void (*glesptr_glDepthRangef)(glDepthRangef_ARG_EXPAND);
void glDetachShader(glDetachShader_ARG_EXPAND);
typedef void (*glesptr_glDetachShader)(glDetachShader_ARG_EXPAND);
void glDisable(glDisable_ARG_EXPAND);
typedef void (*glesptr_glDisable)(glDisable_ARG_EXPAND);
void glDisableVertexAttribArray(glDisableVertexAttribArray_ARG_EXPAND);
typedef void (*glesptr_glDisableVertexAttribArray)(glDisableVertexAttribArray_ARG_EXPAND);
void glDrawArrays(glDrawArrays_ARG_EXPAND);
typedef void (*glesptr_glDrawArrays)(glDrawArrays_ARG_EXPAND);
void glDrawElements(glDrawElements_ARG_EXPAND);
typedef void (*glesptr_glDrawElements)(glDrawElements_ARG_EXPAND);
void glEnable(glEnable_ARG_EXPAND);
typedef void (*glesptr_glEnable)(glEnable_ARG_EXPAND);
void glEnableVertexAttribArray(glEnableVertexAttribArray_ARG_EXPAND);
typedef void (*glesptr_glEnableVertexAttribArray)(glEnableVertexAttribArray_ARG_EXPAND);
void glFinish(glFinish_ARG_EXPAND);
typedef void (*glesptr_glFinish)(glFinish_ARG_EXPAND);
void glFlush(glFlush_ARG_EXPAND);
typedef void (*glesptr_glFlush)(glFlush_ARG_EXPAND);
void glFramebufferRenderbuffer(glFramebufferRenderbuffer_ARG_EXPAND);
typedef void (*glesptr_glFramebufferRenderbuffer)(glFramebufferRenderbuffer_ARG_EXPAND);
void glFramebufferTexture2D(glFramebufferTexture2D_ARG_EXPAND);
typedef void (*glesptr_glFramebufferTexture2D)(glFramebufferTexture2D_ARG_EXPAND);
void glFrontFace(glFrontFace_ARG_EXPAND);
typedef void (*glesptr_glFrontFace)(glFrontFace_ARG_EXPAND);
void glGenBuffers(glGenBuffers_ARG_EXPAND);
typedef void (*glesptr_glGenBuffers)(glGenBuffers_ARG_EXPAND);
void glGenFramebuffers(glGenFramebuffers_ARG_EXPAND);
typedef void (*glesptr_glGenFramebuffers)(glGenFramebuffers_ARG_EXPAND);
void glGenRenderbuffers(glGenRenderbuffers_ARG_EXPAND);
typedef void (*glesptr_glGenRenderbuffers)(glGenRenderbuffers_ARG_EXPAND);
void glGenTextures(glGenTextures_ARG_EXPAND);
typedef void (*glesptr_glGenTextures)(glGenTextures_ARG_EXPAND);
void glGenerateMipmap(glGenerateMipmap_ARG_EXPAND);
typedef void (*glesptr_glGenerateMipmap)(glGenerateMipmap_ARG_EXPAND);
void glGetActiveAttrib(glGetActiveAttrib_ARG_EXPAND);
typedef void (*glesptr_glGetActiveAttrib)(glGetActiveAttrib_ARG_EXPAND);
void glGetActiveUniform(glGetActiveUniform_ARG_EXPAND);
typedef void (*glesptr_glGetActiveUniform)(glGetActiveUniform_ARG_EXPAND);
void glGetAttachedShaders(glGetAttachedShaders_ARG_EXPAND);
typedef void (*glesptr_glGetAttachedShaders)(glGetAttachedShaders_ARG_EXPAND);
GLint glGetAttribLocation(glGetAttribLocation_ARG_EXPAND);
typedef GLint (*glesptr_glGetAttribLocation)(glGetAttribLocation_ARG_EXPAND);
void glGetBooleanv(glGetBooleanv_ARG_EXPAND);
typedef void (*glesptr_glGetBooleanv)(glGetBooleanv_ARG_EXPAND);
void glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetBufferParameteriv)(glGetBufferParameteriv_ARG_EXPAND);
GLenum glGetError(glGetError_ARG_EXPAND);
typedef GLenum (*glesptr_glGetError)(glGetError_ARG_EXPAND);
void glGetFloatv(glGetFloatv_ARG_EXPAND);
typedef void (*glesptr_glGetFloatv)(glGetFloatv_ARG_EXPAND);
void glGetFramebufferAttachmentParameteriv(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetFramebufferAttachmentParameteriv)(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
void glGetIntegerv(glGetIntegerv_ARG_EXPAND);
typedef void (*glesptr_glGetIntegerv)(glGetIntegerv_ARG_EXPAND);
void glGetProgramInfoLog(glGetProgramInfoLog_ARG_EXPAND);
typedef void (*glesptr_glGetProgramInfoLog)(glGetProgramInfoLog_ARG_EXPAND);
void glGetProgramiv(glGetProgramiv_ARG_EXPAND);
typedef void (*glesptr_glGetProgramiv)(glGetProgramiv_ARG_EXPAND);
void glGetRenderbufferParameteriv(glGetRenderbufferParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetRenderbufferParameteriv)(glGetRenderbufferParameteriv_ARG_EXPAND);
void glGetShaderInfoLog(glGetShaderInfoLog_ARG_EXPAND);
typedef void (*glesptr_glGetShaderInfoLog)(glGetShaderInfoLog_ARG_EXPAND);
void glGetShaderPrecisionFormat(glGetShaderPrecisionFormat_ARG_EXPAND);
typedef void (*glesptr_glGetShaderPrecisionFormat)(glGetShaderPrecisionFormat_ARG_EXPAND);
void glGetShaderSource(glGetShaderSource_ARG_EXPAND);
typedef void (*glesptr_glGetShaderSource)(glGetShaderSource_ARG_EXPAND);
void glGetShaderiv(glGetShaderiv_ARG_EXPAND);
typedef void (*glesptr_glGetShaderiv)(glGetShaderiv_ARG_EXPAND);
const GLubyte * glGetString(glGetString_ARG_EXPAND);
typedef const GLubyte * (*glesptr_glGetString)(glGetString_ARG_EXPAND);
void glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
typedef void (*glesptr_glGetTexParameterfv)(glGetTexParameterfv_ARG_EXPAND);
void glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
typedef void (*glesptr_glGetTexParameteriv)(glGetTexParameteriv_ARG_EXPAND);
GLint glGetUniformLocation(glGetUniformLocation_ARG_EXPAND);
typedef GLint (*glesptr_glGetUniformLocation)(glGetUniformLocation_ARG_EXPAND);
void glGetUniformfv(glGetUniformfv_ARG_EXPAND);
typedef void (*glesptr_glGetUniformfv)(glGetUniformfv_ARG_EXPAND);
void glGetUniformiv(glGetUniformiv_ARG_EXPAND);
typedef void (*glesptr_glGetUniformiv)(glGetUniformiv_ARG_EXPAND);
void glGetVertexAttribPointerv(glGetVertexAttribPointerv_ARG_EXPAND);
typedef void (*glesptr_glGetVertexAttribPointerv)(glGetVertexAttribPointerv_ARG_EXPAND);
void glGetVertexAttribfv(glGetVertexAttribfv_ARG_EXPAND);
typedef void (*glesptr_glGetVertexAttribfv)(glGetVertexAttribfv_ARG_EXPAND);
void glGetVertexAttribiv(glGetVertexAttribiv_ARG_EXPAND);
typedef void (*glesptr_glGetVertexAttribiv)(glGetVertexAttribiv_ARG_EXPAND);
void glHint(glHint_ARG_EXPAND);
typedef void (*glesptr_glHint)(glHint_ARG_EXPAND);
GLboolean glIsBuffer(glIsBuffer_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsBuffer)(glIsBuffer_ARG_EXPAND);
GLboolean glIsEnabled(glIsEnabled_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsEnabled)(glIsEnabled_ARG_EXPAND);
GLboolean glIsFramebuffer(glIsFramebuffer_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsFramebuffer)(glIsFramebuffer_ARG_EXPAND);
GLboolean glIsProgram(glIsProgram_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsProgram)(glIsProgram_ARG_EXPAND);
GLboolean glIsRenderbuffer(glIsRenderbuffer_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsRenderbuffer)(glIsRenderbuffer_ARG_EXPAND);
GLboolean glIsShader(glIsShader_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsShader)(glIsShader_ARG_EXPAND);
GLboolean glIsTexture(glIsTexture_ARG_EXPAND);
typedef GLboolean (*glesptr_glIsTexture)(glIsTexture_ARG_EXPAND);
void glLineWidth(glLineWidth_ARG_EXPAND);
typedef void (*glesptr_glLineWidth)(glLineWidth_ARG_EXPAND);
void glLinkProgram(glLinkProgram_ARG_EXPAND);
typedef void (*glesptr_glLinkProgram)(glLinkProgram_ARG_EXPAND);
void glPixelStorei(glPixelStorei_ARG_EXPAND);
typedef void (*glesptr_glPixelStorei)(glPixelStorei_ARG_EXPAND);
void glPolygonOffset(glPolygonOffset_ARG_EXPAND);
typedef void (*glesptr_glPolygonOffset)(glPolygonOffset_ARG_EXPAND);
void glReadPixels(glReadPixels_ARG_EXPAND);
typedef void (*glesptr_glReadPixels)(glReadPixels_ARG_EXPAND);
void glReleaseShaderCompiler(glReleaseShaderCompiler_ARG_EXPAND);
typedef void (*glesptr_glReleaseShaderCompiler)(glReleaseShaderCompiler_ARG_EXPAND);
void glRenderbufferStorage(glRenderbufferStorage_ARG_EXPAND);
typedef void (*glesptr_glRenderbufferStorage)(glRenderbufferStorage_ARG_EXPAND);
void glSampleCoverage(glSampleCoverage_ARG_EXPAND);
typedef void (*glesptr_glSampleCoverage)(glSampleCoverage_ARG_EXPAND);
void glScissor(glScissor_ARG_EXPAND);
typedef void (*glesptr_glScissor)(glScissor_ARG_EXPAND);
void glShaderBinary(glShaderBinary_ARG_EXPAND);
typedef void (*glesptr_glShaderBinary)(glShaderBinary_ARG_EXPAND);
void glShaderSource(glShaderSource_ARG_EXPAND);
typedef void (*glesptr_glShaderSource)(glShaderSource_ARG_EXPAND);
void glStencilFunc(glStencilFunc_ARG_EXPAND);
typedef void (*glesptr_glStencilFunc)(glStencilFunc_ARG_EXPAND);
void glStencilFuncSeparate(glStencilFuncSeparate_ARG_EXPAND);
typedef void (*glesptr_glStencilFuncSeparate)(glStencilFuncSeparate_ARG_EXPAND);
void glStencilMask(glStencilMask_ARG_EXPAND);
typedef void (*glesptr_glStencilMask)(glStencilMask_ARG_EXPAND);
void glStencilMaskSeparate(glStencilMaskSeparate_ARG_EXPAND);
typedef void (*glesptr_glStencilMaskSeparate)(glStencilMaskSeparate_ARG_EXPAND);
void glStencilOp(glStencilOp_ARG_EXPAND);
typedef void (*glesptr_glStencilOp)(glStencilOp_ARG_EXPAND);
void glStencilOpSeparate(glStencilOpSeparate_ARG_EXPAND);
typedef void (*glesptr_glStencilOpSeparate)(glStencilOpSeparate_ARG_EXPAND);
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
void glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
typedef void (*glesptr_glTexSubImage2D)(glTexSubImage2D_ARG_EXPAND);
void glUniform1f(glUniform1f_ARG_EXPAND);
typedef void (*glesptr_glUniform1f)(glUniform1f_ARG_EXPAND);
void glUniform1fv(glUniform1fv_ARG_EXPAND);
typedef void (*glesptr_glUniform1fv)(glUniform1fv_ARG_EXPAND);
void glUniform1i(glUniform1i_ARG_EXPAND);
typedef void (*glesptr_glUniform1i)(glUniform1i_ARG_EXPAND);
void glUniform1iv(glUniform1iv_ARG_EXPAND);
typedef void (*glesptr_glUniform1iv)(glUniform1iv_ARG_EXPAND);
void glUniform2f(glUniform2f_ARG_EXPAND);
typedef void (*glesptr_glUniform2f)(glUniform2f_ARG_EXPAND);
void glUniform2fv(glUniform2fv_ARG_EXPAND);
typedef void (*glesptr_glUniform2fv)(glUniform2fv_ARG_EXPAND);
void glUniform2i(glUniform2i_ARG_EXPAND);
typedef void (*glesptr_glUniform2i)(glUniform2i_ARG_EXPAND);
void glUniform2iv(glUniform2iv_ARG_EXPAND);
typedef void (*glesptr_glUniform2iv)(glUniform2iv_ARG_EXPAND);
void glUniform3f(glUniform3f_ARG_EXPAND);
typedef void (*glesptr_glUniform3f)(glUniform3f_ARG_EXPAND);
void glUniform3fv(glUniform3fv_ARG_EXPAND);
typedef void (*glesptr_glUniform3fv)(glUniform3fv_ARG_EXPAND);
void glUniform3i(glUniform3i_ARG_EXPAND);
typedef void (*glesptr_glUniform3i)(glUniform3i_ARG_EXPAND);
void glUniform3iv(glUniform3iv_ARG_EXPAND);
typedef void (*glesptr_glUniform3iv)(glUniform3iv_ARG_EXPAND);
void glUniform4f(glUniform4f_ARG_EXPAND);
typedef void (*glesptr_glUniform4f)(glUniform4f_ARG_EXPAND);
void glUniform4fv(glUniform4fv_ARG_EXPAND);
typedef void (*glesptr_glUniform4fv)(glUniform4fv_ARG_EXPAND);
void glUniform4i(glUniform4i_ARG_EXPAND);
typedef void (*glesptr_glUniform4i)(glUniform4i_ARG_EXPAND);
void glUniform4iv(glUniform4iv_ARG_EXPAND);
typedef void (*glesptr_glUniform4iv)(glUniform4iv_ARG_EXPAND);
void glUniformMatrix2fv(glUniformMatrix2fv_ARG_EXPAND);
typedef void (*glesptr_glUniformMatrix2fv)(glUniformMatrix2fv_ARG_EXPAND);
void glUniformMatrix3fv(glUniformMatrix3fv_ARG_EXPAND);
typedef void (*glesptr_glUniformMatrix3fv)(glUniformMatrix3fv_ARG_EXPAND);
void glUniformMatrix4fv(glUniformMatrix4fv_ARG_EXPAND);
typedef void (*glesptr_glUniformMatrix4fv)(glUniformMatrix4fv_ARG_EXPAND);
void glUseProgram(glUseProgram_ARG_EXPAND);
typedef void (*glesptr_glUseProgram)(glUseProgram_ARG_EXPAND);
void glValidateProgram(glValidateProgram_ARG_EXPAND);
typedef void (*glesptr_glValidateProgram)(glValidateProgram_ARG_EXPAND);
void glVertexAttrib1f(glVertexAttrib1f_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib1f)(glVertexAttrib1f_ARG_EXPAND);
void glVertexAttrib1fv(glVertexAttrib1fv_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib1fv)(glVertexAttrib1fv_ARG_EXPAND);
void glVertexAttrib2f(glVertexAttrib2f_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib2f)(glVertexAttrib2f_ARG_EXPAND);
void glVertexAttrib2fv(glVertexAttrib2fv_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib2fv)(glVertexAttrib2fv_ARG_EXPAND);
void glVertexAttrib3f(glVertexAttrib3f_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib3f)(glVertexAttrib3f_ARG_EXPAND);
void glVertexAttrib3fv(glVertexAttrib3fv_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib3fv)(glVertexAttrib3fv_ARG_EXPAND);
void glVertexAttrib4f(glVertexAttrib4f_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib4f)(glVertexAttrib4f_ARG_EXPAND);
void glVertexAttrib4fv(glVertexAttrib4fv_ARG_EXPAND);
typedef void (*glesptr_glVertexAttrib4fv)(glVertexAttrib4fv_ARG_EXPAND);
void glVertexAttribPointer(glVertexAttribPointer_ARG_EXPAND);
typedef void (*glesptr_glVertexAttribPointer)(glVertexAttribPointer_ARG_EXPAND);
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
#ifndef direct_glAttachShader
static inline void push_glAttachShader(glAttachShader_ARG_EXPAND) {
    glAttachShader_PACKED *packed_data = malloc(sizeof(glAttachShader_PACKED));
    packed_data->format = glAttachShader_FORMAT;
    packed_data->func = glAttachShader;
    packed_data->args.a1 = program;
    packed_data->args.a2 = shader;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBindAttribLocation
static inline void push_glBindAttribLocation(glBindAttribLocation_ARG_EXPAND) {
    glBindAttribLocation_PACKED *packed_data = malloc(sizeof(glBindAttribLocation_PACKED));
    packed_data->format = glBindAttribLocation_FORMAT;
    packed_data->func = glBindAttribLocation;
    packed_data->args.a1 = program;
    packed_data->args.a2 = index;
    packed_data->args.a3 = name;
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
#ifndef direct_glBindFramebuffer
static inline void push_glBindFramebuffer(glBindFramebuffer_ARG_EXPAND) {
    glBindFramebuffer_PACKED *packed_data = malloc(sizeof(glBindFramebuffer_PACKED));
    packed_data->format = glBindFramebuffer_FORMAT;
    packed_data->func = glBindFramebuffer;
    packed_data->args.a1 = target;
    packed_data->args.a2 = framebuffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBindRenderbuffer
static inline void push_glBindRenderbuffer(glBindRenderbuffer_ARG_EXPAND) {
    glBindRenderbuffer_PACKED *packed_data = malloc(sizeof(glBindRenderbuffer_PACKED));
    packed_data->format = glBindRenderbuffer_FORMAT;
    packed_data->func = glBindRenderbuffer;
    packed_data->args.a1 = target;
    packed_data->args.a2 = renderbuffer;
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
#ifndef direct_glBlendColor
static inline void push_glBlendColor(glBlendColor_ARG_EXPAND) {
    glBlendColor_PACKED *packed_data = malloc(sizeof(glBlendColor_PACKED));
    packed_data->format = glBlendColor_FORMAT;
    packed_data->func = glBlendColor;
    packed_data->args.a1 = red;
    packed_data->args.a2 = green;
    packed_data->args.a3 = blue;
    packed_data->args.a4 = alpha;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBlendEquation
static inline void push_glBlendEquation(glBlendEquation_ARG_EXPAND) {
    glBlendEquation_PACKED *packed_data = malloc(sizeof(glBlendEquation_PACKED));
    packed_data->format = glBlendEquation_FORMAT;
    packed_data->func = glBlendEquation;
    packed_data->args.a1 = mode;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glBlendEquationSeparate
static inline void push_glBlendEquationSeparate(glBlendEquationSeparate_ARG_EXPAND) {
    glBlendEquationSeparate_PACKED *packed_data = malloc(sizeof(glBlendEquationSeparate_PACKED));
    packed_data->format = glBlendEquationSeparate_FORMAT;
    packed_data->func = glBlendEquationSeparate;
    packed_data->args.a1 = modeRGB;
    packed_data->args.a2 = modeA;
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
#ifndef direct_glBlendFuncSeparate
static inline void push_glBlendFuncSeparate(glBlendFuncSeparate_ARG_EXPAND) {
    glBlendFuncSeparate_PACKED *packed_data = malloc(sizeof(glBlendFuncSeparate_PACKED));
    packed_data->format = glBlendFuncSeparate_FORMAT;
    packed_data->func = glBlendFuncSeparate;
    packed_data->args.a1 = sfactorRGB;
    packed_data->args.a2 = dfactorRGB;
    packed_data->args.a3 = sfactorAlpha;
    packed_data->args.a4 = dfactorAlpha;
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
#ifndef direct_glCheckFramebufferStatus
static inline void push_glCheckFramebufferStatus(glCheckFramebufferStatus_ARG_EXPAND) {
    glCheckFramebufferStatus_PACKED *packed_data = malloc(sizeof(glCheckFramebufferStatus_PACKED));
    packed_data->format = glCheckFramebufferStatus_FORMAT;
    packed_data->func = glCheckFramebufferStatus;
    packed_data->args.a1 = target;
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
#ifndef direct_glClearDepthf
static inline void push_glClearDepthf(glClearDepthf_ARG_EXPAND) {
    glClearDepthf_PACKED *packed_data = malloc(sizeof(glClearDepthf_PACKED));
    packed_data->format = glClearDepthf_FORMAT;
    packed_data->func = glClearDepthf;
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
#ifndef direct_glCompileShader
static inline void push_glCompileShader(glCompileShader_ARG_EXPAND) {
    glCompileShader_PACKED *packed_data = malloc(sizeof(glCompileShader_PACKED));
    packed_data->format = glCompileShader_FORMAT;
    packed_data->func = glCompileShader;
    packed_data->args.a1 = shader;
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
#ifndef direct_glCreateProgram
static inline void push_glCreateProgram(glCreateProgram_ARG_EXPAND) {
    glCreateProgram_PACKED *packed_data = malloc(sizeof(glCreateProgram_PACKED));
    packed_data->format = glCreateProgram_FORMAT;
    packed_data->func = glCreateProgram;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glCreateShader
static inline void push_glCreateShader(glCreateShader_ARG_EXPAND) {
    glCreateShader_PACKED *packed_data = malloc(sizeof(glCreateShader_PACKED));
    packed_data->format = glCreateShader_FORMAT;
    packed_data->func = glCreateShader;
    packed_data->args.a1 = type;
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
    packed_data->args.a2 = buffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteFramebuffers
static inline void push_glDeleteFramebuffers(glDeleteFramebuffers_ARG_EXPAND) {
    glDeleteFramebuffers_PACKED *packed_data = malloc(sizeof(glDeleteFramebuffers_PACKED));
    packed_data->format = glDeleteFramebuffers_FORMAT;
    packed_data->func = glDeleteFramebuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = framebuffers;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteProgram
static inline void push_glDeleteProgram(glDeleteProgram_ARG_EXPAND) {
    glDeleteProgram_PACKED *packed_data = malloc(sizeof(glDeleteProgram_PACKED));
    packed_data->format = glDeleteProgram_FORMAT;
    packed_data->func = glDeleteProgram;
    packed_data->args.a1 = program;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteRenderbuffers
static inline void push_glDeleteRenderbuffers(glDeleteRenderbuffers_ARG_EXPAND) {
    glDeleteRenderbuffers_PACKED *packed_data = malloc(sizeof(glDeleteRenderbuffers_PACKED));
    packed_data->format = glDeleteRenderbuffers_FORMAT;
    packed_data->func = glDeleteRenderbuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = renderbuffers;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDeleteShader
static inline void push_glDeleteShader(glDeleteShader_ARG_EXPAND) {
    glDeleteShader_PACKED *packed_data = malloc(sizeof(glDeleteShader_PACKED));
    packed_data->format = glDeleteShader_FORMAT;
    packed_data->func = glDeleteShader;
    packed_data->args.a1 = program;
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
    packed_data->args.a1 = zNear;
    packed_data->args.a2 = zFar;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glDetachShader
static inline void push_glDetachShader(glDetachShader_ARG_EXPAND) {
    glDetachShader_PACKED *packed_data = malloc(sizeof(glDetachShader_PACKED));
    packed_data->format = glDetachShader_FORMAT;
    packed_data->func = glDetachShader;
    packed_data->args.a1 = program;
    packed_data->args.a2 = shader;
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
#ifndef direct_glDisableVertexAttribArray
static inline void push_glDisableVertexAttribArray(glDisableVertexAttribArray_ARG_EXPAND) {
    glDisableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glDisableVertexAttribArray_PACKED));
    packed_data->format = glDisableVertexAttribArray_FORMAT;
    packed_data->func = glDisableVertexAttribArray;
    packed_data->args.a1 = index;
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
#ifndef direct_glEnableVertexAttribArray
static inline void push_glEnableVertexAttribArray(glEnableVertexAttribArray_ARG_EXPAND) {
    glEnableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glEnableVertexAttribArray_PACKED));
    packed_data->format = glEnableVertexAttribArray_FORMAT;
    packed_data->func = glEnableVertexAttribArray;
    packed_data->args.a1 = index;
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
#ifndef direct_glFramebufferRenderbuffer
static inline void push_glFramebufferRenderbuffer(glFramebufferRenderbuffer_ARG_EXPAND) {
    glFramebufferRenderbuffer_PACKED *packed_data = malloc(sizeof(glFramebufferRenderbuffer_PACKED));
    packed_data->format = glFramebufferRenderbuffer_FORMAT;
    packed_data->func = glFramebufferRenderbuffer;
    packed_data->args.a1 = target;
    packed_data->args.a2 = attachment;
    packed_data->args.a3 = renderbuffertarget;
    packed_data->args.a4 = renderbuffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glFramebufferTexture2D
static inline void push_glFramebufferTexture2D(glFramebufferTexture2D_ARG_EXPAND) {
    glFramebufferTexture2D_PACKED *packed_data = malloc(sizeof(glFramebufferTexture2D_PACKED));
    packed_data->format = glFramebufferTexture2D_FORMAT;
    packed_data->func = glFramebufferTexture2D;
    packed_data->args.a1 = target;
    packed_data->args.a2 = attachment;
    packed_data->args.a3 = textarget;
    packed_data->args.a4 = texture;
    packed_data->args.a5 = level;
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
#ifndef direct_glGenBuffers
static inline void push_glGenBuffers(glGenBuffers_ARG_EXPAND) {
    glGenBuffers_PACKED *packed_data = malloc(sizeof(glGenBuffers_PACKED));
    packed_data->format = glGenBuffers_FORMAT;
    packed_data->func = glGenBuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = buffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGenFramebuffers
static inline void push_glGenFramebuffers(glGenFramebuffers_ARG_EXPAND) {
    glGenFramebuffers_PACKED *packed_data = malloc(sizeof(glGenFramebuffers_PACKED));
    packed_data->format = glGenFramebuffers_FORMAT;
    packed_data->func = glGenFramebuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = framebuffers;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGenRenderbuffers
static inline void push_glGenRenderbuffers(glGenRenderbuffers_ARG_EXPAND) {
    glGenRenderbuffers_PACKED *packed_data = malloc(sizeof(glGenRenderbuffers_PACKED));
    packed_data->format = glGenRenderbuffers_FORMAT;
    packed_data->func = glGenRenderbuffers;
    packed_data->args.a1 = n;
    packed_data->args.a2 = renderbuffers;
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
#ifndef direct_glGenerateMipmap
static inline void push_glGenerateMipmap(glGenerateMipmap_ARG_EXPAND) {
    glGenerateMipmap_PACKED *packed_data = malloc(sizeof(glGenerateMipmap_PACKED));
    packed_data->format = glGenerateMipmap_FORMAT;
    packed_data->func = glGenerateMipmap;
    packed_data->args.a1 = target;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetActiveAttrib
static inline void push_glGetActiveAttrib(glGetActiveAttrib_ARG_EXPAND) {
    glGetActiveAttrib_PACKED *packed_data = malloc(sizeof(glGetActiveAttrib_PACKED));
    packed_data->format = glGetActiveAttrib_FORMAT;
    packed_data->func = glGetActiveAttrib;
    packed_data->args.a1 = program;
    packed_data->args.a2 = index;
    packed_data->args.a3 = bufSize;
    packed_data->args.a4 = length;
    packed_data->args.a5 = size;
    packed_data->args.a6 = type;
    packed_data->args.a7 = name;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetActiveUniform
static inline void push_glGetActiveUniform(glGetActiveUniform_ARG_EXPAND) {
    glGetActiveUniform_PACKED *packed_data = malloc(sizeof(glGetActiveUniform_PACKED));
    packed_data->format = glGetActiveUniform_FORMAT;
    packed_data->func = glGetActiveUniform;
    packed_data->args.a1 = program;
    packed_data->args.a2 = index;
    packed_data->args.a3 = bufSize;
    packed_data->args.a4 = length;
    packed_data->args.a5 = size;
    packed_data->args.a6 = type;
    packed_data->args.a7 = name;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetAttachedShaders
static inline void push_glGetAttachedShaders(glGetAttachedShaders_ARG_EXPAND) {
    glGetAttachedShaders_PACKED *packed_data = malloc(sizeof(glGetAttachedShaders_PACKED));
    packed_data->format = glGetAttachedShaders_FORMAT;
    packed_data->func = glGetAttachedShaders;
    packed_data->args.a1 = program;
    packed_data->args.a2 = maxCount;
    packed_data->args.a3 = count;
    packed_data->args.a4 = obj;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetAttribLocation
static inline void push_glGetAttribLocation(glGetAttribLocation_ARG_EXPAND) {
    glGetAttribLocation_PACKED *packed_data = malloc(sizeof(glGetAttribLocation_PACKED));
    packed_data->format = glGetAttribLocation_FORMAT;
    packed_data->func = glGetAttribLocation;
    packed_data->args.a1 = program;
    packed_data->args.a2 = name;
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
#ifndef direct_glGetError
static inline void push_glGetError(glGetError_ARG_EXPAND) {
    glGetError_PACKED *packed_data = malloc(sizeof(glGetError_PACKED));
    packed_data->format = glGetError_FORMAT;
    packed_data->func = glGetError;
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
#ifndef direct_glGetFramebufferAttachmentParameteriv
static inline void push_glGetFramebufferAttachmentParameteriv(glGetFramebufferAttachmentParameteriv_ARG_EXPAND) {
    glGetFramebufferAttachmentParameteriv_PACKED *packed_data = malloc(sizeof(glGetFramebufferAttachmentParameteriv_PACKED));
    packed_data->format = glGetFramebufferAttachmentParameteriv_FORMAT;
    packed_data->func = glGetFramebufferAttachmentParameteriv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = attachment;
    packed_data->args.a3 = pname;
    packed_data->args.a4 = params;
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
#ifndef direct_glGetProgramInfoLog
static inline void push_glGetProgramInfoLog(glGetProgramInfoLog_ARG_EXPAND) {
    glGetProgramInfoLog_PACKED *packed_data = malloc(sizeof(glGetProgramInfoLog_PACKED));
    packed_data->format = glGetProgramInfoLog_FORMAT;
    packed_data->func = glGetProgramInfoLog;
    packed_data->args.a1 = program;
    packed_data->args.a2 = bufSize;
    packed_data->args.a3 = length;
    packed_data->args.a4 = infoLog;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetProgramiv
static inline void push_glGetProgramiv(glGetProgramiv_ARG_EXPAND) {
    glGetProgramiv_PACKED *packed_data = malloc(sizeof(glGetProgramiv_PACKED));
    packed_data->format = glGetProgramiv_FORMAT;
    packed_data->func = glGetProgramiv;
    packed_data->args.a1 = program;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetRenderbufferParameteriv
static inline void push_glGetRenderbufferParameteriv(glGetRenderbufferParameteriv_ARG_EXPAND) {
    glGetRenderbufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetRenderbufferParameteriv_PACKED));
    packed_data->format = glGetRenderbufferParameteriv_FORMAT;
    packed_data->func = glGetRenderbufferParameteriv;
    packed_data->args.a1 = target;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetShaderInfoLog
static inline void push_glGetShaderInfoLog(glGetShaderInfoLog_ARG_EXPAND) {
    glGetShaderInfoLog_PACKED *packed_data = malloc(sizeof(glGetShaderInfoLog_PACKED));
    packed_data->format = glGetShaderInfoLog_FORMAT;
    packed_data->func = glGetShaderInfoLog;
    packed_data->args.a1 = shader;
    packed_data->args.a2 = bufSize;
    packed_data->args.a3 = length;
    packed_data->args.a4 = infoLog;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetShaderPrecisionFormat
static inline void push_glGetShaderPrecisionFormat(glGetShaderPrecisionFormat_ARG_EXPAND) {
    glGetShaderPrecisionFormat_PACKED *packed_data = malloc(sizeof(glGetShaderPrecisionFormat_PACKED));
    packed_data->format = glGetShaderPrecisionFormat_FORMAT;
    packed_data->func = glGetShaderPrecisionFormat;
    packed_data->args.a1 = shadertype;
    packed_data->args.a2 = precisiontype;
    packed_data->args.a3 = range;
    packed_data->args.a4 = precision;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetShaderSource
static inline void push_glGetShaderSource(glGetShaderSource_ARG_EXPAND) {
    glGetShaderSource_PACKED *packed_data = malloc(sizeof(glGetShaderSource_PACKED));
    packed_data->format = glGetShaderSource_FORMAT;
    packed_data->func = glGetShaderSource;
    packed_data->args.a1 = shader;
    packed_data->args.a2 = bufSize;
    packed_data->args.a3 = length;
    packed_data->args.a4 = source;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetShaderiv
static inline void push_glGetShaderiv(glGetShaderiv_ARG_EXPAND) {
    glGetShaderiv_PACKED *packed_data = malloc(sizeof(glGetShaderiv_PACKED));
    packed_data->format = glGetShaderiv_FORMAT;
    packed_data->func = glGetShaderiv;
    packed_data->args.a1 = shader;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
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
#ifndef direct_glGetUniformLocation
static inline void push_glGetUniformLocation(glGetUniformLocation_ARG_EXPAND) {
    glGetUniformLocation_PACKED *packed_data = malloc(sizeof(glGetUniformLocation_PACKED));
    packed_data->format = glGetUniformLocation_FORMAT;
    packed_data->func = glGetUniformLocation;
    packed_data->args.a1 = program;
    packed_data->args.a2 = name;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetUniformfv
static inline void push_glGetUniformfv(glGetUniformfv_ARG_EXPAND) {
    glGetUniformfv_PACKED *packed_data = malloc(sizeof(glGetUniformfv_PACKED));
    packed_data->format = glGetUniformfv_FORMAT;
    packed_data->func = glGetUniformfv;
    packed_data->args.a1 = program;
    packed_data->args.a2 = location;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetUniformiv
static inline void push_glGetUniformiv(glGetUniformiv_ARG_EXPAND) {
    glGetUniformiv_PACKED *packed_data = malloc(sizeof(glGetUniformiv_PACKED));
    packed_data->format = glGetUniformiv_FORMAT;
    packed_data->func = glGetUniformiv;
    packed_data->args.a1 = program;
    packed_data->args.a2 = location;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetVertexAttribPointerv
static inline void push_glGetVertexAttribPointerv(glGetVertexAttribPointerv_ARG_EXPAND) {
    glGetVertexAttribPointerv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribPointerv_PACKED));
    packed_data->format = glGetVertexAttribPointerv_FORMAT;
    packed_data->func = glGetVertexAttribPointerv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = pointer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetVertexAttribfv
static inline void push_glGetVertexAttribfv(glGetVertexAttribfv_ARG_EXPAND) {
    glGetVertexAttribfv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribfv_PACKED));
    packed_data->format = glGetVertexAttribfv_FORMAT;
    packed_data->func = glGetVertexAttribfv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = pname;
    packed_data->args.a3 = params;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glGetVertexAttribiv
static inline void push_glGetVertexAttribiv(glGetVertexAttribiv_ARG_EXPAND) {
    glGetVertexAttribiv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribiv_PACKED));
    packed_data->format = glGetVertexAttribiv_FORMAT;
    packed_data->func = glGetVertexAttribiv;
    packed_data->args.a1 = index;
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
#ifndef direct_glIsFramebuffer
static inline void push_glIsFramebuffer(glIsFramebuffer_ARG_EXPAND) {
    glIsFramebuffer_PACKED *packed_data = malloc(sizeof(glIsFramebuffer_PACKED));
    packed_data->format = glIsFramebuffer_FORMAT;
    packed_data->func = glIsFramebuffer;
    packed_data->args.a1 = framebuffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsProgram
static inline void push_glIsProgram(glIsProgram_ARG_EXPAND) {
    glIsProgram_PACKED *packed_data = malloc(sizeof(glIsProgram_PACKED));
    packed_data->format = glIsProgram_FORMAT;
    packed_data->func = glIsProgram;
    packed_data->args.a1 = program;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsRenderbuffer
static inline void push_glIsRenderbuffer(glIsRenderbuffer_ARG_EXPAND) {
    glIsRenderbuffer_PACKED *packed_data = malloc(sizeof(glIsRenderbuffer_PACKED));
    packed_data->format = glIsRenderbuffer_FORMAT;
    packed_data->func = glIsRenderbuffer;
    packed_data->args.a1 = renderbuffer;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glIsShader
static inline void push_glIsShader(glIsShader_ARG_EXPAND) {
    glIsShader_PACKED *packed_data = malloc(sizeof(glIsShader_PACKED));
    packed_data->format = glIsShader_FORMAT;
    packed_data->func = glIsShader;
    packed_data->args.a1 = shader;
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
#ifndef direct_glLineWidth
static inline void push_glLineWidth(glLineWidth_ARG_EXPAND) {
    glLineWidth_PACKED *packed_data = malloc(sizeof(glLineWidth_PACKED));
    packed_data->format = glLineWidth_FORMAT;
    packed_data->func = glLineWidth;
    packed_data->args.a1 = width;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glLinkProgram
static inline void push_glLinkProgram(glLinkProgram_ARG_EXPAND) {
    glLinkProgram_PACKED *packed_data = malloc(sizeof(glLinkProgram_PACKED));
    packed_data->format = glLinkProgram_FORMAT;
    packed_data->func = glLinkProgram;
    packed_data->args.a1 = program;
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
#ifndef direct_glReleaseShaderCompiler
static inline void push_glReleaseShaderCompiler(glReleaseShaderCompiler_ARG_EXPAND) {
    glReleaseShaderCompiler_PACKED *packed_data = malloc(sizeof(glReleaseShaderCompiler_PACKED));
    packed_data->format = glReleaseShaderCompiler_FORMAT;
    packed_data->func = glReleaseShaderCompiler;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glRenderbufferStorage
static inline void push_glRenderbufferStorage(glRenderbufferStorage_ARG_EXPAND) {
    glRenderbufferStorage_PACKED *packed_data = malloc(sizeof(glRenderbufferStorage_PACKED));
    packed_data->format = glRenderbufferStorage_FORMAT;
    packed_data->func = glRenderbufferStorage;
    packed_data->args.a1 = target;
    packed_data->args.a2 = internalformat;
    packed_data->args.a3 = width;
    packed_data->args.a4 = height;
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
#ifndef direct_glShaderBinary
static inline void push_glShaderBinary(glShaderBinary_ARG_EXPAND) {
    glShaderBinary_PACKED *packed_data = malloc(sizeof(glShaderBinary_PACKED));
    packed_data->format = glShaderBinary_FORMAT;
    packed_data->func = glShaderBinary;
    packed_data->args.a1 = n;
    packed_data->args.a2 = shaders;
    packed_data->args.a3 = binaryformat;
    packed_data->args.a4 = binary;
    packed_data->args.a5 = length;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glShaderSource
static inline void push_glShaderSource(glShaderSource_ARG_EXPAND) {
    glShaderSource_PACKED *packed_data = malloc(sizeof(glShaderSource_PACKED));
    packed_data->format = glShaderSource_FORMAT;
    packed_data->func = glShaderSource;
    packed_data->args.a1 = shader;
    packed_data->args.a2 = count;
    packed_data->args.a3 = string;
    packed_data->args.a4 = length;
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
#ifndef direct_glStencilFuncSeparate
static inline void push_glStencilFuncSeparate(glStencilFuncSeparate_ARG_EXPAND) {
    glStencilFuncSeparate_PACKED *packed_data = malloc(sizeof(glStencilFuncSeparate_PACKED));
    packed_data->format = glStencilFuncSeparate_FORMAT;
    packed_data->func = glStencilFuncSeparate;
    packed_data->args.a1 = face;
    packed_data->args.a2 = func;
    packed_data->args.a3 = ref;
    packed_data->args.a4 = mask;
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
#ifndef direct_glStencilMaskSeparate
static inline void push_glStencilMaskSeparate(glStencilMaskSeparate_ARG_EXPAND) {
    glStencilMaskSeparate_PACKED *packed_data = malloc(sizeof(glStencilMaskSeparate_PACKED));
    packed_data->format = glStencilMaskSeparate_FORMAT;
    packed_data->func = glStencilMaskSeparate;
    packed_data->args.a1 = face;
    packed_data->args.a2 = mask;
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
#ifndef direct_glStencilOpSeparate
static inline void push_glStencilOpSeparate(glStencilOpSeparate_ARG_EXPAND) {
    glStencilOpSeparate_PACKED *packed_data = malloc(sizeof(glStencilOpSeparate_PACKED));
    packed_data->format = glStencilOpSeparate_FORMAT;
    packed_data->func = glStencilOpSeparate;
    packed_data->args.a1 = face;
    packed_data->args.a2 = sfail;
    packed_data->args.a3 = zfail;
    packed_data->args.a4 = zpass;
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
#ifndef direct_glUniform1f
static inline void push_glUniform1f(glUniform1f_ARG_EXPAND) {
    glUniform1f_PACKED *packed_data = malloc(sizeof(glUniform1f_PACKED));
    packed_data->format = glUniform1f_FORMAT;
    packed_data->func = glUniform1f;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform1fv
static inline void push_glUniform1fv(glUniform1fv_ARG_EXPAND) {
    glUniform1fv_PACKED *packed_data = malloc(sizeof(glUniform1fv_PACKED));
    packed_data->format = glUniform1fv_FORMAT;
    packed_data->func = glUniform1fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform1i
static inline void push_glUniform1i(glUniform1i_ARG_EXPAND) {
    glUniform1i_PACKED *packed_data = malloc(sizeof(glUniform1i_PACKED));
    packed_data->format = glUniform1i_FORMAT;
    packed_data->func = glUniform1i;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform1iv
static inline void push_glUniform1iv(glUniform1iv_ARG_EXPAND) {
    glUniform1iv_PACKED *packed_data = malloc(sizeof(glUniform1iv_PACKED));
    packed_data->format = glUniform1iv_FORMAT;
    packed_data->func = glUniform1iv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform2f
static inline void push_glUniform2f(glUniform2f_ARG_EXPAND) {
    glUniform2f_PACKED *packed_data = malloc(sizeof(glUniform2f_PACKED));
    packed_data->format = glUniform2f_FORMAT;
    packed_data->func = glUniform2f;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform2fv
static inline void push_glUniform2fv(glUniform2fv_ARG_EXPAND) {
    glUniform2fv_PACKED *packed_data = malloc(sizeof(glUniform2fv_PACKED));
    packed_data->format = glUniform2fv_FORMAT;
    packed_data->func = glUniform2fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform2i
static inline void push_glUniform2i(glUniform2i_ARG_EXPAND) {
    glUniform2i_PACKED *packed_data = malloc(sizeof(glUniform2i_PACKED));
    packed_data->format = glUniform2i_FORMAT;
    packed_data->func = glUniform2i;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform2iv
static inline void push_glUniform2iv(glUniform2iv_ARG_EXPAND) {
    glUniform2iv_PACKED *packed_data = malloc(sizeof(glUniform2iv_PACKED));
    packed_data->format = glUniform2iv_FORMAT;
    packed_data->func = glUniform2iv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform3f
static inline void push_glUniform3f(glUniform3f_ARG_EXPAND) {
    glUniform3f_PACKED *packed_data = malloc(sizeof(glUniform3f_PACKED));
    packed_data->format = glUniform3f_FORMAT;
    packed_data->func = glUniform3f;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    packed_data->args.a4 = v2;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform3fv
static inline void push_glUniform3fv(glUniform3fv_ARG_EXPAND) {
    glUniform3fv_PACKED *packed_data = malloc(sizeof(glUniform3fv_PACKED));
    packed_data->format = glUniform3fv_FORMAT;
    packed_data->func = glUniform3fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform3i
static inline void push_glUniform3i(glUniform3i_ARG_EXPAND) {
    glUniform3i_PACKED *packed_data = malloc(sizeof(glUniform3i_PACKED));
    packed_data->format = glUniform3i_FORMAT;
    packed_data->func = glUniform3i;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    packed_data->args.a4 = v2;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform3iv
static inline void push_glUniform3iv(glUniform3iv_ARG_EXPAND) {
    glUniform3iv_PACKED *packed_data = malloc(sizeof(glUniform3iv_PACKED));
    packed_data->format = glUniform3iv_FORMAT;
    packed_data->func = glUniform3iv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform4f
static inline void push_glUniform4f(glUniform4f_ARG_EXPAND) {
    glUniform4f_PACKED *packed_data = malloc(sizeof(glUniform4f_PACKED));
    packed_data->format = glUniform4f_FORMAT;
    packed_data->func = glUniform4f;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    packed_data->args.a4 = v2;
    packed_data->args.a5 = v3;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform4fv
static inline void push_glUniform4fv(glUniform4fv_ARG_EXPAND) {
    glUniform4fv_PACKED *packed_data = malloc(sizeof(glUniform4fv_PACKED));
    packed_data->format = glUniform4fv_FORMAT;
    packed_data->func = glUniform4fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform4i
static inline void push_glUniform4i(glUniform4i_ARG_EXPAND) {
    glUniform4i_PACKED *packed_data = malloc(sizeof(glUniform4i_PACKED));
    packed_data->format = glUniform4i_FORMAT;
    packed_data->func = glUniform4i;
    packed_data->args.a1 = location;
    packed_data->args.a2 = v0;
    packed_data->args.a3 = v1;
    packed_data->args.a4 = v2;
    packed_data->args.a5 = v3;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniform4iv
static inline void push_glUniform4iv(glUniform4iv_ARG_EXPAND) {
    glUniform4iv_PACKED *packed_data = malloc(sizeof(glUniform4iv_PACKED));
    packed_data->format = glUniform4iv_FORMAT;
    packed_data->func = glUniform4iv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniformMatrix2fv
static inline void push_glUniformMatrix2fv(glUniformMatrix2fv_ARG_EXPAND) {
    glUniformMatrix2fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix2fv_PACKED));
    packed_data->format = glUniformMatrix2fv_FORMAT;
    packed_data->func = glUniformMatrix2fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = transpose;
    packed_data->args.a4 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniformMatrix3fv
static inline void push_glUniformMatrix3fv(glUniformMatrix3fv_ARG_EXPAND) {
    glUniformMatrix3fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix3fv_PACKED));
    packed_data->format = glUniformMatrix3fv_FORMAT;
    packed_data->func = glUniformMatrix3fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = transpose;
    packed_data->args.a4 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUniformMatrix4fv
static inline void push_glUniformMatrix4fv(glUniformMatrix4fv_ARG_EXPAND) {
    glUniformMatrix4fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix4fv_PACKED));
    packed_data->format = glUniformMatrix4fv_FORMAT;
    packed_data->func = glUniformMatrix4fv;
    packed_data->args.a1 = location;
    packed_data->args.a2 = count;
    packed_data->args.a3 = transpose;
    packed_data->args.a4 = value;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glUseProgram
static inline void push_glUseProgram(glUseProgram_ARG_EXPAND) {
    glUseProgram_PACKED *packed_data = malloc(sizeof(glUseProgram_PACKED));
    packed_data->format = glUseProgram_FORMAT;
    packed_data->func = glUseProgram;
    packed_data->args.a1 = program;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glValidateProgram
static inline void push_glValidateProgram(glValidateProgram_ARG_EXPAND) {
    glValidateProgram_PACKED *packed_data = malloc(sizeof(glValidateProgram_PACKED));
    packed_data->format = glValidateProgram_FORMAT;
    packed_data->func = glValidateProgram;
    packed_data->args.a1 = program;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib1f
static inline void push_glVertexAttrib1f(glVertexAttrib1f_ARG_EXPAND) {
    glVertexAttrib1f_PACKED *packed_data = malloc(sizeof(glVertexAttrib1f_PACKED));
    packed_data->format = glVertexAttrib1f_FORMAT;
    packed_data->func = glVertexAttrib1f;
    packed_data->args.a1 = index;
    packed_data->args.a2 = x;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib1fv
static inline void push_glVertexAttrib1fv(glVertexAttrib1fv_ARG_EXPAND) {
    glVertexAttrib1fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib1fv_PACKED));
    packed_data->format = glVertexAttrib1fv_FORMAT;
    packed_data->func = glVertexAttrib1fv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = v;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib2f
static inline void push_glVertexAttrib2f(glVertexAttrib2f_ARG_EXPAND) {
    glVertexAttrib2f_PACKED *packed_data = malloc(sizeof(glVertexAttrib2f_PACKED));
    packed_data->format = glVertexAttrib2f_FORMAT;
    packed_data->func = glVertexAttrib2f;
    packed_data->args.a1 = index;
    packed_data->args.a2 = x;
    packed_data->args.a3 = y;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib2fv
static inline void push_glVertexAttrib2fv(glVertexAttrib2fv_ARG_EXPAND) {
    glVertexAttrib2fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib2fv_PACKED));
    packed_data->format = glVertexAttrib2fv_FORMAT;
    packed_data->func = glVertexAttrib2fv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = v;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib3f
static inline void push_glVertexAttrib3f(glVertexAttrib3f_ARG_EXPAND) {
    glVertexAttrib3f_PACKED *packed_data = malloc(sizeof(glVertexAttrib3f_PACKED));
    packed_data->format = glVertexAttrib3f_FORMAT;
    packed_data->func = glVertexAttrib3f;
    packed_data->args.a1 = index;
    packed_data->args.a2 = x;
    packed_data->args.a3 = y;
    packed_data->args.a4 = z;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib3fv
static inline void push_glVertexAttrib3fv(glVertexAttrib3fv_ARG_EXPAND) {
    glVertexAttrib3fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib3fv_PACKED));
    packed_data->format = glVertexAttrib3fv_FORMAT;
    packed_data->func = glVertexAttrib3fv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = v;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib4f
static inline void push_glVertexAttrib4f(glVertexAttrib4f_ARG_EXPAND) {
    glVertexAttrib4f_PACKED *packed_data = malloc(sizeof(glVertexAttrib4f_PACKED));
    packed_data->format = glVertexAttrib4f_FORMAT;
    packed_data->func = glVertexAttrib4f;
    packed_data->args.a1 = index;
    packed_data->args.a2 = x;
    packed_data->args.a3 = y;
    packed_data->args.a4 = z;
    packed_data->args.a5 = w;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttrib4fv
static inline void push_glVertexAttrib4fv(glVertexAttrib4fv_ARG_EXPAND) {
    glVertexAttrib4fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib4fv_PACKED));
    packed_data->format = glVertexAttrib4fv_FORMAT;
    packed_data->func = glVertexAttrib4fv;
    packed_data->args.a1 = index;
    packed_data->args.a2 = v;
    glPushCall((void *)packed_data);
}
#endif
#ifndef direct_glVertexAttribPointer
static inline void push_glVertexAttribPointer(glVertexAttribPointer_ARG_EXPAND) {
    glVertexAttribPointer_PACKED *packed_data = malloc(sizeof(glVertexAttribPointer_PACKED));
    packed_data->format = glVertexAttribPointer_FORMAT;
    packed_data->func = glVertexAttribPointer;
    packed_data->args.a1 = index;
    packed_data->args.a2 = size;
    packed_data->args.a3 = type;
    packed_data->args.a4 = normalized;
    packed_data->args.a5 = stride;
    packed_data->args.a6 = pointer;
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
