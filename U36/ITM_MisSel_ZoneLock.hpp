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

    void Refresh();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void UpdateVisibility();
    void ExecuteUbergraph_ITM_MisSel_ZoneLock(int32 EntryPoint);
};

#endif
