#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP

class UTOOLTIP_ServerEntry_Team_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UVerticalBox* ContentBox;
    FSlateFontInfo ResourceFont;
    int32 MaxIcons;

    void SetData(UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, TArray<UPlayerCharacterID*>& Players, bool IsClassLocked, FText Text, UTexture2D* Icon, FLinearColor IconTint, UPlayerCharacterID* Player, int32 Index, UHorizontalBox* Line, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetName_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsTearingDown_isTearingDown, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_ServerEntry_TeamLine_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_Get_Player_Details_OutColor, UTexture2D* CallFunc_Get_Player_Details_OutIcon, UPlayerCharacterID* CallFunc_Get_Player_Details_OutPlayer, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UITM_ServerEntry_TeamLine_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, bool Temp_bool_Variable, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
