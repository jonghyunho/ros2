
#ifndef DDS_EXPORT_H
#define DDS_EXPORT_H

#ifdef DDS_STATIC_DEFINE
#  define DDS_EXPORT
#  define DDS_NO_EXPORT
#else
#  ifndef DDS_EXPORT
#    ifdef ddsc_EXPORTS
        /* We are building this library */
#      define DDS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define DDS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef DDS_NO_EXPORT
#    define DDS_NO_EXPORT 
#  endif
#endif

#ifndef DDS_DEPRECATED
#  define DDS_DEPRECATED __declspec(deprecated)
#endif

#ifndef DDS_DEPRECATED_EXPORT
#  define DDS_DEPRECATED_EXPORT DDS_EXPORT DDS_DEPRECATED
#endif

#ifndef DDS_DEPRECATED_NO_EXPORT
#  define DDS_DEPRECATED_NO_EXPORT DDS_NO_EXPORT DDS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef DDS_NO_DEPRECATED
#    define DDS_NO_DEPRECATED
#  endif
#endif

#endif /* DDS_EXPORT_H */
