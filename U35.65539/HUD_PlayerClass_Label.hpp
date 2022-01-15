#ifndef UE4SS_SDK_HUD_PlayerClass_Label_HPP
#define UE4SS_SDK_HUD_PlayerClass_Label_HPP

class UHUD_PlayerClass_Label_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_ClassName;
    UInvalidationBox* InvalidationBox_0;

    void UpdateCharacterName(TArray<FFormatArgumentData>& K2Node_MakeArray_Array, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Format_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_PlayerClass_Label(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
}

#endif
