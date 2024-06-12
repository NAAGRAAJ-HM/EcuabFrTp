#pragma once
/******************************************************************************/
/* File   : EcuabFrTp_Version.hpp                                             */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABFRTP_AR_RELEASE_VERSION_MAJOR                                     4
#define ECUABFRTP_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABFRTP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABFRTP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABFRTP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABFRTP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

