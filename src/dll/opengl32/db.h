#define func_type void WINAPI
#define func_name glAccum
#define func_args_proto(F) \
	F(GLenum,op), \
	F(GLfloat,value)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glAlphaFunc
#define func_args_proto(F) \
	F(GLenum,func), \
	F(GLclampf,ref)
#define func_body
#include "tools/func.h"

#define func_type GLboolean WINAPI
#define func_name glAreTexturesResident
#define func_args_proto(F) \
	F(GLsizei,n), \
	F(const GLuint *,textures), \
	F(GLboolean *,residences)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glArrayElement
#define func_args_proto(F) \
	F(GLint,i)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glBegin
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glBindTexture
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLuint,texture)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glBitmap
#define func_args_proto(F) \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLfloat,xorig), \
	F(GLfloat,yorig), \
	F(GLfloat,xmove), \
	F(GLfloat,ymove), \
	F(const GLubyte *,bitmap)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glBlendFunc
#define func_args_proto(F) \
	F(GLenum,sfactor), \
	F(GLenum,dfactor)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCallList
#define func_args_proto(F) \
	F(GLuint,list)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCallLists
#define func_args_proto(F) \
	F(GLsizei,n), \
	F(GLenum,type), \
	F(const GLvoid *,lists)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClear
#define func_args_proto(F) \
	F(GLbitfield,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClearAccum
#define func_args_proto(F) \
	F(GLfloat,red), \
	F(GLfloat,green), \
	F(GLfloat,blue), \
	F(GLfloat,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClearColor
#define func_args_proto(F) \
	F(GLclampf,red), \
	F(GLclampf,green), \
	F(GLclampf,blue), \
	F(GLclampf,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClearDepth
#define func_args_proto(F) \
	F(GLclampd,depth)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClearIndex
#define func_args_proto(F) \
	F(GLfloat,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClearStencil
#define func_args_proto(F) \
	F(GLint,s)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glClipPlane
#define func_args_proto(F) \
	F(GLenum,plane), \
	F(const GLdouble *,equation)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3b
#define func_args_proto(F) \
	F(GLbyte,red), \
	F(GLbyte,green), \
	F(GLbyte,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3bv
#define func_args_proto(F) \
	F(const GLbyte *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3d
#define func_args_proto(F) \
	F(GLdouble,red), \
	F(GLdouble,green), \
	F(GLdouble,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3f
#define func_args_proto(F) \
	F(GLfloat,red), \
	F(GLfloat,green), \
	F(GLfloat,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3i
#define func_args_proto(F) \
	F(GLint,red), \
	F(GLint,green), \
	F(GLint,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3s
#define func_args_proto(F) \
	F(GLshort,red), \
	F(GLshort,green), \
	F(GLshort,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3ub
#define func_args_proto(F) \
	F(GLubyte,red), \
	F(GLubyte,green), \
	F(GLubyte,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3ubv
#define func_args_proto(F) \
	F(const GLubyte *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3ui
#define func_args_proto(F) \
	F(GLuint,red), \
	F(GLuint,green), \
	F(GLuint,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3uiv
#define func_args_proto(F) \
	F(const GLuint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3us
#define func_args_proto(F) \
	F(GLushort,red), \
	F(GLushort,green), \
	F(GLushort,blue)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor3usv
#define func_args_proto(F) \
	F(const GLushort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4b
#define func_args_proto(F) \
	F(GLbyte,red), \
	F(GLbyte,green), \
	F(GLbyte,blue), \
	F(GLbyte,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4bv
#define func_args_proto(F) \
	F(const GLbyte *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4d
#define func_args_proto(F) \
	F(GLdouble,red), \
	F(GLdouble,green), \
	F(GLdouble,blue), \
	F(GLdouble,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4f
#define func_args_proto(F) \
	F(GLfloat,red), \
	F(GLfloat,green), \
	F(GLfloat,blue), \
	F(GLfloat,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4i
#define func_args_proto(F) \
	F(GLint,red), \
	F(GLint,green), \
	F(GLint,blue), \
	F(GLint,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4s
#define func_args_proto(F) \
	F(GLshort,red), \
	F(GLshort,green), \
	F(GLshort,blue), \
	F(GLshort,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4ub
#define func_args_proto(F) \
	F(GLubyte,red), \
	F(GLubyte,green), \
	F(GLubyte,blue), \
	F(GLubyte,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4ubv
#define func_args_proto(F) \
	F(const GLubyte *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4ui
#define func_args_proto(F) \
	F(GLuint,red), \
	F(GLuint,green), \
	F(GLuint,blue), \
	F(GLuint,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4uiv
#define func_args_proto(F) \
	F(const GLuint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4us
#define func_args_proto(F) \
	F(GLushort,red), \
	F(GLushort,green), \
	F(GLushort,blue), \
	F(GLushort,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColor4usv
#define func_args_proto(F) \
	F(const GLushort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColorMask
#define func_args_proto(F) \
	F(GLboolean,red), \
	F(GLboolean,green), \
	F(GLboolean,blue), \
	F(GLboolean,alpha)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColorMaterial
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glColorPointer
#define func_args_proto(F) \
	F(GLint,size), \
	F(GLenum,type), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCopyPixels
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLenum,type)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCopyTexImage1D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLenum,internalFormat), \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLint,border)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCopyTexImage2D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLenum,internalFormat), \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLint,border)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCopyTexSubImage1D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,xoffset), \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCopyTexSubImage2D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,xoffset), \
	F(GLint,yoffset), \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glCullFace
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDeleteLists
#define func_args_proto(F) \
	F(GLuint,list), \
	F(GLsizei,range)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDeleteTextures
#define func_args_proto(F) \
	F(GLsizei,n), \
	F(const GLuint *,textures)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDepthFunc
#define func_args_proto(F) \
	F(GLenum,func)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDepthMask
#define func_args_proto(F) \
	F(GLboolean,flag)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDepthRange
#define func_args_proto(F) \
	F(GLclampd,zNear), \
	F(GLclampd,zFar)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDisable
#define func_args_proto(F) \
	F(GLenum,cap)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDisableClientState
#define func_args_proto(F) \
	F(GLenum,array)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDrawArrays
#define func_args_proto(F) \
	F(GLenum,mode), \
	F(GLint,first), \
	F(GLsizei,count)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDrawBuffer
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDrawElements
#define func_args_proto(F) \
	F(GLenum,mode), \
	F(GLsizei,count), \
	F(GLenum,type), \
	F(const GLvoid *,indices)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glDrawPixels
#define func_args_proto(F) \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(const GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEdgeFlag
#define func_args_proto(F) \
	F(GLboolean,flag)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEdgeFlagPointer
#define func_args_proto(F) \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEdgeFlagv
#define func_args_proto(F) \
	F(const GLboolean *,flag)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEnable
#define func_args_proto(F) \
	F(GLenum,cap)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEnableClientState
#define func_args_proto(F) \
	F(GLenum,array)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEnd
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEndList
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord1d
#define func_args_proto(F) \
	F(GLdouble,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord1dv
#define func_args_proto(F) \
	F(const GLdouble *,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord1f
#define func_args_proto(F) \
	F(GLfloat,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord1fv
#define func_args_proto(F) \
	F(const GLfloat *,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord2d
#define func_args_proto(F) \
	F(GLdouble,u), \
	F(GLdouble,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord2dv
#define func_args_proto(F) \
	F(const GLdouble *,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord2f
#define func_args_proto(F) \
	F(GLfloat,u), \
	F(GLfloat,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalCoord2fv
#define func_args_proto(F) \
	F(const GLfloat *,u)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalMesh1
#define func_args_proto(F) \
	F(GLenum,mode), \
	F(GLint,i1), \
	F(GLint,i2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalMesh2
#define func_args_proto(F) \
	F(GLenum,mode), \
	F(GLint,i1), \
	F(GLint,i2), \
	F(GLint,j1), \
	F(GLint,j2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalPoint1
#define func_args_proto(F) \
	F(GLint,i)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glEvalPoint2
#define func_args_proto(F) \
	F(GLint,i), \
	F(GLint,j)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFeedbackBuffer
#define func_args_proto(F) \
	F(GLsizei,size), \
	F(GLenum,type), \
	F(GLfloat *,buffer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFinish
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFlush
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFogf
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFogfv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFogi
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFogiv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFrontFace
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glFrustum
#define func_args_proto(F) \
	F(GLdouble,left), \
	F(GLdouble,right), \
	F(GLdouble,bottom), \
	F(GLdouble,top), \
	F(GLdouble,zNear), \
	F(GLdouble,zFar)
#define func_body
#include "tools/func.h"

#define func_type GLuint WINAPI
#define func_name glGenLists
#define func_args_proto(F) \
	F(GLsizei,range)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGenTextures
#define func_args_proto(F) \
	F(GLsizei,n), \
	F(GLuint *,textures)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetBooleanv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLboolean *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetClipPlane
#define func_args_proto(F) \
	F(GLenum,plane), \
	F(GLdouble *,equation)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetDoublev
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLdouble *,params)
#define func_body
#include "tools/func.h"

#define func_type GLenum WINAPI
#define func_name glGetError
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetFloatv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetIntegerv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetLightfv
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetLightiv
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetMapdv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,query), \
	F(GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetMapfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,query), \
	F(GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetMapiv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,query), \
	F(GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetMaterialfv
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetMaterialiv
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetPixelMapfv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLfloat *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetPixelMapuiv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLuint *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetPixelMapusv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLushort *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetPointerv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLvoid **,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetPolygonStipple
#define func_args_proto(F) \
	F(GLubyte *,mask)
#define func_body
#include "tools/func.h"

#define func_type const GLubyte * WINAPI
#define func_name glGetString
#define func_args_proto(F) \
	F(GLenum,name)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexEnvfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexEnviv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexGendv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLdouble *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexGenfv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexGeniv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexImage
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexLevelParameterfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexLevelParameteriv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexParameterfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glGetTexParameteriv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glHint
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexMask
#define func_args_proto(F) \
	F(GLuint,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexPointer
#define func_args_proto(F) \
	F(GLenum,type), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexd
#define func_args_proto(F) \
	F(GLdouble,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexdv
#define func_args_proto(F) \
	F(const GLdouble *,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexf
#define func_args_proto(F) \
	F(GLfloat,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexfv
#define func_args_proto(F) \
	F(const GLfloat *,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexi
#define func_args_proto(F) \
	F(GLint,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexiv
#define func_args_proto(F) \
	F(const GLint *,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexs
#define func_args_proto(F) \
	F(GLshort,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexsv
#define func_args_proto(F) \
	F(const GLshort *,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexub
#define func_args_proto(F) \
	F(GLubyte,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glIndexubv
#define func_args_proto(F) \
	F(const GLubyte *,c)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glInitNames
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glInterleavedArrays
#define func_args_proto(F) \
	F(GLenum,format), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type GLboolean WINAPI
#define func_name glIsEnabled
#define func_args_proto(F) \
	F(GLenum,cap)
#define func_body
#include "tools/func.h"

#define func_type GLboolean WINAPI
#define func_name glIsList
#define func_args_proto(F) \
	F(GLuint,list)
#define func_body
#include "tools/func.h"

#define func_type GLboolean WINAPI
#define func_name glIsTexture
#define func_args_proto(F) \
	F(GLuint,texture)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightModelf
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightModelfv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightModeli
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightModeliv
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightf
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightfv
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLighti
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLightiv
#define func_args_proto(F) \
	F(GLenum,light), \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLineStipple
#define func_args_proto(F) \
	F(GLint,factor), \
	F(GLushort,pattern)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLineWidth
#define func_args_proto(F) \
	F(GLfloat,width)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glListBase
#define func_args_proto(F) \
	F(GLuint,base)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLoadIdentity
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLoadMatrixd
#define func_args_proto(F) \
	F(const GLdouble *,m)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLoadMatrixf
#define func_args_proto(F) \
	F(const GLfloat *,m)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLoadName
#define func_args_proto(F) \
	F(GLuint,name)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glLogicOp
#define func_args_proto(F) \
	F(GLenum,opcode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMap1d
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLdouble,u1), \
	F(GLdouble,u2), \
	F(GLint,stride), \
	F(GLint,order), \
	F(const GLdouble *,points)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMap1f
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLfloat,u1), \
	F(GLfloat,u2), \
	F(GLint,stride), \
	F(GLint,order), \
	F(const GLfloat *,points)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMap2d
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLdouble,u1), \
	F(GLdouble,u2), \
	F(GLint,ustride), \
	F(GLint,uorder), \
	F(GLdouble,v1), \
	F(GLdouble,v2), \
	F(GLint,vstride), \
	F(GLint,vorder), \
	F(const GLdouble *,points)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMap2f
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLfloat,u1), \
	F(GLfloat,u2), \
	F(GLint,ustride), \
	F(GLint,uorder), \
	F(GLfloat,v1), \
	F(GLfloat,v2), \
	F(GLint,vstride), \
	F(GLint,vorder), \
	F(const GLfloat *,points)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMapGrid1d
#define func_args_proto(F) \
	F(GLint,un), \
	F(GLdouble,u1), \
	F(GLdouble,u2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMapGrid1f
#define func_args_proto(F) \
	F(GLint,un), \
	F(GLfloat,u1), \
	F(GLfloat,u2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMapGrid2d
#define func_args_proto(F) \
	F(GLint,un), \
	F(GLdouble,u1), \
	F(GLdouble,u2), \
	F(GLint,vn), \
	F(GLdouble,v1), \
	F(GLdouble,v2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMapGrid2f
#define func_args_proto(F) \
	F(GLint,un), \
	F(GLfloat,u1), \
	F(GLfloat,u2), \
	F(GLint,vn), \
	F(GLfloat,v1), \
	F(GLfloat,v2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMaterialf
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMaterialfv
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMateriali
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMaterialiv
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMatrixMode
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMultMatrixd
#define func_args_proto(F) \
	F(const GLdouble *,m)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glMultMatrixf
#define func_args_proto(F) \
	F(const GLfloat *,m)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNewList
#define func_args_proto(F) \
	F(GLuint,list), \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3b
#define func_args_proto(F) \
	F(GLbyte,nx), \
	F(GLbyte,ny), \
	F(GLbyte,nz)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3bv
#define func_args_proto(F) \
	F(const GLbyte *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3d
#define func_args_proto(F) \
	F(GLdouble,nx), \
	F(GLdouble,ny), \
	F(GLdouble,nz)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3f
#define func_args_proto(F) \
	F(GLfloat,nx), \
	F(GLfloat,ny), \
	F(GLfloat,nz)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3i
#define func_args_proto(F) \
	F(GLint,nx), \
	F(GLint,ny), \
	F(GLint,nz)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3s
#define func_args_proto(F) \
	F(GLshort,nx), \
	F(GLshort,ny), \
	F(GLshort,nz)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormal3sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glNormalPointer
#define func_args_proto(F) \
	F(GLenum,type), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glOrtho
#define func_args_proto(F) \
	F(GLdouble,left), \
	F(GLdouble,right), \
	F(GLdouble,bottom), \
	F(GLdouble,top), \
	F(GLdouble,zNear), \
	F(GLdouble,zFar)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPassThrough
#define func_args_proto(F) \
	F(GLfloat,token)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelMapfv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLsizei,mapsize), \
	F(const GLfloat *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelMapuiv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLsizei,mapsize), \
	F(const GLuint *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelMapusv
#define func_args_proto(F) \
	F(GLenum,map), \
	F(GLsizei,mapsize), \
	F(const GLushort *,values)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelStoref
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelStorei
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelTransferf
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelTransferi
#define func_args_proto(F) \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPixelZoom
#define func_args_proto(F) \
	F(GLfloat,xfactor), \
	F(GLfloat,yfactor)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPointSize
#define func_args_proto(F) \
	F(GLfloat,size)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPolygonMode
#define func_args_proto(F) \
	F(GLenum,face), \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPolygonOffset
#define func_args_proto(F) \
	F(GLfloat,factor), \
	F(GLfloat,units)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPolygonStipple
#define func_args_proto(F) \
	F(const GLubyte *,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPopAttrib
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPopClientAttrib
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPopMatrix
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPopName
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPrioritizeTextures
#define func_args_proto(F) \
	F(GLsizei,n), \
	F(const GLuint *,textures), \
	F(const GLclampf *,priorities)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPushAttrib
#define func_args_proto(F) \
	F(GLbitfield,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPushClientAttrib
#define func_args_proto(F) \
	F(GLbitfield,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPushMatrix
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glPushName
#define func_args_proto(F) \
	F(GLuint,name)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos2sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLint,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y), \
	F(GLshort,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos3sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z), \
	F(GLdouble,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z), \
	F(GLfloat,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLint,z), \
	F(GLint,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y), \
	F(GLshort,z), \
	F(GLshort,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRasterPos4sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glReadBuffer
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glReadPixels
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectd
#define func_args_proto(F) \
	F(GLdouble,x1), \
	F(GLdouble,y1), \
	F(GLdouble,x2), \
	F(GLdouble,y2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectdv
#define func_args_proto(F) \
	F(const GLdouble *,v1), \
	F(const GLdouble *,v2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectf
#define func_args_proto(F) \
	F(GLfloat,x1), \
	F(GLfloat,y1), \
	F(GLfloat,x2), \
	F(GLfloat,y2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectfv
#define func_args_proto(F) \
	F(const GLfloat *,v1), \
	F(const GLfloat *,v2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRecti
#define func_args_proto(F) \
	F(GLint,x1), \
	F(GLint,y1), \
	F(GLint,x2), \
	F(GLint,y2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectiv
#define func_args_proto(F) \
	F(const GLint *,v1), \
	F(const GLint *,v2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRects
#define func_args_proto(F) \
	F(GLshort,x1), \
	F(GLshort,y1), \
	F(GLshort,x2), \
	F(GLshort,y2)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRectsv
#define func_args_proto(F) \
	F(const GLshort *,v1), \
	F(const GLshort *,v2)
#define func_body
#include "tools/func.h"

#define func_type GLint WINAPI
#define func_name glRenderMode
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRotated
#define func_args_proto(F) \
	F(GLdouble,angle), \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glRotatef
#define func_args_proto(F) \
	F(GLfloat,angle), \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glScaled
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glScalef
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glScissor
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glSelectBuffer
#define func_args_proto(F) \
	F(GLsizei,size), \
	F(GLuint *,buffer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glShadeModel
#define func_args_proto(F) \
	F(GLenum,mode)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glStencilFunc
#define func_args_proto(F) \
	F(GLenum,func), \
	F(GLint,ref), \
	F(GLuint,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glStencilMask
#define func_args_proto(F) \
	F(GLuint,mask)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glStencilOp
#define func_args_proto(F) \
	F(GLenum,fail), \
	F(GLenum,zfail), \
	F(GLenum,zpass)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1d
#define func_args_proto(F) \
	F(GLdouble,s)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1f
#define func_args_proto(F) \
	F(GLfloat,s)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1i
#define func_args_proto(F) \
	F(GLint,s)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1s
#define func_args_proto(F) \
	F(GLshort,s)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord1sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2d
#define func_args_proto(F) \
	F(GLdouble,s), \
	F(GLdouble,t)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2f
#define func_args_proto(F) \
	F(GLfloat,s), \
	F(GLfloat,t)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2i
#define func_args_proto(F) \
	F(GLint,s), \
	F(GLint,t)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2s
#define func_args_proto(F) \
	F(GLshort,s), \
	F(GLshort,t)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord2sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3d
#define func_args_proto(F) \
	F(GLdouble,s), \
	F(GLdouble,t), \
	F(GLdouble,r)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3f
#define func_args_proto(F) \
	F(GLfloat,s), \
	F(GLfloat,t), \
	F(GLfloat,r)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3i
#define func_args_proto(F) \
	F(GLint,s), \
	F(GLint,t), \
	F(GLint,r)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3s
#define func_args_proto(F) \
	F(GLshort,s), \
	F(GLshort,t), \
	F(GLshort,r)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord3sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4d
#define func_args_proto(F) \
	F(GLdouble,s), \
	F(GLdouble,t), \
	F(GLdouble,r), \
	F(GLdouble,q)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4f
#define func_args_proto(F) \
	F(GLfloat,s), \
	F(GLfloat,t), \
	F(GLfloat,r), \
	F(GLfloat,q)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4i
#define func_args_proto(F) \
	F(GLint,s), \
	F(GLint,t), \
	F(GLint,r), \
	F(GLint,q)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4s
#define func_args_proto(F) \
	F(GLshort,s), \
	F(GLshort,t), \
	F(GLshort,r), \
	F(GLshort,q)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoord4sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexCoordPointer
#define func_args_proto(F) \
	F(GLint,size), \
	F(GLenum,type), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexEnvf
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexEnvfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexEnvi
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexEnviv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGend
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLdouble,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGendv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(const GLdouble *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGenf
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGenfv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGeni
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexGeniv
#define func_args_proto(F) \
	F(GLenum,coord), \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexImage1D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,internalformat), \
	F(GLsizei,width), \
	F(GLint,border), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(const GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexImage2D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,internalformat), \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLint,border), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(const GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexParameterf
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLfloat,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexParameterfv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(const GLfloat *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexParameteri
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(GLint,param)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexParameteriv
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLenum,pname), \
	F(const GLint *,params)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexSubImage1D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,xoffset), \
	F(GLsizei,width), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(const GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTexSubImage2D
#define func_args_proto(F) \
	F(GLenum,target), \
	F(GLint,level), \
	F(GLint,xoffset), \
	F(GLint,yoffset), \
	F(GLsizei,width), \
	F(GLsizei,height), \
	F(GLenum,format), \
	F(GLenum,type), \
	F(const GLvoid *,pixels)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTranslated
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glTranslatef
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex2sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLint,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y), \
	F(GLshort,z)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex3sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4d
#define func_args_proto(F) \
	F(GLdouble,x), \
	F(GLdouble,y), \
	F(GLdouble,z), \
	F(GLdouble,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4dv
#define func_args_proto(F) \
	F(const GLdouble *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4f
#define func_args_proto(F) \
	F(GLfloat,x), \
	F(GLfloat,y), \
	F(GLfloat,z), \
	F(GLfloat,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4fv
#define func_args_proto(F) \
	F(const GLfloat *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4i
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLint,z), \
	F(GLint,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4iv
#define func_args_proto(F) \
	F(const GLint *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4s
#define func_args_proto(F) \
	F(GLshort,x), \
	F(GLshort,y), \
	F(GLshort,z), \
	F(GLshort,w)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertex4sv
#define func_args_proto(F) \
	F(const GLshort *,v)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glVertexPointer
#define func_args_proto(F) \
	F(GLint,size), \
	F(GLenum,type), \
	F(GLsizei,stride), \
	F(const GLvoid *,pointer)
#define func_body
#include "tools/func.h"

#define func_type void WINAPI
#define func_name glViewport
#define func_args_proto(F) \
	F(GLint,x), \
	F(GLint,y), \
	F(GLsizei,width), \
	F(GLsizei,height)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglCopyContext
#define func_args_proto(F) \
	F(HGLRC,arg1), \
	F(HGLRC,arg2), \
	F(UINT,arg3)
#define func_body
#include "tools/func.h"

#define func_type HGLRC WINAPI
#define func_name wglCreateContext
#define func_args_proto(F) \
	F(HDC,arg1)
#define func_body
#include "tools/func.h"

#define func_type HGLRC WINAPI
#define func_name wglCreateLayerContext
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(int,arg2)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglDeleteContext
#define func_args_proto(F) \
	F(HGLRC,arg1)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglDescribeLayerPlane
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(int,arg2), \
	F(int,arg3), \
	F(UINT,arg4), \
	F(LPLAYERPLANEDESCRIPTOR,arg5)
#define func_body
#include "tools/func.h"

#define func_type HGLRC WINAPI
#define func_name wglGetCurrentContext
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type HDC WINAPI
#define func_name wglGetCurrentDC
#define func_args_proto(F)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name wglGetLayerPaletteEntries
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(int,arg2), \
	F(int,arg3), \
	F(int,arg4), \
	F(COLORREF *,arg5)
#define func_body
#include "tools/func.h"

#define func_type PROC WINAPI
#define func_name wglGetProcAddress
#define func_args_proto(F) \
	F(LPCSTR,arg1)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglMakeCurrent
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(HGLRC,arg2)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglRealizeLayerPalette
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(int,arg2), \
	F(WINBOOL,arg3)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name wglSetLayerPaletteEntries
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(int,arg2), \
	F(int,arg3), \
	F(int,arg4), \
	F(CONST COLORREF *,arg5)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglShareLists
#define func_args_proto(F) \
	F(HGLRC,arg1), \
	F(HGLRC,arg2)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglSwapLayerBuffers
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(UINT,arg2)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglUseFontBitmapsA
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(DWORD,arg2), \
	F(DWORD,arg3), \
	F(DWORD,arg4)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglUseFontBitmapsW
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(DWORD,arg2), \
	F(DWORD,arg3), \
	F(DWORD,arg4)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglUseFontOutlinesA
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(DWORD,arg2), \
	F(DWORD,arg3), \
	F(DWORD,arg4), \
	F(FLOAT,arg5), \
	F(FLOAT,arg6), \
	F(int,arg7), \
	F(LPGLYPHMETRICSFLOAT,arg8)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglUseFontOutlinesW
#define func_args_proto(F) \
	F(HDC,arg1), \
	F(DWORD,arg2), \
	F(DWORD,arg3), \
	F(DWORD,arg4), \
	F(FLOAT,arg5), \
	F(FLOAT,arg6), \
	F(int,arg7), \
	F(LPGLYPHMETRICSFLOAT,arg8)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name wglChoosePixelFormat
#define func_args_proto(F) \
	F(HDC,hdc), \
	F(const PIXELFORMATDESCRIPTOR *,ppfd)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name wglDescribePixelFormat
#define func_args_proto(F) \
	F(HDC,hdc), \
	F(int,iPixelFormat), \
	F(UINT,nBytes), \
	F(LPPIXELFORMATDESCRIPTOR,ppfd)
#define func_body
#include "tools/func.h"

#define func_type int WINAPI
#define func_name wglGetPixelFormat
#define func_args_proto(F) \
	F(HDC,hdc)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglSetPixelFormat
#define func_args_proto(F) \
	F(HDC,hdc), \
	F(int,format), \
	F(const PIXELFORMATDESCRIPTOR *,ppfd)
#define func_body
#include "tools/func.h"

#define func_type WINBOOL WINAPI
#define func_name wglSwapBuffers
#define func_args_proto(F) \
	F(HDC,hdc)
#define func_body
#include "tools/func.h"

#define func_type PROC WINAPI
#define func_name wglGetDefaultProcAddress
#define func_args_proto(F) \
	F(LPCSTR,lpszProc)
#define func_body
#include "tools/func.h"
