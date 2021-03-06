//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisSynbp.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define synbp_wrap_create             synbp_wrap_create_
#define synbp_wrap_delete             synbp_wrap_delete_
#define synbp_wrap_update             synbp_wrap_update_
#define synbp_wrap_wrapup             synbp_wrap_wrapup_
#define synbp_wrap_oneset             synbp_wrap_oneset_
#define synbp_wrap_twosets            synbp_wrap_twosets_
#elif NEED_CAPITALS
#define synbp_wrap_create             SYNBP_WRAP_CREATE
#define synbp_wrap_delete             SYNBP_WRAP_DELETE
#define synbp_wrap_update             SYNBP_WRAP_UPDATE
#define synbp_wrap_wrapup             SYNBP_WRAP_WRAPUP
#define synbp_wrap_oneset             SYNBP_WRAP_ONESET
#define synbp_wrap_twosets            SYNBP_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   synbp_wrap_create;
    CpseisBase::ModuleDestroy  synbp_wrap_delete;
    CpseisBase::ModuleUpdate   synbp_wrap_update;
    CpseisBase::ModuleWrapup   synbp_wrap_wrapup;
    CpseisBase::ModuleOneset   synbp_wrap_oneset;
    CpseisBase::ModuleTwosets  synbp_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisSynbp::CpseisSynbp() : CpseisBase ("SYNBP",
                                       synbp_wrap_create,
                                       synbp_wrap_delete,
                                       synbp_wrap_update,
                                       synbp_wrap_wrapup,
                                       synbp_wrap_oneset,
                                       synbp_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
