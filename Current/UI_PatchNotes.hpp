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

    TArray<FText> SelectByPlatform(TArray<FText>& Default, TArray<FText>& Xbox, TArray<FText>& Sony);
    void UpdatePatchNotes();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ScrollArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ScrollArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_PatchNotes(int32 EntryPoint);
};

#endif
