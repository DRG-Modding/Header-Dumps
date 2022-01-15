#ifndef UE4SS_SDK_Cheat_SetDifficultyRow_HPP
#define UE4SS_SDK_Cheat_SetDifficultyRow_HPP

class UCheat_SetDifficultyRow_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheckBox* CheckBox_SelectDiff;
    UTextBlock* TextBlock_DiffName;
    UDifficultySetting* Difficulty;
    FCheat_SetDifficultyRow_COn Difficulty Selected On Difficulty Selected;
    void On Difficulty Selected();

    void Set Difficulty Item(UDifficultySetting* Difficulty);
    void Check if owned difficulty is active();
    void BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_SetDifficultyRow(int32 EntryPoint, UDifficultySetting* K2Node_CustomEvent_Difficulty, bool CallFunc_IsValid_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_SetSavedCheatValue_ReturnValue, FString CallFunc_GetSavedCheatValue_ValueToGet, bool CallFunc_GetSavedCheatValue_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void On Difficulty Selected__DelegateSignature();
}

#endif
