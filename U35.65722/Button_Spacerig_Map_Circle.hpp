#ifndef UE4SS_SDK_Button_Spacerig_Map_Circle_HPP
#define UE4SS_SDK_Button_Spacerig_Map_Circle_HPP

class UButton_Spacerig_Map_Circle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UWidgetAnimation* HoverAnim;
    class UButton* Enter;
    class UImage* Image_DotFilled;
    class UImage* Image_Dots;
    class UOverlay* Images;
    class UMinersManualData* Data;
    TEnumAsByte<EHorizontalAlignment> DotHorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> DotVerticalAlignment;
    FButton_Spacerig_Map_Circle_COnHovered OnHovered;
    void OnHovered(class UButton_Spacerig_Map_Circle_C* Button, class UMinersManualData* Data);
    FButton_Spacerig_Map_Circle_COnUnhovered OnUnhovered;
    void OnUnhovered(class UButton_Spacerig_Map_Circle_C* Button);
    bool IsActive;

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Enter_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void PlayPing(float Delay);
    void SetIsActive(bool IsActive);
    void ExecuteUbergraph_Button_Spacerig_Map_Circle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_isActive);
    void OnUnhovered__DelegateSignature(class UButton_Spacerig_Map_Circle_C* Button);
    void OnHovered__DelegateSignature(class UButton_Spacerig_Map_Circle_C* Button, class UMinersManualData* Data);
};

#endif
