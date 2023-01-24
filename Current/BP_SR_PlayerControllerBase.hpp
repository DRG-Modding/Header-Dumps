#ifndef UE4SS_SDK_BP_SR_PlayerControllerBase_HPP
#define UE4SS_SDK_BP_SR_PlayerControllerBase_HPP

class ABP_SR_PlayerControllerBase_C : public ABP_PlayerControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsOpeningCharSelectionWorld;

    void GetMissionSelect(class UWindowWidget*& Widget);
    void GetPopupCrafting(class UWindowWidget*& Widget);
    void GetCrafting(class UWindowWidget*& Widget);
    void ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation);
    void ShowForgeWorkshop();
    void ExecuteUbergraph_BP_SR_PlayerControllerBase(int32 EntryPoint);
};

#endif
