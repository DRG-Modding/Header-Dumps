#ifndef UE4SS_SDK_ITM_ClassLevelRequirement_HPP
#define UE4SS_SDK_ITM_ClassLevelRequirement_HPP

class UITM_ClassLevelRequirement_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFSDLabelWidget* DATA_Class;
    UITM_JobsEntry_Resource_C* ITM_JobsEntry_Resource;
    UPlayerCharacterID* Character;
    int32 RequiredLevel;

    void Construct();
    void ExecuteUbergraph_ITM_ClassLevelRequirement(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, const FText CallFunc_GetName_ReturnValue, bool CallFunc_HasCharacterRetired_ReturnValue, int32 CallFunc_GetClassLevel_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
