#ifndef UE4SS_SDK_ITM_OnlineRestricted_HPP
#define UE4SS_SDK_ITM_OnlineRestricted_HPP

class UITM_OnlineRestricted_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BlockingPriviligeDebug;
    class UBasic_FlatGradientButton_C* Button_Resolve;
    class UVerticalBox* DescriptionEntryBox;
    class UBasic_Label_C* Header_Label;
    class UVerticalBox* OnlineRestrictedDescBox;
    EBlueprintablePrivilegeResults CurrentOnlineBlockingReason;
    TArray<EBlueprintablePrivilegeResults> PreviewBlocks;
    int32 FontSize;
    FString ResolveInputName;

    void Handle Key Down(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply, FEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void SetFontSize(int32 inFontSize);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue, bool CallFunc_Handle_Key_Down_OutHandled, FEventReply CallFunc_Handle_Key_Down_OutReply, FEventReply CallFunc_Unhandled_ReturnValue);
    void SetBlockSolution(EBlueprintablePrivilegeResults priviligeResults, FText ButtonText, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, EFSDTargetPlatform Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText K2Node_Select_Default, EFSDTargetPlatform Temp_byte_Variable_2, bool K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_2, bool K2Node_Select_Default_2);
    void SetBlockedReasonString(TArray<EBlueprintablePrivilegeResults>& InResults, FString Problematic Priviliges, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_OnlineRestricted_Entry_C* CallFunc_Create_ReturnValue, EBlueprintablePrivilegeResults CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void Should Show Online Restriction(bool& Should Show, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Resolve Issue();
    void Refresh Block Reasons();
    void Construct();
    void BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void Show external resolve UI right away();
    void ExecuteUbergraph_ITM_OnlineRestricted(int32 EntryPoint, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<EBlueprintablePrivilegeResults>& CallFunc_GetOnlinePlayBlockReasons_reasons, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EBlueprintablePrivilegeResults CallFunc_Array_Get_Item, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_ITM_OnlineRestrictedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, EBlueprintablePrivilegeResults CallFunc_Array_Get_Item_1, FText CallFunc_Conv_StringToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
