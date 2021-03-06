//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisHrzstk.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define hrzstk_wrap_create             hrzstk_wrap_create_
#define hrzstk_wrap_delete             hrzstk_wrap_delete_
#define hrzstk_wrap_update             hrzstk_wrap_update_
#define hrzstk_wrap_wrapup             hrzstk_wrap_wrapup_
#define hrzstk_wrap_oneset             hrzstk_wrap_oneset_
#define hrzstk_wrap_twosets            hrzstk_wrap_twosets_
#elif NEED_CAPITALS
#define hrzstk_wrap_create             HRZSTK_WRAP_CREATE
#define hrzstk_wrap_delete             HRZSTK_WRAP_DELETE
#define hrzstk_wrap_update             HRZSTK_WRAP_UPDATE
#define hrzstk_wrap_wrapup             HRZSTK_WRAP_WRAPUP
#define hrzstk_wrap_oneset             HRZSTK_WRAP_ONESET
#define hrzstk_wrap_twosets            HRZSTK_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   hrzstk_wrap_create;
    CpseisBase::ModuleDestroy  hrzstk_wrap_delete;
    CpseisBase::ModuleUpdate   hrzstk_wrap_update;
    CpseisBase::ModuleWrapup   hrzstk_wrap_wrapup;
    CpseisBase::ModuleOneset   hrzstk_wrap_oneset;
    CpseisBase::ModuleTwosets  hrzstk_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisHrzstk::CpseisHrzstk() : CpseisBase ("HRZSTK",
                                       hrzstk_wrap_create,
                                       hrzstk_wrap_delete,
                                       hrzstk_wrap_update,
                                       hrzstk_wrap_wrapup,
                                       hrzstk_wrap_oneset,
                                       hrzstk_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
