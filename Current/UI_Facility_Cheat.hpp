#ifndef UE4SS_SDK_UI_Facility_Cheat_HPP
#define UE4SS_SDK_UI_Facility_Cheat_HPP

class UUI_Facility_Cheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_CallTetherdispenser1;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_CallTetherdispenser2;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_DeactivateShieldGenerators;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_SetGeneratorProgress1;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_SetGeneratorProgress2;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_StartCaretakerFight;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_StartCaretakerFight_NoWakeup;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToGen1;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToGen2;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_TeleportToMainFacility;
    class UVerticalBox* Left;
    class UVerticalBox* Left_1;
    int32 GeneratorIndex;

    void GetGenerator(int32 Index, class ABP_Facility_PowerStation_GeneratorBase_C*& Generator);
    void TeleportToMuleC();
    void TeleportToMuleB();
    void TeleportToMuleA();
    void TeleportToMule(class AActor* MULE);
    class UCheatMenu_BasicButtonWText_C* CreateMinimuleButton(FString MuleName);
    void GetSalvageObjective(class USalvageObjective*& AsSalvage Objective);
    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_ActivateSalvagePod_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_SetGeneratorProgress1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_CallTetherdispenser1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_CallTetherdispenser2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_SetGeneratorProgress2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToGen1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToGen2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_TeleportToMainFacility_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void BndEvt__CheatMenu_StartCaretakerFight_NoWakeup_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Facility_Cheat(int32 EntryPoint);
};

#endif
