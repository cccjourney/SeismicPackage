//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisNorm.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define norm_wrap_create             norm_wrap_create_
#define norm_wrap_delete             norm_wrap_delete_
#define norm_wrap_update             norm_wrap_update_
#define norm_wrap_wrapup             norm_wrap_wrapup_
#define norm_wrap_oneset             norm_wrap_oneset_
#define norm_wrap_twosets            norm_wrap_twosets_
#elif NEED_CAPITALS
#define norm_wrap_create             NORM_WRAP_CREATE
#define norm_wrap_delete             NORM_WRAP_DELETE
#define norm_wrap_update             NORM_WRAP_UPDATE
#define norm_wrap_wrapup             NORM_WRAP_WRAPUP
#define norm_wrap_oneset             NORM_WRAP_ONESET
#define norm_wrap_twosets            NORM_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   norm_wrap_create;
    CpseisBase::ModuleDestroy  norm_wrap_delete;
    CpseisBase::ModuleUpdate   norm_wrap_update;
    CpseisBase::ModuleWrapup   norm_wrap_wrapup;
    CpseisBase::ModuleOneset   norm_wrap_oneset;
    CpseisBase::ModuleTwosets  norm_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisNorm::CpseisNorm() : CpseisBase ("NORM",
                                       norm_wrap_create,
                                       norm_wrap_delete,
                                       norm_wrap_update,
                                       norm_wrap_wrapup,
                                       norm_wrap_oneset,
                                       norm_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//