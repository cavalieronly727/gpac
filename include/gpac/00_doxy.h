/*
 * Copyright (c) TELECOM ParisTech 2019
 do not include in gpac, only here to create doxygen group for doc ordering
 */


//define doxygen groups for their order
/*!
\defgroup utils_grp Core Tools
 \defgroup setup_grp Base data types
 \ingroup utils_grp
 \defgroup libsys_grp Library configuration
 \ingroup utils_grp
 \defgroup mem_grp Memory Management
 \ingroup utils_grp
 \defgroup errors_grp Error codes
 \ingroup utils_grp
 \defgroup cst_grp Constants
 \ingroup utils_grp
 \defgroup log_grp Logging tools
 \ingroup utils_grp
 \defgroup bs_grp Bitstream IO
 \ingroup utils_grp
 \defgroup list_grp Generic List object
 \ingroup utils_grp
 \defgroup time_grp Local and Network time
 \ingroup utils_grp

 \defgroup net_grp Network
 \ingroup utils_grp
 \defgroup thr_grp Process and Threads
 \ingroup utils_grp
 \defgroup math_grp Math
 \ingroup utils_grp
 \defgroup download_grp Downloader
 \ingroup net_grp
 \defgroup cache_grp DownloaderCache
 \ingroup download_grp
 \defgroup osfile_grp File System
 \ingroup utils_grp
 \defgroup bascod_grp base64 encoding
 \ingroup utils_grp
 \defgroup color_grp Color
 \ingroup utils_grp
 \defgroup cfg_grp Configuration File
 \ingroup utils_grp
 \defgroup cst_grp Constants
 \ingroup utils_grp
 \defgroup lang_grp Languages
 \ingroup utils_grp
 \defgroup tok_grp Tokenizer
 \ingroup utils_grp
 \defgroup hash_grp Hash and Compression
 \ingroup utils_grp
 \defgroup utf_grp Unicode and UTF
 \ingroup utils_grp
 \addtogroup xml_grp XML
 \ingroup utils_grp
 \defgroup miscsys_grp Misc tools
 \ingroup utils_grp
 \defgroup sysmain_grp Main tools
 \ingroup utils_grp



\defgroup media_grp Media Tools

\defgroup iso_grp ISO Base Media File

\defgroup filters_grp Filter Management

\defgroup evg_grp 2D Vector Graphics Rendering

\defgroup scene_grp Scene Graph

\defgroup mpeg4sys_grp MPEG-4 Systems

\defgroup playback_grp Media Player

\defgroup jsapi_grp JavaScript APIs
\brief JavaScript API available in GPAC

Parts of the GPAC code can be scriptable using JavaScript. This part of the documentation describes the various APIs used in GPAC.

For SVG and DOM scenegraph API, see https://www.w3.org/TR/SVGTiny12/svgudom.html.

For BIFS and VRML scenegraph, see https://www.web3d.org/documents/specifications/14772/V2.0/part1/javascript.html

GPAC uses the QuickJS engine for JavaScript support. This means that JS C modules as defined in QuickJS can also be used :
https://bellard.org/quickjs/quickjs.html#C-Modules

Constants used in the API (error code, property types, specific flags for functions) are exported using the same name as native code, e.g. GF_STATS_LOCAL, GF_FILTER_SAP_1, etc...

Types and interfaces are described using WebIDL, see https://heycam.github.io/webidl/, with some slight modifications.

Errors are usually handled through exceptions.

\warning support for C modules is still not fully tested

*/
