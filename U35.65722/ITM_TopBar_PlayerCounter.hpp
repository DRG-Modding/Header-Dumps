#ifndef UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP
#define UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP

class UITM_TopBar_PlayerCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ClassIcon;
    int32 Index;

    void GetPlayerClass(class UPlayerCharacterID*& OutPlayerCharacter, class AFSDPlayerState* PlayerState, int32 Counter, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void Refresh(FLinearColor IconTint, class UTexture2D* Icon, class UPlayerCharacterID* playerClass, class AFSDPlayerState* PlayerState, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_GetColor_ReturnValue, class UTexture2D* CallFunc_GetIcon_ReturnValue, class UPlayerCharacterID* CallFunc_GetPlayerClass_OutPlayerCharacter);
    void Construct();
    void ExecuteUbergraph_ITM_TopBar_PlayerCounter(int32 EntryPoint);
};

#endif
