#ifndef UE4SS_SDK_HUD_DamageClass_Item_HPP
#define UE4SS_SDK_HUD_DamageClass_Item_HPP

class UHUD_DamageClass_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimDeactivate;
    class UWidgetAnimation* AnimActivate;
    class UImage* Icon;
    FHUD_DamageClass_Item_CElapsed Elapsed;
    void Elapsed(class UHUD_DamageClass_Item_C* Item);
    class UPawnAffliction* Affliction;
    bool Activated;

    void Construct();
    void Deactivate();
    void Activate();
    void OnDeactivedFinished();
    void ExecuteUbergraph_HUD_DamageClass_Item(int32 EntryPoint, FExecuteUbergraph_HUD_DamageClass_ItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Elapsed__DelegateSignature(class UHUD_DamageClass_Item_C* Item);
};

#endif
