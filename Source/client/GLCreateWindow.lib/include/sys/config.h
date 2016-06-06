#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef __GNUC__
#define __imported_name(x) (*__imp_##x)
#define __imported_stdcall(x) (__attribute__((stdcall)) *__imp_##x)
#else
#define __imported_name(x) (*_imp_##x)
#define __imported_stdcall(x) (__stdcall *_imp_##x)
#endif

#endif
