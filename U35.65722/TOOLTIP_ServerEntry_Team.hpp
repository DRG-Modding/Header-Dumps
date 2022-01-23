#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP

class UTOOLTIP_ServerEntry_Team_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UVerticalBox* ContentBox;
    FSlateFontInfo ResourceFont;
    int32 MaxIcons;

    void SetData(class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked, FText Text, class UTexture2D* Icon, FLinearColor IconTint, class UPlayerCharacterID* Player, int32 Index, class UHorizontalBox* Line, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetName_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsTearingDown_isTearingDown, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_ServerEntry_TeamLine_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_Get_Player_Details_OutColor, class UTexture2D* CallFunc_Get_Player_Details_OutIcon, class UPlayerCharacterID* CallFunc_Get_Player_Details_OutPlayer, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UITM_ServerEntry_TeamLine_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, bool Temp_bool_Variable, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
