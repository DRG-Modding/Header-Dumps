#ifndef UE4SS_SDK_CharSelect_HeroSelect_Name_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Name_HPP

class UCharSelect_HeroSelect_Name_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* NameBorder;
    class UTextBlock* PlayerName;
    FString Name;

    void SetName(FString PlayerName, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Len_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SetNameFromStateIndex(int32 Index, TSubclassOf<class APlayerCharacter>& CharacterClass, TArray<class APlayerState*> PlayerStates, class AFSDPlayerState* State, FString CallFunc_GetPlayerName_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CharSelect_HeroSelect_Name(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
};

#endif
