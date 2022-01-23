#ifndef UE4SS_SDK_ITM_MisSel_ZoneLock_HPP
#define UE4SS_SDK_ITM_MisSel_ZoneLock_HPP

class UITM_MisSel_ZoneLock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LockBreak;
    class UWidgetAnimation* Infobox_MouseOver;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UImage* IMG_Padlock;
    class UImage* IMG_Shadow;
    class UImage* IMG_TooltipArrow;
    class UButton* MainButton;
    class UVerticalBox* VertBox-Tooltip;
    class UPlanetZone* Zone;
    bool IsNewZone;

    void Refresh(FRefreshK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void UpdateVisibility();
    void ExecuteUbergraph_ITM_MisSel_ZoneLock(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
