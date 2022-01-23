#ifndef UE4SS_SDK_ITEM_SpaceRig_ClassName_HPP
#define UE4SS_SDK_ITEM_SpaceRig_ClassName_HPP

class UITEM_SpaceRig_ClassName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInvalidationBox* InvalidationBox_0;
    class UTextBlock* TextBlock_0;
    FText NewVar_0;

    void UpdateCharacterName(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITEM_SpaceRig_ClassName(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
