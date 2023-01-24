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
    void ExecuteUbergraph_HUD_DamageClass_Item(int32 EntryPoint);
    void Elapsed__DelegateSignature(class UHUD_DamageClass_Item_C* Item);
};

#endif
