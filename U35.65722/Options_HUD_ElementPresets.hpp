#ifndef UE4SS_SDK_Options_HUD_ElementPresets_HPP
#define UE4SS_SDK_Options_HUD_ElementPresets_HPP

class UOptions_HUD_ElementPresets_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PresetBox;

    void AddPreset(EHUDVisibilityPresets PresetID, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOptions_HUD_ElementPresetItem_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_HUD_ElementPresets(int32 EntryPoint, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
