#ifndef UE4SS_SDK_ITM_TopBar_PlayerRank_HPP
#define UE4SS_SDK_ITM_TopBar_PlayerRank_HPP

class UITM_TopBar_PlayerRank_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UTextBlock* DataRank;
    class UBorder* Icon_BG;
    class UBorder* Icon_Center;
    class UBorder* Icon_Left;
    class UBorder* Icon_Right;
    class UBorder* Icon_Top;
    int32 NewVar_0;

    void FromPlayerState(class APlayerState* PlayerState, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetRankAndStars(int32 Rank, int32 Stars);
    void OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, FPlayerProgress Progress);
    void ExecuteUbergraph_ITM_TopBar_PlayerRank(int32 EntryPoint, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, FExecuteUbergraph_ITM_TopBar_PlayerRankK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, int32 K2Node_CustomEvent_Rank, int32 K2Node_CustomEvent_Stars, FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor_4, const TArray<class UBorder*>& K2Node_MakeArray_Array, FLinearColor CallFunc_MenuColors_OutputColor_5, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UBorder* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, FPlayerProgress K2Node_CustomEvent_progress);
};

#endif
