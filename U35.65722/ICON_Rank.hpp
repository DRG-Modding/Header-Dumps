#ifndef UE4SS_SDK_ICON_Rank_HPP
#define UE4SS_SDK_ICON_Rank_HPP

class UICON_Rank_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataRank;
    class UBorder* Icon_BG;
    class UBorder* Icon_Center;
    class UBorder* Icon_Left;
    class UBorder* Icon_Right;
    class UBorder* Icon_Top;
    class UImage* RankIcon;
    bool HideBorder;
    bool ShowIcon;

    void Construct();
    void Update(class AFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void SetRankAndStars(int32 Rank, int32 Stars);
    void ExecuteUbergraph_ICON_Rank(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_3, int32 K2Node_CustomEvent_Rank, int32 K2Node_CustomEvent_Stars, FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_2, class AFSDPlayerState* K2Node_Select_Default_1, const TArray<class UBorder*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_MenuColors_OutputColor_5, int32 Temp_int_Variable, class UBorder* CallFunc_Array_Get_Item, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FLinearColor K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
