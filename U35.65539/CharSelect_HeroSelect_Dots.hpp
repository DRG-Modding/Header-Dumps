#ifndef UE4SS_SDK_CharSelect_HeroSelect_Dots_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Dots_HPP

class UCharSelect_HeroSelect_Dots_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Dot0;
    UImage* Dot1;
    UImage* Dot2;
    UImage* Dot3;
    UHorizontalBox* PlayerDotBox;
    UPlayerCharacterID* CharacterClass;
    TArray<UImage*> PlayerDots;

    void UpdateDots(UPlayerState* CurrentState, UPlayerState* MyState, TArray<UPlayerState*> States, int32 count, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, ESlateVisibility Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayerState* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Set Character Class(UPlayerCharacterID* CharacterClass);
    void Construct();
    void ExecuteUbergraph_CharSelect_HeroSelect_Dots(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, TArray<UImage*>& K2Node_MakeArray_Array);
}

#endif
