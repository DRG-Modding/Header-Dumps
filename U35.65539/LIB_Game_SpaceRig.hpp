#ifndef UE4SS_SDK_LIB_Game_SpaceRig_HPP
#define UE4SS_SDK_LIB_Game_SpaceRig_HPP

class ULIB_Game_SpaceRig_C : UBlueprintFunctionLibrary
{

    void RefreshSpacerigUpgradePreview(UPlayerController* PlayerController, UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSpaceRigUpgradePreview(UPlayerController* PlayerController, UObject* __WorldContext, UItemUpgrade*& PreviewUpgrade, bool CallFunc_IsValid_ReturnValue, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void SetSpaceRigUpgradePreview(UPlayerController* PlayerController, UItemUpgrade* ItemUpgrade, UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSRGameState(UObject* __WorldContext, UBP_GameState_SpaceRig_C*& GameState, UGameStateBase* CallFunc_GetGameState_ReturnValue, UBP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess);
    void GetSRController(UObject* __WorldContext, UBP_SR_PlayerControllerBase_C*& SRController, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UBP_SR_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_SR_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess);
}

#endif
