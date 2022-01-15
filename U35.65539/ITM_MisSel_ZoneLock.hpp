#ifndef UE4SS_SDK_ITM_MisSel_ZoneLock_HPP
#define UE4SS_SDK_ITM_MisSel_ZoneLock_HPP

class UITM_MisSel_ZoneLock_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* LockBreak;
    UWidgetAnimation* Infobox_MouseOver;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UImage* IMG_Padlock;
    UImage* IMG_Shadow;
    UImage* IMG_TooltipArrow;
    UButton* MainButton;
    UVerticalBox* VertBox-Tooltip;
    UPlanetZone* Zone;
    bool IsNewZone;

    void Refresh(WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void UpdateVisibility();
    void ExecuteUbergraph_ITM_MisSel_ZoneLock(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, ESlateVisibility K2Node_Select_Default);
}

#endif
