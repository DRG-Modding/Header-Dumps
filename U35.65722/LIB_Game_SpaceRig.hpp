#ifndef UE4SS_SDK_LIB_Game_SpaceRig_HPP
#define UE4SS_SDK_LIB_Game_SpaceRig_HPP

class ULIB_Game_SpaceRig_C : public UBlueprintFunctionLibrary
{

    void RefreshSpacerigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UObject* __WorldContext, class UItemUpgrade*& PreviewUpgrade, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void SetSpaceRigUpgradePreview(class APlayerController* PlayerController, class UItemUpgrade* ItemUpgrade, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C*& GameState, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSRController(class UObject* __WorldContext, class ABP_SR_PlayerControllerBase_C*& SRController, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SR_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_SR_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess);
};

#endif
