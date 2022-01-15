#ifndef UE4SS_SDK_ITM_RestoreSaveCategoryList_Entry_HPP
#define UE4SS_SDK_ITM_RestoreSaveCategoryList_Entry_HPP

class UITM_RestoreSaveCategoryList_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UButton* Button_0;
    UImage* IMG_MissionIcon;
    UTextBlock* Text_CreditsDescription;
    UTextBlock* Text_RankDescription;
    UTextBlock* Text_StarDescription;
    UTextBlock* TXT_SaveName;
    UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry(int32 EntryPoint);
}

#endif
