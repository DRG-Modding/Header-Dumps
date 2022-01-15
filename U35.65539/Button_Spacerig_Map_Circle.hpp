#ifndef UE4SS_SDK_Button_Spacerig_Map_Circle_HPP
#define UE4SS_SDK_Button_Spacerig_Map_Circle_HPP

class UButton_Spacerig_Map_Circle_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Ping;
    UWidgetAnimation* HoverAnim;
    UButton* Enter;
    UImage* Image_DotFilled;
    UImage* Image_Dots;
    UOverlay* Images;
    UMinersManualData* Data;
    TEnumAsByte<EHorizontalAlignment> DotHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> DotVerticalAlignment;
    FButton_Spacerig_Map_Circle_COnHovered OnHovered;
    void OnHovered(UButton_Spacerig_Map_Circle_C* Button, UMinersManualData* Data);
    FButton_Spacerig_Map_Circle_COnUnhovered OnUnhovered;
    void OnUnhovered(UButton_Spacerig_Map_Circle_C* Button);
    bool IsActive;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Enter_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void PlayPing(float Delay);
    void SetIsActive(bool IsActive);
    void ExecuteUbergraph_Button_Spacerig_Map_Circle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float K2Node_CustomEvent_Delay, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_isActive);
    void OnUnhovered__DelegateSignature(UButton_Spacerig_Map_Circle_C* Button);
    void OnHovered__DelegateSignature(UButton_Spacerig_Map_Circle_C* Button, UMinersManualData* Data);
}

#endif
