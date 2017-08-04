//#ifndef MYLIB_H_INCLUDED
//#define MYLIB_H_INCLUDED
//
//#ifdef __cplusplus
//#define EXPORT extern "C" __declspec (dllexport)
//#else
//#define EXPORT __declspec (dllexport)
//#endif // __cplusplus
//
//#include <windows.h>
//
//EXPORT void HelloLib(void);
//
//#endif // MYLIB_H_INCLUDED

#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

#include<windows.h>

//***********************************************************
// ���������ӿ�

#ifdef _LIB
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllexport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
//######################## ����ͨ�ú��� #################################

DLL_API void HelloLib(void);

#ifdef __cplusplus
}
#endif

// �Զ������������������

#ifdef _DEBUG
#ifndef _LIB
#pragma comment(lib, "../Debug/MyLib.lib")
#pragma message("======== DEBUG mode ========")
#endif
#else
#ifndef _LIB
#pragma comment(lib, "../Release/MyLib.lib")
#pragma message("======== RELEASE mode ========")
#endif

#endif


#endif // MYLIB_H_INCLUDED
