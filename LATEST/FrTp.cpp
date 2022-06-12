/******************************************************************************/
/* File   : FrTp.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgFrTp.hpp"
#include "FrTp_core.hpp"
#include "infFrTp_Exp.hpp"
#include "infFrTp_Imp.hpp"

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
class module_FrTp:
      INTERFACES_EXPORTED_FRTP
      public abstract_module
   ,  public class_FrTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};
            infPduRClient_Lo        infPduRClient_FrTp;

   public:
      module_FrTp(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FRTP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FRTP_CONFIG_DATA, FRTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FRTP_CODE) DeInitFunction (void);
      FUNC(void, FRTP_CODE) MainFunction   (void);
      FRTP_CORE_FUNCTIONALITIES
};

extern VAR(module_FrTp, FRTP_VAR) FrTp;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, FRTP_VAR, FRTP_CONST) gptrinfEcuMClient_FrTp = &FrTp;
CONSTP2VAR(infDcmClient,  FRTP_VAR, FRTP_CONST) gptrinfDcmClient_FrTp  = &FrTp;
CONSTP2VAR(infSchMClient, FRTP_VAR, FRTP_CONST) gptrinfSchMClient_FrTp = &FrTp;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_FrTp, FRTP_VAR) FrTp(
   {
         FRTP_AR_RELEASE_VERSION_MAJOR
      ,  FRTP_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRTP_CODE) module_FrTp::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FRTP_CONFIG_DATA, FRTP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == FrTp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgFrTp;
         }
      }
      else{
#if(STD_ON == FrTp_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == FrTp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == FrTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_FrTp::DeInitFunction(void){
#if(STD_ON == FrTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrTp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == FrTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_FrTp::MainFunction(void){
#if(STD_ON == FrTp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrTp_InitCheck)
   }
   else{
#if(STD_ON == FrTp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRTP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRTP_CODE) module_FrTp::dummy(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

