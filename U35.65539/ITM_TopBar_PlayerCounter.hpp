#ifndef UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP
#define UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP

class UITM_TopBar_PlayerCounter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ClassIcon;
    int32 Index;

    void GetPlayerClass(UPlayerCharacterID*& OutPlayerCharacter, UFSDPlayerState* PlayerState, int32 Counter, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void Refresh(FLinearColor IconTint, UTexture2D* Icon, UPlayerCharacterID* playerClass, UFSDPlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_GetColor_ReturnValue, UTexture2D* CallFunc_GetIcon_ReturnValue, UPlayerCharacterID* CallFunc_GetPlayerClass_OutPlayerCharacter);
    void Construct();
    void ExecuteUbergraph_ITM_TopBar_PlayerCounter(int32 EntryPoint);
}

#endif
