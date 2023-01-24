#ifndef UE4SS_SDK_LIB_PlayerControllerBase_HPP
#define UE4SS_SDK_LIB_PlayerControllerBase_HPP

class ULIB_PlayerControllerBase_C : public UBlueprintFunctionLibrary
{

    void GetPlayerControllerBase(class UObject* __WorldContext, class ABP_PlayerControllerBase_C*& Controller);
};

#endif
