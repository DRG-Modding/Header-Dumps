#ifndef UE4SS_SDK_BP_SR_PlayerControllerBase_HPP
#define UE4SS_SDK_BP_SR_PlayerControllerBase_HPP

class ABP_SR_PlayerControllerBase_C : UBP_PlayerControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void GetMissionSelect(UWindowWidget*& Widget);
    void GetPopupCrafting(UWindowWidget*& Widget);
    void GetCrafting(UWindowWidget*& Widget);
    void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation);
    void ShowForgeWorkshop();
    void ExecuteUbergraph_BP_SR_PlayerControllerBase(int32 EntryPoint, bool K2Node_CustomEvent_resetToDefaultWeapon, ECharselectionCameraLocation K2Node_CustomEvent_cameraLocation);
}

#endif
