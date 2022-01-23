#ifndef UE4SS_SDK_HUD_PlayerClass_Label_HPP
#define UE4SS_SDK_HUD_PlayerClass_Label_HPP

class UHUD_PlayerClass_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_ClassName;
    class UInvalidationBox* InvalidationBox_0;

    void UpdateCharacterName(TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Format_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_PlayerClass_Label(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
};

#endif
