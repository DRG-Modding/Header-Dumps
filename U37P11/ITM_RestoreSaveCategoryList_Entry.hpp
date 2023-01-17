#ifndef UE4SS_SDK_ITM_RestoreSaveCategoryList_Entry_HPP
#define UE4SS_SDK_ITM_RestoreSaveCategoryList_Entry_HPP

class UITM_RestoreSaveCategoryList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UImage* IMG_MissionIcon;
    class UTextBlock* Text_CreditsDescription;
    class UTextBlock* Text_RankDescription;
    class UTextBlock* Text_StarDescription;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_RestoreSaveCategoryList_Entry(int32 EntryPoint);
};

#endif
