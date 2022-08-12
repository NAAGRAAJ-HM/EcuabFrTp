/******************************************************************************/
/* File   : EcuabFrTp.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabFrTp.hpp"
#include "infEcuabFrTp_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRTP_AR_RELEASE_VERSION_MAJOR                                         4
#define FRTP_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FRTP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible FRTP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(FRTP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible FRTP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabFrTp, FRTP_VAR) EcuabFrTp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRTP_CODE) module_EcuabFrTp::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, FRTP_CONST,       FRTP_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   FRTP_CONFIG_DATA, FRTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabFrTp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabFrTp_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabFrTp_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabFrTp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabFrTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_EcuabFrTp::DeInitFunction(
   void
){
#if(STD_ON == EcuabFrTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabFrTp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabFrTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_EcuabFrTp::MainFunction(
   void
){
#if(STD_ON == EcuabFrTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabFrTp_InitCheck)
   }
   else{
#if(STD_ON == EcuabFrTp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_EcuabFrTp::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

