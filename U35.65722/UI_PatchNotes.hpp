#ifndef UE4SS_SDK_UI_PatchNotes_HPP
#define UE4SS_SDK_UI_PatchNotes_HPP

class UUI_PatchNotes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_SmallWindowWithHeader_Redesign_C* Basic_Menu_SmallWindowWithHeader;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class URichTextBlock* PatchTextBlock;
    class UBasic_ScrollArrow_C* ScrollArrow_Left;
    class UBasic_ScrollArrow_C* ScrollArrow_Right;
    int32 PatchNoteIndex;
    TArray<FText> PatchNoteHeaders_Steam;
    TArray<FText> PatchNotes_Steam;
    TArray<FText> PatchNoteHeaders_Xbox;
    TArray<FText> PatchNotes_Xbox;
    TArray<FText> Headers;
    TArray<FText> Notes;
    TArray<FText> PatchNoteHeaders_Sony;
    TArray<FText> PatchNotes_Sony;

    TArray<FText> SelectByPlatform(TArray<FText>& Default, TArray<FText>& Xbox, TArray<FText>& SonyEFSDTargetPlatform Temp_byte_Variable, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, TArray<FText>& K2Node_Select_Default);
    void UpdatePatchNotes(FText CallFunc_Array_Get_Item, FText CallFunc_Array_Get_Item_1);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_PatchNotes(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Max_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, TArray<FText>& CallFunc_SelectByPlatform_ReturnValue, TArray<FText>& CallFunc_SelectByPlatform_ReturnValue_1);
};

#endif
