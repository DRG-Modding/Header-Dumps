#ifndef UE4SS_SDK_MENU_DeepDiveCheat_HPP
#define UE4SS_SDK_MENU_DeepDiveCheat_HPP

class UMENU_DeepDiveCheat_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* Biome;
    class UButton* BTN_Close;
    class UButton* BTN_FindSeed;
    class UButton* BTN_StartMission;
    class UComboBoxString* Difficulty;
    class UImage* Image_101;
    class UImage* Image_166;
    class UTextBlock* Lbl_Seed;
    class UUI_DebugDeepDiveStage_C* UI_DebugDeepDiveStage1;
    class UUI_DebugDeepDiveStage_C* UI_DebugDeepDiveStage2;
    class UUI_DebugDeepDiveStage_C* UI_DebugDeepDiveStage3;
    int32 Seed;

    void UpdateTemplate();
    class UDeepDiveTemplate* GetTemplate();
    void GenerateDeepDive(class UDeepDive*& ReturnValue2);
    void GenerateBiomeOptions();
    void GetSelectedBiome(class UBiome*& Biome);
    void BndEvt__MENU_DeepDiveCheat_BTN_StartMission_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__MENU_DeepDiveCheat_BTN_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MENU_DeepDiveCheat_BTN_FindSeed_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MENU_DeepDiveCheat_Difficulty_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_MENU_DeepDiveCheat(int32 EntryPoint);
};

#endif
