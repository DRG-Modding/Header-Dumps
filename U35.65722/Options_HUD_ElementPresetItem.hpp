#ifndef UE4SS_SDK_Options_HUD_ElementPresetItem_HPP
#define UE4SS_SDK_Options_HUD_ElementPresetItem_HPP

class UOptions_HUD_ElementPresetItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* Button;
    EHUDVisibilityPresets PresetID;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_HUD_ElementPresetItem(int32 EntryPoint, EHUDVisibilityPresets Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UHUDVisibilityGroup*>& CallFunc_GetAllVisibilityGroups_ReturnValue, FText K2Node_Select_Default, class UHUDVisibilityGroup* CallFunc_Array_Get_Item, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
