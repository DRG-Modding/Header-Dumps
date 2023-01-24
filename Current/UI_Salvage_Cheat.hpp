#ifndef UE4SS_SDK_UI_Salvage_Cheat_HPP
#define UE4SS_SDK_UI_Salvage_Cheat_HPP

class UUI_Salvage_Cheat_C : public UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_ActivateSalvagePod;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_FinishNextSalvagePoint;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_RepairAllMules;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToPod;
    class UVerticalBox* Left;
    TArray<class UCheatMenu_BasicButtonWText_C*> MuleButtons;

    void TeleportToMule(class AActor* MULE);
    class UCheatMenu_BasicButtonWText_C* CreateMinimuleButton(FString MuleName);
    void GetSalvageObjective(class USalvageObjective*& AsSalvage Objective);
    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_ActivateSalvagePod_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToPod_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_FinishNextSalvagePoint_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void CustomEvent_0(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Salvage_Cheat(int32 EntryPoint);
};

#endif
