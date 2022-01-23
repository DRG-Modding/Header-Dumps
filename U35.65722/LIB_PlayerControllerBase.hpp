#ifndef UE4SS_SDK_LIB_PlayerControllerBase_HPP
#define UE4SS_SDK_LIB_PlayerControllerBase_HPP

class ULIB_PlayerControllerBase_C : public UBlueprintFunctionLibrary
{

    void GetPlayerControllerBase(class UObject* __WorldContext, class ABP_PlayerControllerBase_C*& Controller, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess);
};

#endif
