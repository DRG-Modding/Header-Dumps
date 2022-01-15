#ifndef UE4SS_SDK_HUD_DamageClass_Item_HPP
#define UE4SS_SDK_HUD_DamageClass_Item_HPP

class UHUD_DamageClass_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimDeactivate;
    UWidgetAnimation* AnimActivate;
    UImage* Icon;
    FHUD_DamageClass_Item_CElapsed Elapsed;
    void Elapsed(UHUD_DamageClass_Item_C* Item);
    UPawnAffliction* Affliction;
    bool Activated;

    void Construct();
    void Deactivate();
    void Activate();
    void OnDeactivedFinished();
    void ExecuteUbergraph_HUD_DamageClass_Item(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Elapsed__DelegateSignature(UHUD_DamageClass_Item_C* Item);
}

#endif
