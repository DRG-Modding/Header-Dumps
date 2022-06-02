#ifndef UE4SS_SDK_HUD_Resources_Player_Icon_HPP
#define UE4SS_SDK_HUD_Resources_Player_Icon_HPP

class UHUD_Resources_Player_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UWidgetAnimation* Intro;
    class UWidgetAnimation* Outro;
    class UBorder* BG;
    class UInvalidationBox* Invalidation;
    class UHUD_DefaultLabel_C* Item_Name;
    class UProgressBar* ItemProgress;
    class UHUD_DefaultLabel_C* ResourceAmount;
    class UBasic_ResourceIcon_C* ResourceIcon;
    class UCappedResource* Resource;
    float Amount;
    FHUD_Resources_Player_Icon_COnResourceChanged OnResourceChanged;
    void OnResourceChanged(class UHUD_Resources_Player_Icon_C* ResourceIcon);

    void UpdateIfChanged(bool Changed);
    void SetAmount(float Amount, bool& ValueChanged);
    void Refresh();
    void SetResource(class UCappedResource* InResource, bool HideIfEmpty);
    void OnChanged(class UCappedResource* Resource, float Amount);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnOutroFinished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIncreased(class UCappedResource* Resource, float Amount);
    void Init Resource();
    void ExecuteUbergraph_HUD_Resources_Player_Icon(int32 EntryPoint);
    void OnResourceChanged__DelegateSignature(class UHUD_Resources_Player_Icon_C* ResourceIcon);
};

#endif
