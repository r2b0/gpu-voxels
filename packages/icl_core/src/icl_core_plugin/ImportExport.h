// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This file is part of the IC Workspace.
//
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE.txt in the top
// directory of the source code.
//
// © Copyright 2014 FZI Forschungszentrum Informatik, Karlsruhe, Germany
//

// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2007-12-04
 *
 * \brief   Contains import/export definitions for the Win32 plattform.
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_PLUGIN_IMPORT_EXPORT_H_INCLUDED
#define ICL_CORE_PLUGIN_IMPORT_EXPORT_H_INCLUDED

#if defined(_SYSTEM_WIN32_) && !defined(_IC_STATIC_)
#  pragma warning ( disable : 4251 )

# if defined ICL_CORE_PLUGIN_EXPORT_SYMBOLS
#  define ICL_CORE_PLUGIN_IMPORT_EXPORT __declspec(dllexport)
# else
#  define ICL_CORE_PLUGIN_IMPORT_EXPORT __declspec(dllimport)
# endif

#elif defined(__GNUC__) && (__GNUC__ > 3) && !defined(_IC_STATIC_)

# define ICL_CORE_PLUGIN_IMPORT_EXPORT __attribute__ ((visibility("default")))

#else

# define ICL_CORE_PLUGIN_IMPORT_EXPORT

#endif

#endif // _icl_core_plugin_ImportExport_h_
