#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_Header_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_Header_HPP

class UITM_SaveSlot_Entry_Header_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_ButtonScalable_C* Button_Convert;
    UBasic_ButtonScalable_C* Button_Delete;
    UBasic_ButtonScalable_C* Button_Load;
    UImage* IMG_MissionIcon;
    UTextBlock* Text_RankDescription;
    UTextBlock* Text_StarDescription;
    UTextBlock* TXT_SaveName;
    UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry_Header(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
